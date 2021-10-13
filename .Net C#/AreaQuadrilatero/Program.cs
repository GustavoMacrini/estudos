//Criar um programa que exiba para o usuário qual é a área de um quadrilatero e classificálo.

using System;

namespace AreaQuadrilatero
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.Clear();
            Console.WriteLine("Calculo da Area de Quadrilateros");
            Console.Write("Base: ");
            float baseq = float.Parse(Console.ReadLine());
            Console.Write("Altura: ");
            float alturaq = float.Parse(Console.ReadLine());

            Quadrilatero q1 = new Quadrilatero(baseq,alturaq);

            q1.ExibirDados();
            
        }
    }
}
