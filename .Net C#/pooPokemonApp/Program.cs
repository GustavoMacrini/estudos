using System;

namespace pooPokemonApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Pokedex pokedex = new Pokedex();
            int resp = 100;

            while(resp != 0)
            {
                resp = Menu();
                if(resp == 1)
                {
                    pokedex.ListarPokemons();
                }
                Console.ReadKey();
                Console.Clear();
            }

            Console.ReadKey();
        }

        static int Menu()
        {
            Console.WriteLine("----- Pokédex -----");
            Console.WriteLine("0 - Sair da Pokédex");
            Console.WriteLine("1 - Listar os pokemons");
            Console.Write("Opção: ");
            int resp = int.Parse(Console.ReadLine());
            return resp;
        }
    }
}
