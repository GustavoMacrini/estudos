// Ler o codigo de alunos dos cursos A, B, C e mostrar a quantidade de alunos existentes
// (cada aluno pode estar em mais de 1 curso)

using System;
using ExFixacaoConjuntos.Entities;

namespace ExFixacaoConjuntos
{
    class Program
    {
        static void Main(string[] args)
        {
            HashSet<User> users = new HashSet<User>();

            Console.Write("How many students for course A? ");
            int a = int.Parse(Console.ReadLine());
            Console.WriteLine("Codes:");
            for(int i = 0; i < a; i++)
            {
                users.Add(new User(int.Parse(Console.ReadLine())));
            }

            Console.Write("How many students for course B? ");
            int b = int.Parse(Console.ReadLine());
            Console.WriteLine("Codes:");
            for (int i = 0; i < b; i++)
            {
                users.Add(new User(int.Parse(Console.ReadLine())));
            }

            Console.Write("How many students for course C? ");
            int c = int.Parse(Console.ReadLine());
            Console.WriteLine("Codes:");
            for (int i = 0; i < c; i++)
            {
                users.Add(new User(int.Parse(Console.ReadLine())));
            }

            Console.WriteLine("Total students: " + users.Count());
        }
    }
}