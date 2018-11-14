#include <gflags/gflags.h>
#include <glog/logging.h>

#include <iostream>
using namespace std;

DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
DEFINE_string(languages, "english,french,german", "comma-separated list of languages to offer in the 'lang' menu");

int main(int argc, char **argv) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  google::SetUsageMessage("hello hoooo");
  for (int i = 0 ; i <argc ;i++)
  {
    cout <<"i:"<< argv[i] <<endl;
  }
  cout << "argc=" << argc << endl;
  if (FLAGS_big_menu) {
    cout << "big menu is ture" << endl;
  } else {
    cout << "big menu is flase" << endl;
  }
  LOG(INFO) << "error,GOOLE";
  gflags::ShowUsageWithFlagsRestrict(argv[0],"hhhhhhhhhhh");
  cout << "languages=" << FLAGS_languages << endl;
  CHECK_EQ(2, 2) << ": The world must be ending!";
  cout << "languages=" << FLAGS_languages << endl;
  LOG(INFO) << "HELLO,GOOLE";
  return 0;
}
