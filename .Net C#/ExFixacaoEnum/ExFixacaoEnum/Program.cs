using System;
using System.Globalization;
using ExFixacaoEnum.Entities;
using ExFixacaoEnum.Entities.Enums;

namespace ExFixacaoEnum
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter client data");
            Console.Write("Name: ");
            string name = Console.ReadLine();
            Console.Write("Email: ");
            string email = Console.ReadLine();
            Console.Write("Birth date (DD/MM/YYYY): ");
            DateTime birthDate = DateTime.Parse(Console.ReadLine());

            Client client = new Client(name, email, birthDate);

            Console.WriteLine("Enter order data: ");
            Console.Write("Status: ");
            OrderStatus status = Enum.Parse<OrderStatus>(Console.ReadLine());
            Console.Write("How many items to this order? ");
            int qntdItems = int.Parse(Console.ReadLine());

            Product pd;
            OrderItem orderItem;
            Order order = new Order(DateTime.Now, status, client);

            for(int i = 0; i < qntdItems; i++)
            {
                Console.WriteLine($"Enter #{i+1} item data:");
                Console.Write("Product name: ");
                string pdName = Console.ReadLine();
                Console.Write("Product price: ");
                double pdPrice = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                Console.Write("Quantity: ");
                int pdQuantity = int.Parse(Console.ReadLine());

                pd = new Product(pdName, pdPrice);
                orderItem = new OrderItem(pdQuantity, pdPrice, pd);
                order.AddItem(orderItem);
            }

            Console.WriteLine();
            Console.WriteLine(order);
        }
    }
}