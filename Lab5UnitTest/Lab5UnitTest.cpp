#include "pch.h"
#include "CppUnitTest.h"
#include "../Tutorial4Part2/matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5UnitTest
{
	TEST_CLASS(Lab5UnitTest)
	{
	public:
		//Used to test SumOfCols

		TEST_METHOD(TestMethodSumOfCols)
		{
			// Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { {2, 0, 0, 0},
				{1, 0, 0, 0},
				{1, 0, 0, 0},
				{1, 0, 0, 0} };
			double* ptrRet;

			// Act
			ptrRet = sumOfCols(matrix, ROW);

			/// Assert
			Assert::AreEqual(5.0, ptrRet[0]);
			Assert::AreEqual(0.0, ptrRet[1]);
			Assert::AreEqual(0.0, ptrRet[2]);
		}

		//Used to test SumOfRows

		TEST_METHOD(TestMethodSumOfRows)
		{
			// Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2,1,1,1};
			double* ptrRet;

			// Act
			ptrRet = sumOfRows(matrix, ROW);

			/// Assert
			Assert::AreEqual(5.0, ptrRet[0]);
			Assert::AreEqual(0.0, ptrRet[1]);
			Assert::AreEqual(0.0, ptrRet[2]);
		}

		//Used to test GetMatrixCell

		TEST_METHOD(TestMethodGetMatrixCell)
		{
			// Arrange
			double matrix[MAX_ROW][MAX_COL] = { {2, 3, 2, 1},
				{1, 3, 9, 2},
				{1, 5, 2, 5},
				{1, 8, 3, 1} };
			double value;

			// Act
			for (int i = 0; i < MAX_ROW; i++) {
				for (int j = 0; j < MAX_COL; j++) {
					value = getMatrixCell(matrix, MAX_ROW, i, j);
			// Assert
					Assert::AreEqual(value, matrix[i][j]);
				}
			}
		}
	};
}
