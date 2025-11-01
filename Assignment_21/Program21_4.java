class Logic
{
    void CountFactors(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;
        
        for(iCnt = 1;iCnt <= (iNo / 2);iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
    }
}
class Program21_4
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.CountFactors(20);
    }
}