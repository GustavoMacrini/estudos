using System;

namespace Calculo_Idade
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();
            Console.WriteLine("Programa que calcula a idade de uma pessoa");

            Console.Write("Nome da pessoa: ");
            string nome = Console.ReadLine();

            Console.Write("Ano de nascimento: ");
            int anonascimento = int.Parse(Console.ReadLine());

            Pessoa p = new Pessoa(nome, anonascimento);

            Console.WriteLine("===========================");
            p.ExibirDados();

        }
    }
}
