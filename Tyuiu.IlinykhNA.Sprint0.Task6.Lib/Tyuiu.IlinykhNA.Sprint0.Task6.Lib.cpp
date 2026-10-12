// Tyuiu.IlinykhNA.Sprint0.Task6.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "/Users/Legion/source/repos/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service6V1 :public ISprint0Task6
{
public:
	virtual int Zuul(int a, int b) override
	{
		return ((a / 3) / b) + 6;
	};
};
