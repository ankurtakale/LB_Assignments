class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo < 0)
        {
            System.out.println("Negative");
        }
        if(iNo > 0)
        {
            System.out.println("Positive");
        }
        if(iNo == 0)
        {
            System.out.println("Zero");
        }
    }
}

class Program18_5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckSign(-8);
    }
}