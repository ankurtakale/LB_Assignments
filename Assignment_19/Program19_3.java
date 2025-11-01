class Logic
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 5) == 0 && (iNo % 11) == 0)
        {
            System.out.println("Divisible");
        }
        else
        {
            System.out.println("Not divisible");
        }
    }
}

class Program19_3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);
    }
}