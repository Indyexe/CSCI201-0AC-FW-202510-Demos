#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <regex>
#include <cmath>
// include the header files for your classes
using namespace std;

TEST(testSuite, firstTest)
{
	// your test code goes here.
	// see https://google.github.io/googletest/ for more information on writing a unit test
	// assertions reference https://google.github.io/googletest/reference/assertions.html
}

// do not change any code below this comment
extern "C" int startTest(int x, char **y)
{
	// cout << "begin" << endl;
	// int x = 0;
	// char ** y = NULL;
	testing::InitGoogleTest(&x, y);
	// cout << "Init Complete"<< endl;
	int code = RUN_ALL_TESTS();
	// exit(code);
	return code;
}
// int i = startTest();
extern "C" int __wrap_main(int x, char **y)
{
	return startTest(x, y);
}