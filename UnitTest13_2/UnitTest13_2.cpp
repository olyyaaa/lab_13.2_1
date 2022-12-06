#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_13.2/lab_13.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest132
{
	TEST_CLASS(UnitTest132)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x;
			x = main();
			Assert::AreEqual(x, 0);

		}
	};
}
