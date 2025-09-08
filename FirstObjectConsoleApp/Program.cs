// See https://aka.ms/new-console-template for more information
using FirstObjectConsoleApp; 

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

firstAccount.ShowInfo();
secondAccount.ShowInfo();

firstAccount.DepositeToAccount(15);
firstAccount.ShowInfo();

secondAccount.WithdrawFromAccount(20);
secondAccount.ShowInfo();

firstAccount.TransferBetweenAccount( ref secondAccount, 5);
firstAccount.ShowInfo();
secondAccount.ShowInfo();

