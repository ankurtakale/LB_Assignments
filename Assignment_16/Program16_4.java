class Logic
{
    void ReverseNumber(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class Program16_4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.ReverseNumber(1234);
    }
}