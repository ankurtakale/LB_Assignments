class Logic
{
    void PrintTable(int iNo)
    {
        int iCnt = 0;
        int iMul = 1;
        
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iMul = iCnt * iNo;
            System.out.println(iMul);
        }
    }
}

class Program17_5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintTable(5);
    }
}