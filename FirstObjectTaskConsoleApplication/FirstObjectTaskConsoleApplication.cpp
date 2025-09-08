// FirstObjectTaskConsoleApplication.cpp 
#include <iostream>
using namespace std;

/*
Zdefiniuj klase opisuj¹cy punkt na przestrzeni kartezjañskiej. Mo¿liwoœci klasy:
* konstruktory
* metoda która zwórci odleg³oœæ tego punktu od poczatku uk³adu wspó³rzednych
* metoda która zwróci odleg³oœæ od innego punktu
* metoda która zwróci informacjê w której æwiartce uk³adu wspó³rzednych siê znajduje punkt
* metodê która poka¿e informacje o punkcie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.

*/

/*
Zdefiniuj klase opisuj¹ce konto bankowe. Mo¿liwoœci klasy:
* konstruktory
* metoda która dokona wp³aty na konto
* metoda która wyp³aty z konta
* metoda która wykona przelew na inne konto
* metodê która poka¿e informacje o koncie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
*/


/*Zdefiniuj klase opisuj¹c¹ prostok¹t.Mo¿liwoœci klasy :
* konstruktory
* metoda która zwórci obwód prostok¹ta
* metoda która pole prostok¹ta
* metodê która poka¿e informacje o prostok¹cie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.*/

class Point
{
private:
	string name;
	float xLine;
	float yLine;
	short quarter;
public:
	Point()
	{
		name = "A";
		xLine = 0;
		yLine = 0;
		quarter = 0;
	}

	Point(string name, float x, float y, short quarter)
	{
		name = name;
		xLine = x;
		yLine = y;
		this->quarter = quarter;
	}

	void DeclarationPoint()
	{
		cout << "Podaj nazwe punktu: \n";
		cin >> name;
		cout << "Podaj wspolrzedne x: \n";
		cin >> xLine;
		cout << "Podaj wspolrzedne y: \n";
		cin >> yLine;
		quarter = FindQuarter(xLine, yLine);
	}

	short FindQuarter(float xLine, float yLine)
	{
		if (xLine > 0 && yLine > 0)
			return 1;
		if (xLine > 0 && yLine < 0)
			return 4;
		if (xLine < 0 && yLine > 0)
			return 2;
		if (xLine < 0 && yLine < 0)
			return 3;
		else
			return 0;
	}

	void ShowInfoofPoint()
	{
		cout << "\n----------------------------\n";
		cout << "imie punktu: " << name << " \n";
		cout << "wspo³rzednde x: " << xLine << " \n";
		cout << "wspo³rzednde y: " << yLine << " \n";
		cout << "czwartka : " << quarter << " \n";
		cout << "odleglosc od poczatku: " << sqrt(xLine * xLine + yLine * yLine) << " \n\n";

	}

	void DistanceBetweenPoints(Point firstPoint)
	{
		cout << "Odleglosc pomiedzy punktami :  " << sqrt((xLine - firstPoint.xLine) * (xLine - firstPoint.xLine) + (yLine - firstPoint.yLine) * (yLine - firstPoint.yLine)) << " \n";
	}
};
void task1()
{
	Point firstPoint;
	Point secondPoint;
	Point thirdPoint("Opa", 3, 4, 1);

	firstPoint.DeclarationPoint();
	firstPoint.ShowInfoofPoint();



	secondPoint.DeclarationPoint();
	secondPoint.ShowInfoofPoint();
	secondPoint.DistanceBetweenPoints(firstPoint);

	cout << "\n" << "----------------\n";
	thirdPoint.ShowInfoofPoint();
}

class Account
{
private:
	string login;
	string password;
	float balance;
	string pin;

public:
	Account()
	{
		login = "123456789";
		password = "OPACZA";
		balance = 0.00;
		pin = "0000";
	}

	Account(string userLogin, string userPassword, float userBalance, string userPin)
	{
		login = userLogin;
		password = userPassword;
		balance = userBalance;
		pin = userPin;
	}

	void InfoOfAccount()
	{
		cout << "Informacja o koncie: \n";

		cout << "Login: " << login << " \n";
		cout << "Has³o: " << password << " \n";
		cout << "Saldo: " << balance << " \n";
		cout << "PIN: " << pin << " \n";

	}

