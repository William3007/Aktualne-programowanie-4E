
void numberOfCubesFromUser()
{
    string numberOfCubesFromUser = "";
    do
    {
        Console.WriteLine("Ile kostek chcesz rzucić? (3 - 10)");
        numberOfCubesFromUser = Console.ReadLine();
        int.Parse(numberOfCubesFromUser);
        Console.WriteLine(numberOfCubesFromUser);
    }
    while (numberOfCubesFromUser );
}