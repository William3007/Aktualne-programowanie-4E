#include <iostream>



//napisz funkcje krota pobierze od uzytkownika liczbe dodatnie 
void task1()
{
	int number;

	do
	{
		std::cout << "podaj liczbę dodatnią ";
		std::cin >> number;
	} while (number <= 0);

	std::cout << "podałeś liczbę:" << number;



}

//napisza funkcje ktora napiszae wszystkie liczby z przedzialu <1;100>

void task2()
{
	int currentNumber = 0;
	do
	{
		std::cout << currentNumber << "\n";

		// currentNumber = currentNumber + 1       to samo       | 
		//currentNumber += 1;                      to samo  i to V
		currentNumber++;            //                       <----          
	} while (currentNumber != 1000);

}

void task3()
{
	int currentNumber, endNumber;
	std::cout << "podaj przedzial (x-y); X=\n";
	std::cin >> currentNumber;
	std::cout << "Y=\n";
	std::cin >> endNumber;

	endNumber++;
	do
	{
		std::cout << currentNumber << "\n";						//cntrl+ H + D	(cntrl h) 

		currentNumber++;
	} while (currentNumber != endNumber); //jezeli warunek spewniony to powturzy 
}

/*
zgadnij liczbe, zgadywanka
*/
void task4()
{
	int randomNumber, findNumber;

	srand(time(NULL));

	/*
	<1;100>
	<0;99>


	<a; b>		a <= b

	<0; b-a>

	rand() % (b - a + 1) + a;    <--ogólny wzór
	*/

	//od 1 do 100 <1;100>
	randomNumber = rand() % 1000 + 1;

	//std::cout << "Wylosowana liczba jest\n " << randomNumber; 
	std::cout << "Zgadnij liczbę od 1 do 1000 \n";

	do
	{
		std::cin >> findNumber;
		if (findNumber > randomNumber)
			std::cout << "Liczba za duża\n";
		if (findNumber < randomNumber)
			std::cout << "liczba za mała\n";
	} while (findNumber != randomNumber);
	std::cout << " tak, to liczba=" << randomNumber;
}



void task5()
{
	int currentNumber, endNumber;
	std::cout << "podaj przedzial (x-y); X=\n";
	std::cin >> currentNumber;
	std::cout << "Y=\n";
	std::cin >> endNumber;
	/*
	do
	{
		std::cout << currentNumber << "\n";						//cntrl+ H + D	(cntrl h)

		currentNumber++;
	} while (currentNumber != endNumber);	*/

	while (currentNumber <= endNumber) // wykonuje jeżeli warunek prawdziwy
	{
		std::cout << currentNumber << "\n";
		currentNumber++;
	}

}

//Napisz funkcje ktora policzy NWD 2 liczb 
void task6()
{
	int numberOne,numberTwo; 
	std::cout << " wprowadz 2 liczby\n";
	std::cin >> numberOne;
	std::cin >> numberTwo;

	int dzielnik;

	if (numberOne > numberTwo)
		dzielnik = numberTwo;
	else
		dzielnik = numberOne;

	while (numberOne % dzielnik != 0 || numberTwo % dzielnik != 0)
	{
		dzielnik--;
	}
	std::cout << " NWD=" << dzielnik;
/*
Wersja 2 algorytmu 
NWD (a,b) = a jesli b = 0  
NWD (a,b) = NWD (b, a % b) jesli b != 0
*/

	int a = numberOne;
	int b = numberTwo;

	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	std::cout << "NWD=" << dzielnik << "\n";
	std::cout << "NWD=" << a << "\n";
}

//zadanie 7 policzenie silni 
void task7()
{
	int numberFromUser;

	std::cout << "podaj liczbe " << "\n";
	std::cin >> numberFromUser;

	unsigned long long i=2;
	unsigned long long result =1;

	while (i <= numberFromUser)
	{
		result = i * result;
		i++;
	}
	std::cout << numberFromUser<< "! = " <<result<< "\n";

	//lub druga nowa pętla 


	//	1(i jeden raz) |  to 2 |		  4|
	for (int i = 2; i <= numberFromUser; i++)
	{
		// to 3													!!!
		result = i * result;
	}

	// zeby powturzylo sie tyle ile chesz 

	for (i = 0; i <= 3; i++)
	{
		//tak													!!!
	}
}

//wczytać napis i wyswietlić ile jest liter "a" w tym wyrazie.
void task8()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz\n"; 
	std::cin >> textFromUser; 


	//textFromUser[0] = 'A'; 

	std::cout << "Uytkownik podał " << textFromUser << "\n";
	std::cout << "Napis skłąda się z " << textFromUser.length() << " liter \n";			//!!!
	std::cout << "Pierwszy znak z napisu jest  " << textFromUser[0] << "\n";			//!!! numeracja zaków od 0 (0 - pierwsza liczba)
	std::cout << "Ostatni znak z napisu jest  " << textFromUser[textFromUser.length() - 1] << "\n";			//!!! ostatnia liczba 

	int coutChar = 0; 
	//liczymy znaki a 

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			coutChar++;
	}

	std::cout << "Znaków 'a' jest " << coutChar << "\n";

}
/*
Zadanie 9
Napisz funkcjê, która wczyta wyraz i zamieni du¿e litery na ma³e i odwrotnie
*/
void task9()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz\n";
	std::cin >> textFromUser;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		//if (textFromUser[i] >= 65 && textFromUser[i] <= 90)
		if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
			textFromUser[i] = textFromUser[i] + 32;
		else if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
			textFromUser[i] = textFromUser[i] - 32;
	}

	std::cout << "Napis po zamianie: " << textFromUser << "\n";
}

/*
Zadanie 10
Wczytaj liczbê od u¿ytkownika. Program zabezpiecz przed podaniem nie liczby.
*/
void task10()
{
	int numberFromUser;
	std::string textFromUser;
	bool isAllDigit;
	do
	{
		std::cout << "Podaj liczbê\n";
		//std::cin >> textFromUser;
		std::getline
		(std::cin, textFromUser);

		isAllDigit = true;
		//sprawdziæ czy tak nie jest
		for (int i = 0; i < textFromUser.length(); i++)
		{
			if (textFromUser[i] < '0' || textFromUser[i] > '9')
			{
				isAllDigit = false;
			}
		}
		//if (isAllDigit == false)
		if (!isAllDigit)
		{
			std::cout << "Podano b³êdn¹ dan¹. Podaj jeszcze raz.\n";
		}

	} while (isAllDigit == false);//(u¿ytkownik nie poda³ liczby);

	numberFromUser = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		numberFromUser = numberFromUser * 10 + (textFromUser[i] - '0');
	}

	std::cout << "Uzytkownik poda³ " << numberFromUser << "\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	task10();
}