using System;
namespace Calculo_Idade
{
    public class Pessoa
    {
        public Pessoa(string nomepessoa, int anonascimentopessoa)
        {
            this.Nome = nomepessoa;
            this.AnoNascimento = anonascimentopessoa;
            this.CalcularIdade();
        }
        
        private int anoNascimento;
        public int AnoNascimento
        {
            get { return this.anoNascimento; }
            set { anoNascimento = value; }
        }

        private string nome;
        public string Nome
        {
            get { return nome; }
            set { nome = value.ToUpper(); }
        }
        
        //Valor melhorar
        private int idade;
        public int Idade
        {
            get { 
                this.CalcularIdade();
                return this.idade; 
                }
            
        }
        


        public void ExibirDados()
        {
            Console.WriteLine("Nome: " + this.nome);
            Console.WriteLine("Ano de nascimento: " + this.AnoNascimento);
            this.CalcularIdade();
            Console.WriteLine("Idade: " + this.idade);
        }

        private void CalcularIdade()
        {
            DateTime data = DateTime.Now;
            int ano = data.Year;
            this.idade = ano - this.AnoNascimento;
        }
    }
}