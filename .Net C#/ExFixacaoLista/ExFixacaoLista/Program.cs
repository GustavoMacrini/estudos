/*Fazer um programa para ler um número inteiro N e depois os dados (id, nome e salario) de
N funcionários. Não deve haver repetição de id.
Em seguida, efetuar o aumento de X por cento no salário de um determinado funcionário.
Para isso, o programa deve ler um id e o valor X. Se o id informado não existir, mostrar uma
mensagem e abortar a operação. Ao final, mostrar a listagem atualizada dos funcionários,
conforme exemplos.
Lembre-se de aplicar a técnica de encapsulamento para não permitir que o salário possa
ser mudado livremente. Um salário só pode ser aumentado com base em uma operação de
aumento por porcentagem dada.*/

using System;
using System.Globalization;
using System.Collections.Generic;

namespace ExFixacaoLista
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Funcionario> list = new List<Funcionario>();

            Console.Write("Quantos funcionários serão registrados? ");
            int N = int.Parse(Console.ReadLine());

            for(int i = 0; i < N; i++)
            {
                Console.WriteLine($"Funcionário #{i+1}:");
                Console.Write("Id: ");
                int id = int.Parse(Console.ReadLine());
                Console.Write("Nome: ");
                string nome = Console.ReadLine();
                Console.Write("Salário: ");
                double salario = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                Console.WriteLine();

                list.Add(new Funcionario(id, nome, salario));
            }

            Console.Write("Entre com o id que receberá um aumento de salario: ");
            int idAumento = int.Parse(Console.ReadLine());

            Funcionario func = list.Find(x => x.Id == idAumento);

            if (func != null)
            {
                Console.Write("Entre com a porcentagem: ");
                double percAumento = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                func.aumentaSalario(percAumento);
            }
            else
                Console.WriteLine("Este Id não existe!");


            Console.WriteLine("\nLista de funcionários atualizada:");
            foreach(Funcionario obj in list)
            {
                Console.WriteLine(obj);
            }
        }
    }
}