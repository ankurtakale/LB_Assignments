class Logic
{
    void PrintDigits(int iNo)
    {
        int iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class Program19_4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintDigits(9876);
    }
}