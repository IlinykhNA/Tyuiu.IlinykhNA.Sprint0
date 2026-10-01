// Tyuiu.IlinykhNA.Sprint0.Task5.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "/Users/Legion/source/repos/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function

class Service5 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * b * c;
	};
};

class Service5V2 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return (a*c)+(b*c);
	};
};

class Service5V3 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return (a + b) + c;
	};
};

class Service5V4 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return (a / 100) * b * c * 2;
	};
};
	//решено при условии, если в return можно добавлять статичные значения.

	class Service5V5 :public ISprint0Task5
	{
		virtual float Zadacha(float a, float b, float c) override
		{
			return (a + b + c) + (a*b)/2;
		};
};




