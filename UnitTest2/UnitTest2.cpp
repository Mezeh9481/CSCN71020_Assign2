#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(RectangleTests)
	{
	public:
		
		TEST_METHOD(TestGetPerimeter)
		{
			int length = 10;
			int width = 5;
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(15, perimeter); 
		}

		TEST_METHOD(TestGetArea)
		{
			int length = 10;
			int width = 5;
			int area = getArea(&length, &width);
			Assert::AreEqual(50, area);
		}
	};
}
