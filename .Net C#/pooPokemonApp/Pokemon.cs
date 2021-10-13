using System;

namespace pooPokemonApp
{
    public class Pokemon
    {
        public Pokemon()
        {
            this.Nome = "";
            this.Descricao = "";
        }
        
        public Pokemon(string nome, string descricao)
        {
            this.Nome = nome;
            this.Descricao = descricao;
        }

        private string nome;
        public string Nome
        {
            get { return nome; }
            set { this.nome = value.ToUpper(); }
        }
        
        private string descricao;
        public string Descricao
        {
            get { return this.descricao; }
            set { this.descricao = value.ToUpper(); }
        }
        
        public void ExibirDadosPokemon()
        {
            Console.WriteLine("Nome do Pokémon: " + this.Nome);
            Console.WriteLine("Descrição do Pokémon: " + this.Descricao);
        }

        public void ExibirDadosPokemon(Boolean formatado)
        {
            if(formatado == true)
            {
                Console.WriteLine("Pokémon " + this.Nome + ": " + this.Descricao.ToLower());
            }
            else
            {
                Console.WriteLine("Nome do Pokémon: " + this.Nome);
                Console.WriteLine("Descrição do Pokémon: " + this.Descricao);
            }
        }


    }
}