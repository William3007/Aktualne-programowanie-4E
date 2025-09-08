#include <iostream>
using namespace std;

struct book
{
    std::string title;
    std::string author;
    short publicationYear;
    unsigned short numerOfPages;
};

void menu()
{
    system("cls");
    std::cout << "BIBLIOTEKA\n";
    std::cout << "1.Dodanoe nowej ksia¿ki \n";
    std::cout << "2.Wyswietlenie wszystkich ksia¿ek \n";

    std::cout << "0.Koniec programu\n";

}

int getOption()
{
    cout << "Wybirze opcjê\n";
    int option;
    cin >> option;
    return option; 
}

void addNewBook(book books[], int &currentNumberOfBooks)
{
    currentNumberOfBooks++; 
    cout << "Podaj tytu³:\n";
    cin >> books[currentNumberOfBooks].title;
    cout << "Podaj autora:\n";
    cin >> books[currentNumberOfBooks].author;
    cout << "Podaj rok publikacji:\n";
    cin >> books[currentNumberOfBooks].publicationYear;
    cout << "Podaj iloœæ stron:\n";
    cin >> books[currentNumberOfBooks].numerOfPages;
}

void showAllBooks(book books[], int currentNumberOfBooks)
{
    system("cls");
    cout << "Wyswietlanie wszystkich pozycji : \n";
    
    for(int i = 0; i <= currentNumberOfBooks; i ++ )
    {
        cout << "---------------------------\n";
        cout << "Tytu³: " << books[i].title << "\n";
        cout << "Autor: " << books[i].author << "\n";
        cout << "Rok wydania: " << books[i].publicationYear << "\n";
        cout << "Iloœæ stron : " << books[i].numerOfPages << "\n";
    }
    system("pause");
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    const int BOOK_SIZE = 100;
    book collectionOfBooks[BOOK_SIZE];
    int currentNumberOfBooks = -1;

    while(true)
    {
        menu();
        int choosenOption = getOption();

        if (choosenOption == 0)
            break; 

        switch (choosenOption)
        {
        case 1: 
            addNewBook(collectionOfBooks, currentNumberOfBooks);
            break;
        case 2: 
            showAllBooks(collectionOfBooks, currentNumberOfBooks); 
            break;
        }
        
    }
}