	bool CheckUser()
	{
		string loginFromUser;
		string passwordFromUser;

		cout << "Podaj login:\n";
		cin >> loginFromUser;
		cout << "Podaj haslo:\n";
		cin >> passwordFromUser;

		if (loginFromUser == login && passwordFromUser == password)
			return true;
		else
			return false;
	}

	void AddMoney(float deposite)
	{
		if (deposite > 0)
		{
			balance += deposite;
			cout << "Wplata na konto w rozmiarze " << deposite << " wykonano!\n";
			cout << "Aktualny stan konta = " << balance << " \n";
		}
		else cout << "Podales nie prawidlowa wartosc! nie mozna wykonac polecenia!\n";
	}

	string GetPin()
	{
		return pin;
	}

	void PayOut(float amout)
	{
		if (CheckPin()) {
			if (balance >= amout)
			{
				if (amout > 0)
				{
					balance -= amout;
					cout << "Wyplata  o  " << amout << " zlotych udana!\n";
					cout << "Aktualny stan konta = " << balance << " \n";
				}
				else cout << " Podana byla wartosc ujemna!\n";
			}
			else {
				std::cout << "Nie mozesz wykonsc polecenie! Za ma³o pieniedzy na rachunku!\n";
				return;
			}
		}
	}

	void Transfer(Account& secondUser, float transferAmount)
	{
		PayOut(transferAmount);
		secondUser.AddMoney(transferAmount);

		cout << "Przelew wykonano!\n";
		cout << "Aktualny stan twego konta to =  " << balance << "\n";
		cout << "Stan twego konta odbiorcy teraz  =  " << secondUser.balance << "\n";

	}

	bool CheckPin()
	{
		cout << "Podaj pin: \n";

		string userPin;
		cin >> userPin;
		if (userPin == pin)
			return true;
		else
		{
			cout << "Podales zly pin!\n";
			return false;
		}
	}
};
void task2()
{
	cout << " Konto Bankowe $$$\n";

	Account user1("1234", "4321", 100.00, "0000");
	Account user2;

	if (user1.CheckUser())
		user1.InfoOfAccount();
	else
		cout << "Zle haslo lub login!\n";


	user1.AddMoney(15.5);

	user1.PayOut(100.0);

	//user1.InfoOfAccount();
	//user2.InfoOfAccount();

	user1.Transfer(user2, 20);

	user1.InfoOfAccount();
	user2.InfoOfAccount();

}

class Rectangle
{
private:
	float sideA;
	float sideB;
	string name;
public:
	Rectangle()
	{
		sideA = 1;
		sideB = 1;
		name = "prostok¹cik2DPROfMAX256gb";
	}

	Rectangle(float aSied, float bSied, string userName)
	{
		sideA = aSied;
		sideB = bSied;
		name = userName;
	}

	void userCreatRectangle(float userA,float userB,string nameUser)
	{
		sideA = userA;
		sideB = userB;
		name = nameUser;
	}

	void showAllInfo()
	{
		cout << "Informacja o prostakacie:\n";
		cout << "Nazwa: " << name << "\n";
		cout << "Bok A: " << sideA << "\n";
		cout << "Bok B: " << sideB << "\n";
		cout<< "Obwód wynosi : "<< circuitOfRectangle()<< "\n";
		cout << "Pole : " << areaOfRectangle() << "\n";


	}

	float circuitOfRectangle()
	{
		return (sideA + sideB) * 2;

	}
	float areaOfRectangle()
	{
		return sideA * sideB;

	}

};

void task3()
{
	Rectangle firstRectangle;
	Rectangle secondRectangle(12, 10, "autobus");
	float userSideA, userSideB;
	string userName;
	do
	{
		cout << "Podawaj liczbe dodatnie!!!\n";
		cout << "Podaj bok a i bok b: \n";
		cin >> userSideA;
		cin >> userSideB;
	} while (userSideA <= 0 && userSideB <= 0);

	cout << "Nazwij prostokat: \n";
	cin >> userName; 
	firstRectangle.userCreatRectangle(userSideA, userSideB, userName);

	firstRectangle.showAllInfo();


}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	task3();

}