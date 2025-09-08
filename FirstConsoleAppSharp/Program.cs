// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
string massage;

massage = "witaj" + name + " " + surname + "w tym progrmamie";
massage = $"witaj  {name} {surname}  w tym projekcie ";
Console.WriteLine(massage);

int number = 5;
Console.WriteLine($"Number = {number} ");

passingParameters_v1(number);
Console.WriteLine($"Number = {number}");

passingParameters_v2(ref number); 
Console.WriteLine($"Number = {number}");

passingParameters_v3(out number);
Console.WriteLine($"Number = {number}");

void passingParameters_v1(int p) //przekazywanie przez wartosc (Kopia zmiennej)
{
    p++;
    Console.WriteLine($"passingParameters_v1 p = {p}");
}

void passingParameters_v2(ref int p) //przekazywanie przez referencje (oryginal zmiennej )
{
    p++;
    Console.WriteLine($"passingParameters_v2 p = {p}");
}

void passingParameters_v3(out int p) //przekazywanie przez referencje (bez obowiazku przepisanej wartosci dla zmiennej)
{
    p = 9; 
    p++;
    Console.WriteLine($"passingParameters_v3 p = {p}");
}

string strNumber = "125";
//strNumber = Console.ReadLine();
int firstNumber = 0;

//firstNumber = int.Parse(strNumber);

if (int.TryParse(strNumber,out firstNumber) == false)
{
    Console.WriteLine(firstNumber);
    Console.WriteLine(strNumber);
}
Console.WriteLine(firstNumber);
Console.WriteLine(strNumber);
