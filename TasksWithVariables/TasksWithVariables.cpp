#include <iostream>
#include <cmath> //dla pierwisatku , matymatyczna biblioteka 

//using namespace std; 
//mozna pisac bez " std:: "

/*
napisz funkcjê która pobierze dwie liczby oraz wykona podstawowe operacje aretmetyczne
*/
void task1()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe pierwsza:" << "\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe: \n";
	std::cin >> secondNumber;

	//  suma,   ró¿nica, iloczyn,  iloraz , reszta dzielenia; 
	int sum, difference, product, quotient, rest;

	sum = firstNumber + secondNumber;
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber;
	quotient = firstNumber / secondNumber;
	rest = firstNumber % secondNumber;

	std::cout << "Suma:" << sum << "\n";
	std::cout << "Roznica:" << difference << "\n";
	std::cout << "Iloczyn:" << product << "\n";
	std::cout << "Iloraz:" << quotient << "\n";
	std::cout << "reszta_z_dzielenia:" << rest << "\n";
}

/*Przetestowaæ ró¿ne warianry dzielenia
*/ 
void task2 ()
{

	std::cout << "15 / 4 =  " << (15 / 4) << "\n";
	std::cout << "15.0 / 4 =  " << (15.0 / 4) << "\n";
	std::cout << "15 / 4.0 =  " << (15 / 4.0) << "\n";
	std::cout << "15.0 / 4.0 =  " << (15.0 / 4.0) << "\n";
}

/*
napisz funkcjê która obliczy pole trójk¹ta.
*/

void task3()
{

	float side_a, height;
	std::cout << "podaj bok a:" << "\n";
	std::cin >> side_a; 
	std::cout << "Podaj wysokosc :" << "\n";
	std::cin >> height;
	std::cout << "wzor na pole jest (a*h)/2" << "\n" << "\n";
	std::cout << "pole trojkata jest : "; 
	float area; 
	area = 0.5 * side_a * height ; 
	std::cout << area; 

}

/*
Napisz funkcjê, która obliczy przek¹tn¹ kwadratu.
*/
void task4()
{
	float side;
	std::cout << "podaj bok kwadratu:" << "\n";
	std::cin >> side;
	float diagonal; 
	diagonal = side * sqrt(2);

	std::cout << "przekatna kwadratu jest:" << diagonal << "\n" ;

}

void task5()
{



}

int main()
{
 
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}

