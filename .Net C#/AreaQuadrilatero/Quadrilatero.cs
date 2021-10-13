using System;
namespace AreaQuadrilatero
{
    public class Quadrilatero
    {
        
        public Quadrilatero(float BaseDef, float AlturaDef)
        {
            this.BaseQ = BaseDef;
            this.Altura = AlturaDef;
            CalcularArea();
            GetTipo();
        }
        
        private float baseQ;
        public float BaseQ
        {
            get { return baseQ; }
            set { baseQ = value; }
        }

        private float altura;
        public float Altura
        {
            get { return altura; }
            set { altura = value; }
        }

        private float area;
        public float Area
        {
            get { return area; }
            private set {area = value;}
        }

        private string tipo;
        public string Tipo
        {
            get { return tipo; }
            private set { tipo = value; }
        }
        
        
        private void CalcularArea()
        {
            this.Area = this.Altura * this.BaseQ;
        }

        private void GetTipo()
        {
            if(this.Altura == this.BaseQ)
                this.Tipo = "Quadrado";
            else
                this.Tipo = "Retângulo";
        }

        public void ExibirDados()
        {
            Console.WriteLine();
            Console.WriteLine("Exibindo Dados do Quadrilatero ");
            Console.WriteLine("Base: " + this.BaseQ);
            Console.WriteLine("Altura: " + this.Altura);
            Console.WriteLine("Área: " + this.Area);
            Console.WriteLine("Tipo: " + this.Tipo);
        }
        
    }
}