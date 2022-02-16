using System.Globalization;

namespace ExFixacaoLista
{
    class Funcionario
    {
        public int Id { get; set; }
        public string Nome { get; set; }
        public double Salario { get; private set; }

        public Funcionario(int id, string nome, double salario)
        {
            Id = id;
            Nome = nome;
            Salario = salario;
        }


        public void aumentaSalario(double porcentagem)
        {
            Salario += (Salario * (porcentagem / 100)); 
        }


        public override string ToString()
        {
            return $"{Id}, {Nome}, {Salario.ToString("F2", CultureInfo.InvariantCulture)}"; 
        }
    }
}
