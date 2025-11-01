class Logic
{
    void CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt < iNo;iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println("Not a prime number");
            }
            else
            {
                System.out.println("Prime number");
            }
            break;
        }
    }
}

class Program18_1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}