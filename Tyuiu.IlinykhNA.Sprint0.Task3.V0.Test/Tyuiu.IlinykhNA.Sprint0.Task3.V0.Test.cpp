#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IlinykhNA.Sprint0.Tak3.V0.Lib/Tyuiu.IlinykhNA.Sprint0.Tak3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3* date = new Service1();
			int a = 10;
			int b = 15;
			int c = 15;
			int d;

			//run
			d = date->SummV3(a, b, c);

			//valid
			Assert::AreEqual(40, d);
		}
	};
}

