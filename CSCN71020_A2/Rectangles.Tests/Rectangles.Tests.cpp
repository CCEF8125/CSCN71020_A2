#include "pch.h"
#include "CppUnitTest.h"

#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
	TEST_CLASS(RectangleUnitTests)
	{
	public:

		// ************************************************
		// Task 1: Unit tests for getPerimeter and getArea
		// ************************************************

		// Test getPerimeter with typical positive values.
		TEST_METHOD(Test_Perimeter_Positive_Values)
		{
			int length = 6;
			int width = 3;

			int result = getPerimeter(&length, &width);

			Assert::AreEqual(18, result); // Expected result: 2 * (6 + 3) = 18
		}

		// Test getArea with typical positive values
		TEST_METHOD(Test_Area_Positive_Values) {

			int length = 9;
			int width = 4;

			int result = getArea(&length, &width);

			Assert::AreEqual(36, result); // Expected result: 9 * 4 = 36
		}
		// ************************
		// Task 2: setLength Tests
		// ************************

		// Test setLength with a mid-range value input.
		TEST_METHOD(Test_SetLength_MidrangeValue) {

			int length = 0;
			int input = 50;

			setLength(input, &length);

			Assert::AreEqual(50, length);
		}

		// Test setLength with a boundary input.
		TEST_METHOD(Test_SetLength_Boundary) {

			int length = 0;
			int input = 99;

			setLength(input, &length);

			Assert::AreEqual(99, length);
		}

		// Test setLength with an invalid input. The length value should not change after input.
		TEST_METHOD(Test_SetLength_Invalid) {

			int length = 5;
			int input = 102;

			setLength(input, &length);

			Assert::AreEqual(5, length);
		}

		// ***********************
		// Task 2: setWidth Tests
		// ***********************

		// Test setWidth with a mid-range value input.
		TEST_METHOD(Test_SetWidth_MidrangeValue) {

			int width = 0;
			int input = 45;

			setWidth(input, &width);

			Assert::AreEqual(45, width);
		}

		// Test setWidth with a boundary input
		TEST_METHOD(Test_SetWidth_Boundary) {

			int width = 0;
			int input = 1;

			setWidth(input, &width);

			Assert::AreEqual(1, width);
		}

		// Test setWidth with an invalid input. The width value should not change after input.
		TEST_METHOD(Test_SetWidth_Invalid) {

			int width = 15;
			int input = 0;

			setWidth(input, &width);

			Assert::AreEqual(15, width);
		}
	};
}
