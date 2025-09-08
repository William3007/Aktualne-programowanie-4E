using System.Reflection.Metadata;
using static System.Runtime.InteropServices.JavaScript.JSType;

StreamReader file = new("C:\\Romchik Khazov\\progromowanie2E\\Programowanie-1E\\przyklad2022czerwiec.txt");
List<string> numbersFromFile = new();
string? numberFromFile;

while ((numberFromFile = file.ReadLine()) != null)
{
    numbersFromFile.Add(numberFromFile);
}
file.Close();

//zadanie 4. 
Console.WriteLine("Zadanie 4.");

foreach (var item in numbersFromFile)
{
    int number = int.Parse(item);
    int rest;
    int reflection = 0;
    while (number > 0)
    {
        rest = number % 10;
        reflection = reflection * 10 + rest;

        number /= 10;
    }
    Console.WriteLine(reflection);
}

//zadanie 4.1 
Console.WriteLine("Zadanie 4.1");

foreach (var item in numbersFromFile)
{
    int number = int.Parse(item);
    int rest;
    int reflection = 0;
    while (number > 0)
    {
        rest = number % 10;
        reflection = reflection * 10 + rest;

        number /= 10;
    }
    if (reflection % 17 == 0)
        Console.WriteLine(reflection);
}

//zadanie 4.2
Console.WriteLine("Zadanie 4.2");
int maxNumber = 0;
int maxDiff = 0;
foreach (var item in numbersFromFile)
{
    int number = int.Parse(item);
    int rest;
    int reflection = 0;
    int difference = 0;


    while (number > 0)
    {
        rest = number % 10;
        reflection = reflection * 10 + rest;
        number /= 10;
    }

    number = int.Parse(item);
    difference = number - reflection;

    difference = Math.Abs(difference);

    if (difference > maxNumber)
    {
        maxDiff = difference;
        maxNumber = number;
    }
}
Console.WriteLine($"{maxNumber} {maxDiff}");

//zadanie 4.3
Console.WriteLine("Zadanie 4.3");
int doReflection(int a)
{
    int rest;
    int reflection = 0;
    while (a > 0)
    {
        rest = a % 10;
        reflection = reflection * 10 + rest;
        a /= 10;
    }
    return reflection;
}

bool isItPrime(int a)
{
    int i = 2;
    while (a % i != 0)
    {
        i++;
    }
    if (i == a)
        return true;
    else
        return false;
}

foreach (var item in numbersFromFile)
{
    int number = int.Parse(item);

    if (isItPrime(number) && isItPrime(doReflection(number)))
    {
            Console.WriteLine(number);
    }
}
//zadanie 4.4
Console.WriteLine("Zadanie 4.4");
