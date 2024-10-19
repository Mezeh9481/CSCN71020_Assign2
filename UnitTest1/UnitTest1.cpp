#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(RectangleTests)
	{
	public:
		
		TEST_METHOD(TestSetLength_ValidInput)
		{
			int length = 1;
			setLength(50, &length);
			Assert::AreEqual(50, length);
		}

		TEST_METHOD(TestSetLength_OutOfRangeLow)
		{
			int length = 1;
			setLength(-10, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(TestSetLength_OutOfRangeHigh)
		{
			int length = 1;
			setLength(150, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(TestSetWidth_ValidInput)
		{
			int width = 1;
			setWidth(50, &width);
			Assert::AreEqual(50, width);
		}

		TEST_METHOD(TestSetWidth_OutOfRangeLow)
		{
			int width = 1;
			setWidth(-5, &width);
			Assert::AreEqual(1, width);
		}

		TEST_METHOD(TestSetWidth_OutOfRangeHigh)
		{
			int width = 1;
			setWidth(150, &width);
			Assert::AreEqual(1, width);
		}
	};
}
