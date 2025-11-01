class Logic
{
    void CheckLeapYear(int iNo)
    {
        if((iNo % 4) == 0)
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not Leap Year");
        }
    }
}

class Program19_1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckLeapYear(2024);
    }
}