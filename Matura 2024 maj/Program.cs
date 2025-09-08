using System.Diagnostics.Metrics;
using System.Reflection;
using System.Reflection.Metadata;

StreamReader document = new("skrot_przyklad.txt");
string? numberFromFile;
List<string> numbersFromFile = new();
while ((numberFromFile = document.ReadLine()) != null)
{
    numbersFromFile.Add(numberFromFile);
}
document.Close();
/*
//zadanie 3.1 - 3.2 

int n = 0;
int m = 0;
int i = 1;
int dontExistNumbers = 0;
int hugestNumber = 0;

foreach (var number in numbersFromFile)
{
    m = 0;
    i = 1;
    n = int.Parse(number);

    while (n > 0)
    {
        int rest = n % 10;

        //if (rest % 2 != 0) flaga 
        if((rest & 1) != 0)
        {
            m += rest * i;
            i *= 10;
        }

        n = n / 10;
    }

    if (m == 0)
    {
        dontExistNumbers++;
        if (int.Parse(number) > hugestNumber)
            hugestNumber = int.Parse(number);
    }

}

Console.WriteLine(dontExistNumbers);
Console.WriteLine(hugestNumber);
Console.WriteLine();
/*StreamWriter plikZodpowiea = new("plikZodpowiea.txt");
plikZodpowiea.WriteLine(dontExistNumbers); 
plikZodpowiea.WriteLine(hugestNumber);
plikZodpowiea.Close(); 
*/

//zadanie 3.3

StreamReader document2 = new("skrot2_przyklad.txt");
List<string> numbersFromDocument2 = new();
string? numberFromDocument2;
while ((numberFromDocument2 = document2.ReadLine()) != null)
{
    numbersFromDocument2.Add(numberFromDocument2);
}
document2.Close();

int n = 0;

int m = 0; // nie parzysty skrót 
int i = 1;

int notEvenShort(int number)
{
    m = 0;
    i = 1;

    while (number > 0)
    {
        int rest = number % 10;

        if ((rest & 1) != 0)
        {
            m += rest * i;
            i *= 10;
        }

        number = number / 10;
    }
    return m;
}

int nwd(int firstN, int secondN)
{
    int greater;
    int smaller;
    int secondSmaller;


    if (firstN == 0)
        return secondN;

    if (secondN == 0)
        return firstN;

    if (firstN > secondN)
    {
        greater = firstN;
        smaller = secondN;

        secondSmaller = secondN;
    }
    else
    {
        greater = secondN;
        smaller = firstN;

        secondSmaller = firstN;
    }

    while (greater % smaller != 0 || secondSmaller % smaller != 0)
    {
        smaller--;
    }
    return smaller;

}


int nwd2(int a, int b)
{
    if (b == 0)
        return a;
    return nwd2(b, a % b);
}

int nwd3(int a, int b) //24    21 
{
    while (b != 0 )
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

foreach (var number in numbersFromDocument2)
{
    n = int.Parse(number);
    m = notEvenShort(n);
    int numberFromNwd = nwd3(n, m);
    if (numberFromNwd == 7)
    {
        Console.WriteLine(n);
    }

}



