namespace ExFixacaoConjuntos.Entities
{
    class User
    {
        public int Code { get; set; }

        public User(int code)
        {
            Code = code;
        }

        public override int GetHashCode()
        {
            return Code.GetHashCode();
        }

        public override bool Equals(object? obj)
        {
            if(!(obj is User))
            {
                return false;
            }
            User other = obj as User;
            return Code.Equals(other.Code);
        }

    }
}
