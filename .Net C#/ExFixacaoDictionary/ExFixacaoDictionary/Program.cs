using System;
using System.Collections.Generic;

namespace ExFixacaoDictionary
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.Write("Enter file full path: ");
                string path = Console.ReadLine();

                Dictionary<string, int> votes = new Dictionary<string, int>();

                using(StreamReader sr = new StreamReader(path))
                {
                    while (!sr.EndOfStream)
                    {
                        string[] lines = sr.ReadLine().Split(',');
                        string name = lines[0];
                        int voteNumber = int.Parse(lines[1]);

                        if (votes.ContainsKey(name))
                        {
                            votes[name] += voteNumber;
                        }
                        else
                        {
                            votes[name] = voteNumber;
                        }
                    }                    
                }

                foreach(KeyValuePair<string, int> item in votes)
                {
                    Console.WriteLine(item.Key + ": " + item.Value);
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }    

            /*
                Exemplos para arquivo txt:
                Alex Blue,15
                Maria Green,22
                Bob Brown,21
                Alex Blue,30
                Bob Brown,15
                Maria Green,27
                Maria Green,22
                Bob Brown,25
                Alex Blue,31
            */
        }
    }
}