// FirstprojectRK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "Hello World!\n";

    std::cout << -56;
    std::cout << "\n";
    std::cout << "234\n";

    std::cout << 125.5 << "\t" << "text podany" << "\t" << -23.4 << "\n";







    std::cout << "\n";


    std::cout << "Podaj liczbe:";
    int numberFromUsers;
    std::cin >> numberFromUsers;
    std::cout << "\n";
    std::cout << "Podana liczba:" << numberFromUsers << "\n";
}

//hithub.com/IronlittleFox

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

  /*
    Instrukcja do wy�wietlania informacji na standardowy strumie� wyj�cia.
    Domy�lnie, jesli nie zosta�o to zmienione, jest to konsola w kt�rej aplikacja
    zosta�a uruchomiona.
    Aby wyswietli� na konsoli nalezy u�y� std::cout.
    Na konosle wywy�amy za pomoca operatora <<.
    Po nim musi znajdowa� si� dana do wys�ania.
    Instrukcj� ko�czymy znakiem �rednik.
    "Hello World!\n" - jest to sta�a o warto�ci tekstowej.
    Sta�e tekstowe s� ograniczone znakami cudzys�owu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzys��w) - jesli jest zero lub wi�cej znak�w
    W sta�ych tekstowych moga by� wstawiane znaki specjalne. Takie znaki
    zaczynaj� si� od znaku \ (backslash) po kt�rym mo�e si� znajdowa�:
    * jedna litera alfabetu angielskiego
    * trzy cyfry daj�ce liczb� �semkow�
    Przyk�adowo:
    * \n - symbol oznaczaj�cy now� lini�.
    * \t - symbol oznaczaj�cy znak tabulatora
    * \\ - symbol oznaczaj�cy znak \
    * \' - symbol oznaczaj�cy znak '
    * \" - symbol oznaczaj�cy znak "
    * \141 - symbol �semkowy oznaczajacy zgodnie z tablic� kod�w ASCII znak m�aej literki a
    */



