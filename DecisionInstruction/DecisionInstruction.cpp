#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj się
*/

/*
Operatory porównania:

*równości			==
*różności			!=
*większość			>
*mniejsze			<
*wieksze lub równe	>=
*mniejsze lub równe	<=

aregument1 >= argument2

Wynikiem działania tych operatorów
jest wartość logiczna true/false typu bool

bool zmienna = true;
bool zmienna2 = 5 > 74;

*/

/*
Operatory logiczne:
F-false
T-true 

			and				or			not
A	B	  A && B	      A || B		!A

F	F		F				F			T
F	T		F				T			T
T	F		F				T			F
T	T		T				T			F


*/


/*
Napisz funkcję która wczyta dwie liczby
i wykona dzielenia na nich
*/
void task1()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe pierwsza:" << "\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe: \n";
	std::cin >> secondNumber;

	// iloraz; 
	int quotient;

	/*	if (secondNumber != 0)
			quotient = firstNumber / secondNumber;

		if (secondNumber != 0)
			std::cout << "Iloraz:" << quotient << "\n";

		if (secondNumber == 0)
			std::cout << "Dzielenie przez zero !!! \n";
			tak robić nie wolno by my się powtarzamy "if"			*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz:" << quotient << "\n";
	}
	else /*w przeciwnym wypadku*/
		std::cout << "Dzielenie przez zero !!! \n";

	std::cout << "Koniec programu1 \n";
}

/*
Napidz funkcję która wczyta liczbę i wyświetli informację czy jest ona dodatnia czy nie
*/
void task2()
{
	int NumberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:" << "\n";
	std::cin >> NumberToCheck;

	if (NumberToCheck != 0)
	{
		if (NumberToCheck < 0)
			std::cout << " liczba jest ujemna \n";
		else
			std::cout << "Liczba jest dodatnia";
	}
	else
		std::cout << "liczba rowna zero";
}

/*
Napisz funkcję, która wczyta liczbęi wyświetli informację czy jest ona w zakresie <10,25>.

*/
void task3()
{
	int NumberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia (	żeby spewniał warunek <10/25>):" << "\n";
	std::cin >> NumberToCheck;

	/*
	if (NumberToCheck >= 10)
	{
		if (NumberToCheck <= 25)
			std::cout << "Ta liczba spewnia warunek";
		else
			std::cout << "liczba nie spewnia warunek";
	}
	else
		std::cout << "liczba nie spewnia warunek";
	*/

	if (NumberToCheck >= 10 && NumberToCheck <= 25)
		std::cout << "liczba jest w zakresie \n";
	else
		std::cout << "liczba nie jest w zakresie \n";

}

/*
Napisz funkcję która wczyta liczbę i wyświetli informacje czy jest ona parzysta czy nie. 
*/
void task4()
{
	int numberToCheck, rest;
	
	std::cout << "Podaj liczbę do sprawdzenia \n";
	std::cin >> numberToCheck; 

	rest = numberToCheck % 2;
	
	if (!(rest > 0))
		std::cout << "liczba jest parzysta \n";
		
	else
		std::cout << "liczba nie parzysta \n";


}

/*
Podaj bok kwadratu i wylicz pole i obwód 
*/
void task5()
{
	int bokKwadratu , Obwod , Pole;

	std::cout << "Podaj bok kwadratu \n";
	std::cin >> bokKwadratu;

	Obwod = bokKwadratu * 4;
	Pole = bokKwadratu * 2; 

	std::cout << "Pole:" << Pole << "\n";
	std::cout << "Obwod" << Obwod << "\n";
}

/*
napisz funkcjęktóra wczyta 2 liczby i powie która liczba jest większa 
*/
void task6()
{
	int firstNumber, secondNumber;

	std::cout << "podaj pierwssza liczbe \n";
	std::cin >> firstNumber;

	std::cout << "podaj drugą liczbe \n";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "liczby są równe \n";
	else
	{
		if (firstNumber > secondNumber)
			std::cout << firstNumber << "\t największa liczba \n";
		else
			std::cout << secondNumber << "\t największa liczba \n";
	}
}

