#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IlinykhNA.Sprint0.Task5.V0.Lib/Tyuiu.IlinykhNA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuIlinykhNASprint0Task5V0Test
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod5)
		{
			ISprint0Task5* date = new Service5();
			float a = 5;
			float b = 14.6;
			float c = 15;
			float sum;

			sum = date->Zadacha(a, b, c);

			Assert::AreEqual(1095, sum, 0.001f);
		}




	};
}
