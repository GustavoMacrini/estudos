using System;
namespace MaiorIdade
{
    public class Pessoa
    {
        public Pessoa(string nomeP, int idadeP)
        {
            this.Nome = nomeP;
            this.Idade = idadeP;
        }

        public Pessoa()
        {
            this.Nome = " ";
            this.Idade = 0;
        }

        private string nome;
        public string Nome
        {
            get { return nome; }
            set { nome = value; }
        }

        private int idade;
        public int Idade
        {
            get { return idade; }
            set { idade = value; }
        }
        
        public void ExibirDados(){
            Console.WriteLine("Nome: " + this.Nome);
            Console.WriteLine("Idade: " + this.Idade);
        }
        
    }
}