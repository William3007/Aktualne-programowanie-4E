
// GeometryConsoleApplication.cpp 
#include <iostream>

//Kwadrat, trapez, prostok¹t

class Quadrangle //ang. czworok¹t
{
protected:
	double sideA, sideB, sideC, sideD;
public:
	Quadrangle(double a, double b, double c, double d)
	{
		sideA = a;
		sideB = b;
		sideC = c;
		sideD = d;
	}

	double GetPerimeter()
	{
		return sideA + sideB + sideC + sideD;
	}
};

class Trapeze : public Quadrangle
{
protected:
	double height;
public:
	Trapeze(double a, double b, double c, double d, double h) :Quadrangle(a, b, c, d)
	{
		height = h;
	}

	double GetArea()
	{
		return (sideA + sideC) * height / 2;
	}
};

class Rectangle : public Quadrangle
{
protected:

public:
	Rectangle(double a, double b) :Quadrangle(a, b, a, b)
	{
		/*sideA = a;
		sideB = b;
		sideC = a;
		sideD = b;*/
	}

	double GetArea()
	{
		return sideA * sideB;
	}
};

class Square : public Rectangle
{
protected:

public:
	Square(double a) :Rectangle(a, a)
	{

	}
};

int main()
{
	Rectangle r(1, 2);
	std::cout << "Obwód prostok¹ta: " << r.GetPerimeter() << "\n";
	std::cout << "Pole prostok¹ta: " << r.GetArea() << "\n";

	Trapeze t(1, 2, 3, 4, 5);
	std::cout << "Obwód trapezu: " << t.GetPerimeter() << "\n";
	std::cout << "Pole trapezu: " << t.GetArea() << "\n";

	Square s(5);
	std::cout << "Obwód kwadratu: " << s.GetPerimeter() << "\n";
	std::cout << "Pole kwadratu: " << s.GetArea() << "\n";
}


/*
* Dla poni¿szych klas u³ó¿ drzewko dziedziczenia.
\), ,


Electronic Device (Urz¹dzenie elektroniczne),          
,  
	Smartphone (Smartfon)
- 
		Android Phone (Telefon z systemem Android), iPhone (iPhone)



	Television (Telewizor) 
-
		LED TV (Telewizor LED), Smart TV (Telewizor Smart)

- , 
, (Laptop (Laptop)? ), 
*/

class Animals {

private: 
public: 
};

class Mammal : public Animals{
private:
public:
};

class Fish :public Animals {
private:
public: 
};

class Reptile :public Animals {
private: 
public:
};

class Birds : public Animals {

};

class Tygrys: public Mammal {

};

class Dog :public Mammal{

};

class Salmon :Fish{

};

class Eagle : Birds {

};

class Lion : Mammal {

};

class Sparrow : Birds {

};

class Trout :Fish {

};

class Cat :Mammal {

};

class Snake : Reptile {

};

class Turtue : Mammal{

};
//----------------------------------------------

class Vehicle {

};

class Motorcycle : Vehicle {

};

class  Car :Vehicle {

};


class Wszystko_samochody: Car {
/*	SUV(SUV), Pickup Truck(Pick - up), Truck(Ciê¿arówka), , Sedan(Sedan),
		, Semi - Truck(Ci¹gnik siod³owy)
		*/
};

//---------------------------------------------

