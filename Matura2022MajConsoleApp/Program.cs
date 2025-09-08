//matura 2022 maj 


StreamReader streamReader = new("przyklad.txt");

string? strNumberFromFile; 
List<string> strNumbersFromFile = new();

while((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbersFromFile.Add(strNumberFromFile); 
}

streamReader.Close();

//zadanie 4.1

byte counter = 0; 
string? firstFindNumber = null;
foreach (string strNumber in strNumbersFromFile)
{
    if (strNumber[0] == strNumber[strNumber.Length - 1 /* if (strNumber[0] == strNumber[^1])*/])
    {
        counter ++;
        if (firstFindNumber == null)
        {
            firstFindNumber = strNumber; 
        }
        //firstFindNumber ??= strNumber;
    }
}
Console.WriteLine($"Zadanie 4.1 odp: {counter} {firstFindNumber}");
