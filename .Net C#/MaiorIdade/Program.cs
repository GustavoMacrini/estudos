//Implemente u programa no qual o usuario devera informar o nome e a idade de tres pessoas
//o programa devera informar o nome da pessoa que posuir a maior idade

using System;

namespace MaiorIdade
{
    class Program
    {
        static void Main(string[] args)
        {
            string nome;
            int idade;

            Console.Clear();
            Console.WriteLine("Atividade - Maior Idade");

            Console.Write("Nome pessoa 1: ");
            nome = Console.ReadLine();
            Console.Write("Idade pessoa 1: ");
            idade = int.Parse(Console.ReadLine());
            Pessoa p1 = new Pessoa(nome,idade);

            Console.Write("Nome pessoa 2: ");
            nome = Console.ReadLine();
            Console.Write("Idade pessoa 2: ");
            idade = int.Parse(Console.ReadLine());
            Pessoa p2 = new Pessoa(nome,idade);
            
            Console.Write("Nome pessoa 3: ");
            nome = Console.ReadLine();
            Console.Write("Idade pessoa 3: ");
            idade = int.Parse(Console.ReadLine());
            Pessoa p3 = new Pessoa(nome,idade);

            Console.WriteLine();
            Console.WriteLine("Pessoa com maior idade: ");
            if(p1.Idade > p2.Idade && p1.Idade > p3.Idade)
                p1.ExibirDados();
            if(p2.Idade > p1.Idade && p2.Idade > p3.Idade)
                p2.ExibirDados();
            if(p3.Idade > p1.Idade && p3.Idade > p2.Idade)
                p3.ExibirDados(); 

        }
    }
}
