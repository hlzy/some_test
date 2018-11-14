
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main(int argc, char *argv[])
{
	FILE *filp = NULL;
	char fileDir[] = "test.txt"; 
	char dataPtr[] = "Helloworld";
//        int dataPtr = 4;
	printf("sizeof(dataPtr) = %ld\n",sizeof(dataPtr));
	filp = fopen(fileDir,"wb");  /* 可读可写，不存在则创建 */
	int writeCnt = fwrite(&dataPtr,sizeof(dataPtr),1,filp);  /* 返回值为1 */
	writeCnt = fprintf(filp,"%d\n",55);  /* 返回值为1 */
	//int writeCnt = fwrite(dataPtr,1,sizeof(dataPtr),filp);  /* 返回值为11 */
	printf("writeCnt = %d\n",writeCnt);
	fclose(filp);
 
	FILE *fp = NULL;
	fp = fopen(fileDir,"r");
	char buffer[256];
	int readCnt = fread(buffer,sizeof(buffer),1,fp);  /* 返回值为0 */
	//int readCnt = fread(buffer,1,sizeof(buffer),fp);  /* 返回值为11 */	
	printf("readCnt = %d\n",readCnt);
	fclose(fp);
	
	printf("%s\n",buffer);
	exit(0);
}
