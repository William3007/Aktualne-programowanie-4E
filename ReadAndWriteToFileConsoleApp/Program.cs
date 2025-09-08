

//zapisz do pliku 

string name;
int age;
Console.WriteLine("Podaj Imie : ");
name = Console.ReadLine();
Console.WriteLine("Podaj wiek : ");
age = int.Parse(Console.ReadLine());

StreamWriter streamWriter = new StreamWriter("C:\\Romchik Khazov\\progromowanie2E\\Programowanie-1E\\OpachaPlik.txt", true);

streamWriter.WriteLine(name);
streamWriter.Flush();
streamWriter.WriteLine(age);

streamWriter.Close();

StreamReader streamReader = new StreamReader("C:\\Romchik Khazov\\progromowanie2E\\Programowanie-1E\\OpachaPlik.txt");
while (true)
{
    name = streamReader.ReadLine();
    if (name == null)
        break;
    age = int.Parse(streamReader.ReadLine());
    Console.WriteLine($"Odczytano z pliku: {name} , {age}"); 
}

streamReader.Close();