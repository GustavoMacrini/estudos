using System;
using System.Collections.Generic;
namespace pooPokemonApp
{
    public class Pokedex
    {
        
        public Pokedex()
        {
            this.InicializaLista();
        }
        
        private List<Pokemon> pokemons;
        public List<Pokemon> Pokemons
        {
            get { return pokemons; }
        }

        private void InicializaLista()
        {
            //Instanciar a lista
            this.pokemons = new List<Pokemon>();
            Pokemon p = new Pokemon("Charmander", "tipo fogo");
            this.pokemons.Add(p);
            p = new Pokemon("Bulbassauro", "tipo planta");
            this.pokemons.Add(p);
            p = new Pokemon("Squirtle", "tipo água");
            this.pokemons.Add(p);
            p = new Pokemon("Dragonite", "tipo dragão");
            this.pokemons.Add(p);
            p = new Pokemon("Metagross", "tipo metal");
            this.pokemons.Add(p);
            p = new Pokemon("mew", "tipo psiquico");
            this.pokemons.Add(p);
            p = new Pokemon("mewtwo", "tipo psiquico");
            this.pokemons.Add(p);
            p = new Pokemon("Pidgey", "tipo normal");
            this.pokemons.Add(p);
            p = new Pokemon("Ferrow", "tipo normal");
            this.pokemons.Add(p);
            p = new Pokemon("Pikachu", "tipo elétrico");
            this.pokemons.Add(p);
        }

        public void ListarPokemons()
        {
            for(int i = 0; i < this.Pokemons.Count; i++)
                this.Pokemons[i].ExibirDadosPokemon();
        }
        
    }
}