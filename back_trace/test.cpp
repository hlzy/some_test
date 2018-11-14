#include <unistd.h>
#include <stdio.h>
#include <execinfo.h>
#include <stdlib.h>
#include <string.h>
void backtrace()
{
        const int maxLevel = 200;
        void* buffer[maxLevel];
        int level = backtrace(buffer, maxLevel);
        const int SIZE = 1024;
        char cmd[SIZE] = "addr2line -C -f -e ";

        // let prog point to the end of "cmd"

        char* prog = cmd + strlen(cmd);

        int r = readlink("/proc/self/exe", prog, sizeof(cmd) - (prog-cmd)-1);

        FILE* fp = popen(cmd, "w");
        if (!fp)
        {
                perror("popen");
                return;
        }
        for (int i = 0; i < level; ++i)
        {
                fprintf(fp, "%p\n", buffer[i]);
        }

        fclose(fp);
}
void foo(int, char*)
{
        backtrace();
}
void bar(double)
{
        foo(0, NULL);
}

void bar2(double)
{
        bar(0.0);
}


int main()
{
        bar2(0.0);
        //A a;

        return 0;
}
