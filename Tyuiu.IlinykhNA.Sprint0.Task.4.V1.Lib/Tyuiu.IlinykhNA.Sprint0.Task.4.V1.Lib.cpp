// Tyuiu.IlinykhNA.Sprint0.Task.4.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service4 :public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c) override
	{
		return a / b * c;
	};
};
