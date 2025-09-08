#include <iostream>

void task1()
{
	int a1, a2, a3;
	int tab[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> tab[i];
	}
}

void task2()
{
	const int size = 10;
	int tabOfNumbers[size];
	int smaller = 9999;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 1000;
		if (tabOfNumbers[i] < smaller)
			smaller = tabOfNumbers[i];
	}
	std::cout << "najmniejsza liczba to:" << smaller << "\n";
	std::cout << "Liczby w tablice : \n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << "\n";
	}
}

void zadanieoue()
{
	const int tableSize = 3;
	int tab[tableSize];
	float avarageOfNumber;
	float sumeOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % 10;
		sumeOfNumbers = sumeOfNumbers + tab[i];
	}

	avarageOfNumber = sumeOfNumbers / tableSize;

	for (int i = 0; i < tableSize; i++)
	{
		std::cout << tab[i] << ", ";
	}
	std::cout << "\n" << "srednia = " << avarageOfNumber;
}

//*Napisz funkcjê, która dla kolekcji danych liczbowych policzy ile jest liczb wiêkszych od œredniej arytmetycznej.task3

void task3()
{
	const int tableSize = 3;
	int tab[tableSize];
	float avarageOfNumber;
	float sumeOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % 10;
		sumeOfNumbers = sumeOfNumbers + tab[i];
		std::cout << tab[i] << ", ";
	}
	avarageOfNumber = sumeOfNumbers / tableSize;

	std::cout << "\n" << "srednia = " << avarageOfNumber;

	int numbersBiggerThenAvarage = 0;

	for (int i = 0; i < tableSize; i++)
	{
		if (tab[i] > avarageOfNumber)
		{
			numbersBiggerThenAvarage++;
		}
	}

	std::cout << "\n" << "Liczb wiekszych od sredniej = " << numbersBiggerThenAvarage;
}


// *Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejnoœci.task4

void task4()
{
	const int tableSize = 3;
	int tab[tableSize];
	int secondTab[tableSize];

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % 10;
		std::cout << tab[i] << ", ";
	}
	std::cout << " \n";

	for (int i = 0, j = tableSize - 1; i < tableSize; i++, j--)
	{
		secondTab[j] = tab[i];
	}

	for (int i = 0; i < tableSize; i++)
	{
		std::cout << secondTab[i] << ", ";
	}
}

//*Napisz funkcje, która dla kolekcji danych liczbowych obliczy czêstotliwoœæ wystêpowania danej liczby.task5
//nie dokoncz
void task5()
{
	const int bottomRange = -4;
	const int upperRange = 5;
	const int tableSize = 10;
	int tab[tableSize];
	int intervalOfNumber[upperRange -bottomRange + 1];


	for (int i = 0; i < upperRange - bottomRange + 1; i++)
	{
		intervalOfNumber[i] = 0;
	}

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % (upperRange - bottomRange + 1) + bottomRange;		
		std::cout << tab[i] << ", ";
	}

	for (int i = 0; i < tableSize; i++)
	{
		intervalOfNumber[tab[i] - bottomRange]++;
	}

	std::cout << "\n";

	for (int i = 0; i < upperRange - bottomRange +1 ; i++)
	{
		std::cout << "czestotliwosc liczby " <<( i + bottomRange) << " jest:  " << intervalOfNumber[i] << "\n";
	}

}

//*Napisz funkcjê, która dla kolekcji danych liczbowych znajdzie najd³u¿szy rosn¹cy podci¹g.task6
void task6()
{
	const int bottomRange = 1;
	const int upperRange = 10;
	const int size = 10;
	int tab[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % (upperRange - bottomRange + 1) + bottomRange;
		std::cout << tab[i] << ", ";

	}
	
	int maxSubsequencelLenght = 1;
	int currentSubsequencelLenght = 1;

	for (int i = 1; i < size; i++)
	{
		if (tab[i] >= tab[i - 1])
			currentSubsequencelLenght++;
		else if (currentSubsequencelLenght > maxSubsequencelLenght)
		{
			maxSubsequencelLenght = currentSubsequencelLenght;
			currentSubsequencelLenght = 1;
		}
		else
			currentSubsequencelLenght = 1; 
	}
	
	if (currentSubsequencelLenght > maxSubsequencelLenght)
	{
		maxSubsequencelLenght = currentSubsequencelLenght;
	}

	std::cout << "\n" << " Najdlurzszy podciag jest = " << maxSubsequencelLenght; 
}

//Napisz funkcjê, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych.task 7

void task7()
{
	const int size = 10;
	int tab[size];
	int tabEven[size]; //parzyste 
	int tabOdd[size];  //nieparzyste 

	int numbersEven = 0;
	int numbersOdd = 0;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 100 + 1;
		std::cout << tab[i] << ", ";

		if (tab[i] % 2 == 0)
		{
			tabEven[numbersEven] = tab[i];
			numbersEven++;
		}
		else
		{
			tabOdd[numbersOdd] = tab[i];
			numbersOdd++;
		}
	}

	std::cout << "\n" << "liczby parzyste:" << "\n";

	for (int i = 0; i < numbersEven; i++)
	{
		std::cout << tabEven[i] << ", ";
	}

	std::cout << "\n" << "liczby nieparzyste:" << "\n";
	for (int i = 0; i < numbersOdd; i++)
	{
		std::cout << tabOdd[i] << ", ";
	}
}

int main()
{
	//task2();
	//zadanieoue();
	//task3();
	//task4();   //cntrl + k + d is super 
	 //task5(); 
	//task6();
	task7();
}