// Tyuiu.IlinykhNA.Sprint0.Task5.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.IlinykhNA.Sprint0.Task5.V0.Lib/Tyuiu.IlinykhNA.Sprint0.Task5.V0.Lib.cpp"
using namespace std;
int main()
{
	
	ISprint0Task5* date = new Service5;
	string name;
	float a, b, c, sum;
	cout << "ISprintTask5.V1 \n";
	cout << "Your Username: ";
	cin >> name;
	printf ("Enter the lenght = ");
	scanf_s ("%f", &a);
	printf ("Enter the width = ");
	scanf_s("%f", &b);
	printf ("Enter the height = ");
	scanf_s("%f", &c);
	printf("Volume = %.1f", sum = date->Zadacha(a, b, c));
	cout << std::endl;

	ISprint0Task5* purchase = new Service5V2;
	float notebook, cover, quantity, summ;
	cout << "\nISprintTask5.V2 \n";
	cout << "Ilinykh.NA: \n";
	printf("Enter the price notebook = ");
	scanf_s("%f", &notebook);
	printf("Enter the price cover = ");
	scanf_s("%f", &cover);
	printf("Enter the price quantity = ");
	scanf_s("%f", &quantity);
	summ = purchase->Zadacha(notebook, cover, quantity);
	printf("Purchase = %.2f rub.", summ);
	cout << std::endl;

	ISprint0Task5* amount = new Service5V3;
	float priceCandyBro, priceCandySis, priceCookie, purchase_Amount;
	cout << "\nISprintTask5.V3 \n";
	cout << "Ilinykh.NA: \n";
	printf("Enter the Price candy Ivan = ");
	scanf_s("%f", &priceCandyBro);
	printf("Enter the Price candy sister = ");
	scanf_s("%f", &priceCandySis);
	printf("Enter the Price cookies = ");
	scanf_s("%f", &priceCookie);
	purchase_Amount = amount->Zadacha(priceCandyBro, priceCandySis, priceCookie);
	printf("Purchase amount = %.2f rub.", purchase_Amount);
	cout << std::endl;

	ISprint0Task5* price = new Service5V4;
	float distance, expenditure, price_L, total_Price;
	printf("\nISprintTask5.V4 \n");
	printf("Enter the Distance = ");
	scanf_s("%f", &distance);
	printf("Enter gasoline consumption = ");
	scanf_s("%f", &expenditure);
	printf("Enter Price per liter = ");
	scanf_s("%f", &price_L);
	total_Price = price->Zadacha(distance, expenditure, price_L);
	printf("Total price = %.2f", total_Price);
	cout << std::endl;

	ISprint0Task5* decision = new Service5V5;
	float сathetus_One, сathetus_two, hypotenuse,sum_Equal;
	printf("\nISprintTask5.V5 \n");
	printf("Enter the cathetus one = ");
	scanf_s("%f", &сathetus_One);
	printf("Enter the cathetus two = ");
	scanf_s("%f", &сathetus_two);
	printf("Enter the hypotenuse = ");
	scanf_s("%f", &hypotenuse);
	sum_Equal = decision->Zadacha(сathetus_One, сathetus_two, hypotenuse);
	printf("Summa equal = %g", sum_Equal);
	cout << std::endl;

	
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
