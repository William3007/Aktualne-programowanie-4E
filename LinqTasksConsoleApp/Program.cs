//LinqTasksConsoleApp

using LinqTasksConsoleApp;

var tasks = new List<TaskItem>
{
    new(1, "Buy groceries", true),
    new(2, "Clean the house", false),
    new(3, "Pay bills", true),
    new(4, "Study LINQ", false),
    new(5, "Exercise", true)
};

Console.WriteLine("Wszystkie elementy kolekcji: ");
foreach (var task in tasks)
{
    Console.WriteLine(task);
}
// Zadanie 1: Wyszukaj wszystkie zakończone zadania
Console.WriteLine("Zadanie1");
var isCompleted = tasks.Where(t => t.IsCompleted == true);
foreach (var task in isCompleted)
{
    Console.WriteLine(task);
}

// Zadanie 2: Znajdź pierwsze zadanie, które nie jest zakończone
Console.WriteLine("Zadanie 2");
var isntCompleted = tasks.First(t => t.IsCompleted != true);
Console.WriteLine(isntCompleted);

// Zadanie 3: Posortuj zadania według nazwy
Console.WriteLine("Zadanie 3");
var sortByName = tasks.OrderBy(t => t.Name);
foreach (var task in sortByName)
{
    Console.WriteLine(task);
}

// Zadanie 4: Policz zadania zakończone
Console.WriteLine("Zadanie 4");
var isNotComplete = tasks.Count(t => t.IsCompleted == false);
Console.WriteLine(isNotComplete);


// Zadanie 5: Wybierz tylko nazwy zadań i wyświetl
Console.WriteLine("Zadanie 5");
foreach (var taks in tasks)
{
    Console.WriteLine(taks.Name);
}

// Zadanie 6: Znalezienie nazw zakończonych zadań posortowanych według długości nazwy
Console.WriteLine("Zadanie 6");
var completedAndSortedByLenght = tasks.Where(p => p.IsCompleted == true).Select(p => p.Name).OrderBy(p => p.Length); 
foreach (var task in completedAndSortedByLenght)
{
    Console.WriteLine(task);
}

//Zadanie 7: Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy
Console.WriteLine("Zadanie 7");
var sortedByCompletedAndSortedBygroup = tasks.GroupBy(t => t.IsCompleted).Select( g => new {IsCompleted = g.Key, Items = g.OrderBy(t => t.Name)});
foreach ( var group in sortedByCompletedAndSortedBygroup)
{   
    Console.WriteLine(group.IsCompleted);
    foreach (var item in group.Items)
    {
        Console.WriteLine(item);
    }
}

//Zadanie 8: Najkrótsza nazwa zadania niezakończonego
Console.WriteLine("Zadanie 8");
var minimumLenghtOfNotComplete = tasks.Where(t => t.IsCompleted == false).OrderBy(t => t.Name.Length).First().Name;
Console.WriteLine(minimumLenghtOfNotComplete);
//Zadanie 9: Ilość liter w nazwach wszystkich zakończonych zadań
Console.WriteLine("Zadanie 9");
var numberOfLenght = tasks.Where(t => t.IsCompleted == true).Sum(t => t.Name.Where(c => (c >= 'a' && c<='z') || ( c>='A' && c<= 'Z')).Count());
Console.WriteLine(numberOfLenght);

//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)
Console.WriteLine("Zadanie 10");
var withindex = tasks.Where(t => t.IsCompleted).Select((g,index)  => new { index = index + 1, taskItem = g});
foreach ( var item in withindex)
{
    Console.WriteLine($"{item.index} : ");
    Console.WriteLine(item.taskItem);
}

//Zadanie 11: Zadania z najdłuższą nazwą w każdej grupie zakończonych i niezakończonych
Console.WriteLine("Zadanie 11");
var chokoLatteWithLargeCola = tasks.GroupBy(g => g.IsCompleted).Select(p => new {IsCompleted = p.Key, Item = p.OrderBy(t => t.Name.Length).Last().Name});
foreach (var item in chokoLatteWithLargeCola)
{
    Console.WriteLine(item.IsCompleted);
    Console.WriteLine(item.Item);
}
//Zadanie 12: Zlicz, ile zadań w każdej grupie zakończonych i niezakończonych zawiera słowo „the” w nazwie
Console.WriteLine("Zadanie 12");
var largeColaWithFries = tasks.GroupBy(t => t.IsCompleted).Select(g => new {Value = g.Key, Count = g.Where(t => t.Name.Contains("the")).Count()});
foreach (var item in largeColaWithFries)
{
    Console.WriteLine(item.Value);
    Console.WriteLine(item.Count);
}
//Zadanie 13: Utwórz listę zakończonych zadań z ich numeracją oraz długością nazw
Console.WriteLine("Zadanie 13");
var lapuchainaMexicoAvokado = tasks.Where(t => t.IsCompleted == true).Select((g, index) => new{index = index + 1, Lenght = g.Name.Length, Item = g.IsCompleted});
foreach (var task in lapuchainaMexicoAvokado)
{
    Console.WriteLine($"{task.index} :");
    Console.WriteLine($"{task.Lenght}  {task.Item}");
}
//Zadanie 14: Zadania posortowane według stanu zakończenia, a następnie alfabetycznie według nazw
Console.WriteLine("Zadanie 14");
var fiveNightsWithErrors = tasks.OrderBy(t => t.IsCompleted).ThenBy(t => t.Name); 
foreach (var task in fiveNightsWithErrors)
{
    Console.WriteLine(task);
}

//Zadanie 15: Sprawdź, czy w nazwach wszystkich zadań są co najmniej 2 różne samogłoski
Console.WriteLine("Zadanie 15 ");
bool oreoShakeWithTwoCookiesPlease = tasks.All(t => t.Name.ToLower().Where(c => "aeoiyu".Contains(c)).Distinct().Count() >= 2);
Console.WriteLine(oreoShakeWithTwoCookiesPlease);

//Zadanie 16: Znajdź wszystkie unikalne litery używane w nazwach zadań zakończonych
Console.WriteLine("Zadanie 16");
var opaCha = tasks.Where(t => t.IsCompleted == true).SelectMany(c => c.Name.ToLower().Where(c => char.IsLetter(c))).Distinct(); 
foreach (var task in opaCha)
{
    Console.Write($"{task} , ");
}