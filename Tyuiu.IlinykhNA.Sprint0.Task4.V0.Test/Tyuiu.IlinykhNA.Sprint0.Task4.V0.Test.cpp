#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IlinykhNA.Sprint0.Task.4.V1.Lib/Tyuiu.IlinykhNA.Sprint0.Task.4.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod4)
		{
			ISprint0Task4* date = new Service4();
			int a = 6;
			int b = 2;
			int c = 3;
			int d = 9;
			int summ;
			int result;


			summ = date->Calculate(a, b, c);
			result = summ / d;

			Assert::AreEqual(1, result);

		}
	};
}
