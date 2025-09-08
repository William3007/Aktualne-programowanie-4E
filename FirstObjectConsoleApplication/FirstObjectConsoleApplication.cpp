#include <iostream>
using namespace std;

class person				//klasa
{
private:
	string name;			//pole
	//string secondName;
	string surname;
	short age;
	//short height;
	//char sex; // M - male | F - female
public:
	person()
	{
		name = "Jan";
		surname= "KOwalkisk";
		age = 25;
	}


	void showInfo()			//metoda
	{
		cout << " Info o osoie : \n";
		cout << "Imie : " << name << "\n";
		cout << "Nazwisko : " << surname << "\n";
		cout << "Wiek : " << age << "\n";


	} 

	~person()
	{
		std::cout << "Teraz dzia³a destruktor: Imie " << name << " \n"; 
	}

	bool isLegalAge()
	{
		return age >= 18;
	}

	void SetAge(short a)
	{
		if (a > 0 && a < 130)
			age = a;
		else
			cout << "B³êdna wartoœæ\n";

	}

	short GetAge()
	{
		return age;
	}
};


int main()
{
	setlocale(LC_CTYPE, "polish");

	person firstPerson;				//objekt

	//firstPerson.name = "Jan";
	//.surname = "Kowalski";
	//firstPerson.age = 5;
	firstPerson.SetAge(5000);
	std::cout << "Wiek: " << firstPerson.GetAge() << "\n"; 

	firstPerson.showInfo();

	if (firstPerson.isLegalAge())
		cout << "Pewnoletni\n";

	person secondPerson;

	//secondPerson.name = "Bartek";
	//secondPerson.surname = "Star";
	//secondPerson.age = 56;
	secondPerson.showInfo();

	if (secondPerson.isLegalAge())
		cout << "Pewnoletni\n";


}