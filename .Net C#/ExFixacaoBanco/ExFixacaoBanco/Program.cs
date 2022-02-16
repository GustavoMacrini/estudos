using System;
using System.Globalization;

namespace ExFixacaoBanco
{
    class Program
    {
        static void Main(string[] args)
        {
            ContaBancaria conta;

            Console.Write("Entre o número da conta: ");
            int numero = int.Parse(Console.ReadLine());

            Console.Write("Entre o titular da conta: ");
            string titular = Console.ReadLine();

            Console.Write("Haverá depósito inicial (s/n)? ");
            char confirmDeposito = char.Parse(Console.ReadLine());

            if(confirmDeposito == 's' || confirmDeposito == 'S')
            {
                Console.Write("Entre o valor de depósito inicial: ");
                double deposito = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                conta = new ContaBancaria(numero, titular, deposito);
            }
            else
            {
                conta = new ContaBancaria(numero, titular);
            }
            
            Console.WriteLine("\nDados da conta:\n" + conta);

            Console.Write("\nEntre um valor para depósito: ");
            conta.Deposito(double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture));
            Console.WriteLine("Dados da conta atualizados:\n" + conta);

            Console.Write("\nEntre um valor para saque: ");
            conta.Saque(double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture));
            Console.WriteLine("Dados da conta atualizados:\n" + conta);
        }
    }
}