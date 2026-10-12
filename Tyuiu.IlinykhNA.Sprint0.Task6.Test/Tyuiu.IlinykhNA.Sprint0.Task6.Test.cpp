#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IlinykhNA.Sprint0.Task6.Lib/Tyuiu.IlinykhNA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuIlinykhNASprint0Task6Test
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod6)
		{
			ISprint0Task6* date = new Service6V1();
			int a = 5;
			int b = 3;
			int sum;

			sum = date->Zuul(a, b);
			Assert::AreEqual(6, sum);
		}
	};
}

