int firstNumber, secondNumber , thirdNumber = 5; ;
Console.WriteLine("Podaj dwie liczby: ");
firstNumber = int.Parse(Console.ReadLine());
secondNumber = int.Parse(Console.ReadLine());

int result = 0;
//wersja 1
if (result != 0)
{
    result = firstNumber / secondNumber;
    Console.WriteLine($"Wynik dzielenia = {result}");
}
else
    Console.WriteLine("Nie wolno dzielic przez Zero!!!");

//wersja 2 
//Komentarz dokumentający 
//Co robi funkcja, jakie parametry przyjmuje i co wzraca 
//Opisać błędy 

//Funckja dzielenia dwóch liczb 
//Dane wejściowe: 
//a - liczba pierwsza 
//b - liczba druga 
//Dane wyjściowe:  wynik dzielenia a/b 
//Błędy:
//* druga liczba nie może byc równa zero 
int Div(int a, int b)
{
    return a / b; 
}

if (result != 0)
{
    result = Div(firstNumber, secondNumber);
    Console.WriteLine($"Wynik dzielenia = {result}");
}
else
    Console.WriteLine("Nie wolno dzielic przez Zero!!!");

/*
     ...
*/

// ...
thirdNumber -= 5;
Console.WriteLine("Wynik dzielenia : " + Div(5, thirdNumber));

//wersja 3 
//Komentarz dokumentający
//Co robi funkcja, jakie parametry przyjmuje i co wzraca 
//Opisać błędy 

//Funckja dzielenia dwóch liczb 
//Dane wejściowe: 
//a - liczba pierwsza 
//b - liczba druga 
//Dane wyjściowe:  wynik dzielenia a/b 
//Błędy:
//* druga liczba nie może byc równa zero 
bool Div2(int a, int b, out int r)
{
    if (b != 0)
    {
        r = 1;
        return true;
    }
    else
        r = 0;
    return false;
} 
if (Div2(firstNumber, secondNumber,out result))
{
    Console.WriteLine($"Wynik dzielenia = {result}");
}
else
    Console.WriteLine("Nie wolno dzielic przez Zero!!!");

/*
     ...
*/

// ...
thirdNumber -= 5;
Console.WriteLine("Wynik dzielenia : " + Div(5, thirdNumber));