class Logic
{
    void SumOfDigits(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum+=iDigit;
            iNo = iNo / 10;
        }

        System.out.println(iSum);
    }
}

class Program17_1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumOfDigits(1234);
    }
}