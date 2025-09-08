using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstObjectConsoleApp
{
    internal class BankAccount
    {
        public double balance;
        public string PIN;
        public string owner;
        public string currency;


        public void ShowInfo()
        {
            Console.WriteLine("informacja o konice: ");
            Console.WriteLine($"Nawa uzytkowniak {owner}");
            Console.WriteLine($"Saldo  {balance} {currency}");
        }


        public void DepositeToAccount( double amount)
        {
            if (amount >= 0)
               balance += amount;
        }

        public bool WithdrawFromAccount(double amount)
        {
            if (amount >= 0
                && amount <= balance)
            {
                balance -= amount;
                return true;
            }
            return false;
        }
        public void TransferBetweenAccount(ref BankAccount targerAccount, double amount)
        {
            // if (amount < sourceAccount.balance) { }     // alternatywa 

            if (WithdrawFromAccount(amount))
                targerAccount.DepositeToAccount(amount);
        }
    }
}
