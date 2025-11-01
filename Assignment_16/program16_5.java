class Logic
{
    void CountDigits(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iFrequency = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iFrequency++;
            iNo = iNo / 10;
        }

        System.out.println(iFrequency);
    }
}

class Program16_5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CountDigits(7865);
    }
}