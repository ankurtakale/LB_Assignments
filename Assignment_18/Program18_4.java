class Logic
{
    void SumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iESum = 0;
        int iOSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iESum+=iDigit;
            }
            if((iDigit % 2) != 0)
            {
                iOSum+=iDigit;
            }
            iNo = iNo / 10;
        }

        System.out.println("Sum of Even Digits : "+iESum);
        System.out.println("Sum of Odd Digits : "+iOSum);
    }
}

class Program18_4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}