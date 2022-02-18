using System.Globalization;

namespace ExFixacaoHerancaPolimorfismo.Entities
{
    class UsedProduct : Product
    {
        public DateTime ManufatureDate { get; set; }

        public UsedProduct()
        {

        }

        public UsedProduct(string name, double price, DateTime manufatureDate) : base(name, price)
        {
            ManufatureDate = manufatureDate;
        }

        public override string PriceTag()
        {
            return $"{Name} (used) $ {Price.ToString("F2", CultureInfo.InvariantCulture)} (Manufacture date: {ManufatureDate.ToString("dd/MM/yyyy")})";
        }

    }
}
