// See https://aka.ms/new-console-template for more information
using StructConsoleApp;

BankAccount firstAccount = new BankAccount();
firstAccount.balance = 10;
firstAccount.PIN = "0010";
firstAccount.currency = "zl";
firstAccount.owner = "Patric Star";



BankAccount secondAccount = new BankAccount();
secondAccount.balance = 30;
secondAccount.PIN = "0112";
secondAccount.currency = "zl";
secondAccount.owner = "Joy Baiden";

showInfo(firstAccount);
showInfo(secondAccount);

depositeToAccount(ref firstAccount, 15);
showInfo(firstAccount);

withdrawFromAccount(ref secondAccount, 20);
showInfo(secondAccount);


transferBetweenAccount(ref firstAccount, ref secondAccount, 5);
showInfo(firstAccount);
showInfo(secondAccount);

void showInfo(BankAccount account)
{
    Console.WriteLine("informacja o konice: "); 
    Console.WriteLine($"Nawa uzytkowniak {account.owner}"); 
    Console.WriteLine($"Saldo  {account.balance} {account.currency}"); 
}


void depositeToAccount( ref BankAccount account, double amount)
{
    if(amount >= 0)
    account.balance += amount; 
}

bool withdrawFromAccount(ref BankAccount account, double amount)
{
    if (amount >= 0
        && amount <= account.balance)
    {
        account.balance-= amount;
        return true;
    }
    return false; 
 }
void transferBetweenAccount( ref BankAccount sourceAccount, ref BankAccount targerAccount, double amount)
{
   // if (amount < sourceAccount.balance) { }     // alternatywa 

    if (withdrawFromAccount(ref sourceAccount, amount))
        depositeToAccount(ref targerAccount, amount); 
}