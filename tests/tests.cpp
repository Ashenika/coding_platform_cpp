#include "pch.h"
#include "CppUnitTest.h"
#include "../template_cpp/pch.h"
#include "../template_cpp/AddString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(tests)
	{
	public:
		
		TEST_METHOD(concatString)
		{
			AddStrings myObj;
			string value = myObj.concatString("Hello", "World");
			string testval = "HelloWorld";
			Assert::AreEqual(testval, value);
		}

	};
}
