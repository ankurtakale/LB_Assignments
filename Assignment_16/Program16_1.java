class Logic
{
    void CalculateSum(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum+=iCnt;
        }
        System.out.println("Addition is : "+iSum);
    }
}

class Program16_1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CalculateSum(10);
    }
}