/*
Napisz instrukcje ktora wczyta 3 liczby i pokaże która z nich najwększa 
*/
void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "Podaj Pierwsza liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj Druga liczbe \n";
	std::cin >> secondNumber;
	std::cout << "Podaj Trzecia liczbe \n";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber && firstNumber > thirdNumber)
		std::cout << firstNumber << " jest najwieksza";
	else
		if (secondNumber > firstNumber && secondNumber > thirdNumber)
			std::cout << secondNumber << " jest najwieksza";
		else
			std::cout << thirdNumber << " jest najwieksza";
}

/*
Napisza funkcję która wczyta 2 liczby i wyświetli je w kolejności rosnącej
*/
void task8()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj Pierwsza liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj Druga liczbe \n";
	std::cin >> secondNumber;

	if (firstNumber >= secondNumber)
		std::cout << secondNumber << "\t" << firstNumber;
	else
		std::cout << firstNumber <<"\t" << secondNumber;
}

/*
to samo co 8task tylko liczby 3 
*/
void task9()
{
	int firstNumber1, secondNumber2, thirdNumber3;

	std::cout << "Podaj Pierwsza liczbe \n";
	std::cin >> firstNumber1;
	std::cout << "Podaj Druga liczbe \n";
	std::cin >> secondNumber2;
	std::cout << "Podaj trzecia liczbe \n";
	std::cin >> thirdNumber3;


	/*if (firstNumber1 >= secondNumber2 && secondNumber2 >= thirdNumber3)
		std::cout << thirdNumber3 << "," << secondNumber2 << "," << firstNumber1;
	else if (firstNumber1 >= thirdNumber3 && thirdNumber3 >= secondNumber2)
		std::cout << secondNumber2 << "," << thirdNumber3 << "," << firstNumber1;
	else if (secondNumber2 >= firstNumber1 && firstNumber1 >= thirdNumber3)
		std::cout << thirdNumber3 << "," << firstNumber1 << "," << secondNumber2;
	else if (secondNumber2 >= thirdNumber3 && thirdNumber3 >= firstNumber1)
		std::cout << firstNumber1 << "," << thirdNumber3 << "," << secondNumber2;
	else if (thirdNumber3 >= firstNumber1 && firstNumber1 >= secondNumber2)
		std::cout << secondNumber2 << "," << firstNumber1 << "," << thirdNumber3;
	else if (thirdNumber3 >= secondNumber2 && secondNumber2 >= firstNumber1)
		std::cout << firstNumber1 << "," << secondNumber2 << "," << thirdNumber3;
		*/

	
	if (firstNumber1 >= secondNumber2 && firstNumber1 >= thirdNumber3 && secondNumber2 >= thirdNumber3)
		std::cout << thirdNumber3 << "," << secondNumber2 << "," << firstNumber1;
	else if (firstNumber1 >= secondNumber2 && firstNumber1 >= thirdNumber3 && thirdNumber3 >= secondNumber2)
		std::cout << secondNumber2<< "," << thirdNumber3 << "," << firstNumber1;
	else if (secondNumber2 >= firstNumber1 && secondNumber2 >= thirdNumber3 && thirdNumber3 >= firstNumber1)
		std::cout << firstNumber1 << "," << thirdNumber3 << "," << secondNumber2;
	else if (secondNumber2 >= firstNumber1 && secondNumber2 >= thirdNumber3 && firstNumber1 >= thirdNumber3)
		std::cout << thirdNumber3<< "," << firstNumber1 << "," << secondNumber2;
	else if (thirdNumber3 >= firstNumber1 && thirdNumber3 >= secondNumber2 && firstNumber1 >= secondNumber2)
		std::cout << secondNumber2 << "," << firstNumber1 << "," << thirdNumber3;
	else if (thirdNumber3 >= firstNumber1 && thirdNumber3 >= secondNumber2 && secondNumber2 >= firstNumber1)
		std::cout << firstNumber1<< "," << secondNumber2<< "," << thirdNumber3;
}




/*
 task ktory wczyta numer dnia tygodnia i wyswilti jego nazwe 
*/


