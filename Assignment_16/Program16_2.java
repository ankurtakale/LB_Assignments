class Logic
{
    void CheckEvenOdd(int iNo)
    {
        if((iNo % 2) == 0)
        {
            System.out.println("Even number");
        }
        else
        {
            System.out.println("Odd number");
        }
    }
}

class Program16_2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
    }
}