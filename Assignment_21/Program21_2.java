class Logic
{
    void CountEvenOddRange(int iNo)
    {
        int iDigit = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }
            iNo = iNo / 10;
        }

        System.out.println("Count of Even numbers : "+iEvenCnt);
        System.out.println("Count of Odd numbers : "+iOddCnt);
    }
}
class Program21_2
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.CountEvenOddRange(50);
    }
}