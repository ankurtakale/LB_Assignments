class Logic
{
    void CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1;iCnt <= (iNo / 2);iCnt++)
        {
            iSum+=iCnt;
        }

        if(iSum == iNo)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not a Perfect Number");
        }
    }
}
class Program20_3
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.CheckPerfect(6);
    }
}