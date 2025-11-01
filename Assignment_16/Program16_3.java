class Logic
{
    void FindFactorial(int iNo)
    {
        int iCnt = 0;
        int iFact = 1;

        for(iCnt = iNo; iCnt > 0; iCnt--)
        {
            iFact*=iCnt;
        }

        System.out.println("Factorial : "+iFact);
    }
}

class Program16_3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindFactorial(5);
    }
}