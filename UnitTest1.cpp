#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 6, arr[6] = { 2,0,3,-6,7,0 }, i;
			int maxSum = 0;
			int curSum = 0;
			for (i = 0; i < n; i++)
			{
				if (curSum <= 0)
				{
					curSum = arr[i];
				}
				else
				{
					curSum += arr[i];
				}
				if (curSum > maxSum)
				{
					maxSum = curSum;
				}
			}
			int real = 7;
			Assert::AreEqual(maxSum, real);
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 6, arr[6] = { 2,0,3,-6,1,0 }, i;
			int maxSum = 0;
			int curSum = 0;
			for (i = 0; i < n; i++)
			{
				if (curSum <= 0)
				{
					curSum = arr[i];
				}
				else
				{
					curSum += arr[i];
				}
				if (curSum > maxSum)
				{
					maxSum = curSum;
				}
			}
			int real = 5;
			Assert::AreEqual(maxSum, real);
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 6, arr[6] = { -2,9,-3,10,-4,-3 }, i;
			int maxSum = 0;
			int curSum = 0;
			for (i = 0; i < n; i++)
			{
				if (curSum <= 0)
				{
					curSum = arr[i];
				}
				else
				{
					curSum += arr[i];
				}
				if (curSum > maxSum)
				{
					maxSum = curSum;
				}
			}
			int real = 16;
			Assert::AreEqual(maxSum, real);
		}
		TEST_METHOD(TestMethod4)
		{
			int n = 6, arr[6] = { -3,-2,-1,-4,-5,-6 }, i;
			int maxSum = 0;
			int curSum = 0;
			for (i = 0; i < n; i++)
			{
				if (curSum <= 0)
				{
					curSum = arr[i];
				}
				else
				{
					curSum += arr[i];
				}
				if (curSum > maxSum)
				{
					maxSum = curSum;
				}
			}
			int real = 0;
			Assert::AreEqual(maxSum, real);
		}
		TEST_METHOD(TestMethod5)
		{
			int n = -5, arr[6] = { 2,0,3,-6,7,0 }, i;
			int maxSum = 0;
			int curSum = 0;
			for (i = 0; i < n; i++)
			{
				if (curSum <= 0)
				{
					curSum = arr[i];
				}
				else
				{
					curSum += arr[i];
				}
				if (curSum > maxSum)
				{
					maxSum = curSum;
				}
			}
			int real = 0;
			Assert::AreEqual(maxSum, real);
		}
	};
}
