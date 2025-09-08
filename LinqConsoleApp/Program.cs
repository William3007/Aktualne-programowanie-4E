using LinqConsoleApp;
using System;
List<Person> people = new List<Person>();


#region Danne do kolekcji 
Person person = new Person();
person.name = "Adam";
person.surname = "Nowak";
person.age = 15;

people.Add(person);

person = new Person();
person.name = "Ewa";
person.surname = "Kowalska";
person.age = 54;

people.Add(person);

person = new Person();
person.name = "Jan";
person.surname = "Nowakowski";
person.age = 30;

people.Add(person);

person = new Person();
person.name = "Ewa";
person.surname = "Kowalczyk";
person.age = 46;

people.Add(person);

#endregion

Console.WriteLine("Wszystkie osoby: ");
foreach (Person p in people)
{
    Console.WriteLine($" Imie : {p.name} , Nazwisko: {p.surname} , Wiek : {p.age}");    
}
Console.WriteLine();

/*
    select max(age)
from people
*/

int maxAge = people.Max(p => p.age);
Console.WriteLine($"Najstarsza osoba ma {maxAge} lat ");
Console.WriteLine(); 

double avgAge = people.Average(p => p.age);
Console.WriteLine($"sredni wiek osób to {avgAge}");
Console.WriteLine();

if (people.Any(p => p.age < 18))
    Console.WriteLine("Jest osoba nie pełnio letnia");

if (people.All(p => p.age >= 18))
    Console.WriteLine("Wszystkie ososby są pełnioletni");

List<Person> legalAgePeople = people.Where(p => p.age >= 18).ToList();
Console.WriteLine("Lista osób pełnie letnich : ");
foreach ( Person p in legalAgePeople)
{
    Console.WriteLine($"Imie: {p.name} Nazwisko: {p.surname} wiek:{p.age} ");
}
Console.WriteLine();

List<Person> sortByName = people.OrderBy(p => p.surname).ToList();
Console.WriteLine("Posortowano po Nazwisku : ");
foreach (Person p in sortByName)
{
    Console.WriteLine($"Imie: {p.name} Nazwisko: {p.surname} wiek:{p.age} ");
}
Console.WriteLine();

var sortByNameandByAge = people.OrderBy(p => p.surname).ThenBy(p => p.age);
Console.WriteLine("Posortowano po Nazwisku I WIEKU  : ");
foreach (Person p in sortByNameandByAge)
{
    Console.WriteLine($"Imie: {p.name} Nazwisko: {p.surname} wiek:{p.age} ");
}
Console.WriteLine();

var groupByName = people.GroupBy(p => p.name);
Console.WriteLine("Po grupowao po imieniu: ");
foreach (var group in groupByName)
{
    Console.WriteLine( group.Key);

    Console.WriteLine("Lista osób w grupie: ");
    //var x = people.Where(p => p.name == group.Key);
    foreach (Person p in group)
    { 
        Console.WriteLine($"Imie: {p.name} Nazwisko: {p.surname} wiek:{p.age} ");
    }
}
Console.WriteLine();