void task10()
{
	int dayOfWeek;

	std::cout << "Podaj numer dnia tygodnia (0-7)\n";
	std::cin >> dayOfWeek;
	if (dayOfWeek < 8 && dayOfWeek >= 0)
	{
		if (dayOfWeek == 0 || dayOfWeek == 7)
			std::cout << "niedziela \n";
		else if (dayOfWeek == 1)
			std::cout << "poniedzialek \n";
		else if (dayOfWeek == 2)
			std::cout << "wtorek \n";
		else if (dayOfWeek == 3)
			std::cout << "sroda \n";
		else if (dayOfWeek == 4)
			std::cout << "czwartek\n";
		else if (dayOfWeek == 5)
			std::cout << "piatek \n";
		else if (dayOfWeek == 6)
			std::cout << "sobota \n";
	}
	else
		std::cout << "blad, zle podano nomer dnia tygodnia \n";
}
/*
Zadanie 11*
Napisz funkcjê, która wczyta wspó³czynniki równania kwadratowego i wyœwietli pierwiastki tego równania
*/
void task11()
{


}

/*
Zadanie 12
Napisz funkcjê, która wyœwietli komunikaty "gor¹co", "ciep³o", "zimno", "bardzo zimno" w zale¿noœci od wczytanej temperatury Zakresy: powy¿ej 30, 15-30, 0-15 i poni¿ej 0.
*/

void task12()
{
	int numberToCheck;

	std::cout << "Podaj temperature \n";
	std::cin >> numberToCheck;

	if (numberToCheck > 30)
		std::cout << "goraco \n";
	else if (numberToCheck < 31 && numberToCheck > 14)
		std::cout << "cieplo \n";
	else if (numberToCheck < 15 && numberToCheck > 0)
		std::cout << "zimno \n";
	else 
		std::cout << "mega zimno \n";


}

//zadanie z tygodniami innym sposobem
void task13()
{
	int dayOfWeek;

	std::cout << "Podaj numer dnia tygodnia (0-7)\n";
	std::cin >> dayOfWeek;

	switch (dayOfWeek)
	{
	case 1:
		std::cout << "poniedzialek \n";
		break;
	case 2:
		std::cout << "wtorek \n";
		break;
	case 3:
		std::cout << "sroda \n";
		break;
	case 4:
		std::cout << "czwartek \n";
		break;
	case 5:
		std::cout << "piatek\n";
		break;
	case 6:
		std::cout << "sobota\n";
	case 7:
	case 0:
		std::cout << "niedzila\n";
		break;
	default:
		std::cout << " bladny podana liczba\n";

	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	int taskNumber;
	std::cout << "podaj numer zadania:\n";
	std::cin >> taskNumber;

	switch (taskNumber)
	{
	case 1:
		task1(); //Napisz funkcję która wczyta dwie liczby i wykona dzielenia na nich
		break;
	case 2:
		task2(); //Napidz funkcję która wczyta liczbę i wyświetli informację czy jest ona dodatnia czy nie
		break;
	case 3:
		task3(); //Napisz funkcję, która wczyta liczbęi wyświetli informację czy jest ona w zakresie <10,25>.
		break;
	case 4:
		task4();//Napisz funkcję która wczyta liczbę i wyświetli informacje czy jest ona parzysta czy nie. 
		break;
	case 5:
		task5();//Podaj bok kwadratu i wylicz pole i obwód 
		break;
	case 6:
		task6(); //napisz funkcjęktóra wczyta 2 liczby i powie która liczba jest większa
		break;
	case 7:
		task7();//Napisz instrukcje ktora wczyta 3 liczby i pokaże która z nich najwększa 
		break;
	case 8:
		task8(); //Napisza funkcję która wczyta 2 liczby i wyświetli je w kolejności rosnącej
		break;
	case 9:
		task9();//to samo co 8task tylko liczby 3 
		break;
	case 10:
		task10(); //task ktory wczyta numer dnia tygodnia i wyswilti jego nazwe 
		break;
	case 11:
		task11(); //Napisz funkcjê, która wczyta wspó³czynniki równania kwadratowego i wyœwietli pierwiastki tego równania
		break;
	case 12:
		task12(); //Napisz funkcjê, która wyœwietli komunikaty "gor¹co", "ciep³o", "zimno", "bardzo zimno" 
				  //w zale¿noœci od wczytanej temperatury Zakresy: powy¿ej 30, 15-30, 0-15 i poni¿ej 0.
		break;
	case 13:
		task13(); //zadanie z tygodniami innym sposobem
		break;
	default:
		std::cout << "nIma";
	}

	//task1();	
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
}