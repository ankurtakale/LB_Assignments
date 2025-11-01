class Logic
{
    void SumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {
            iSum+=iCnt;
        }
        
        System.out.println("Sum :"+iSum);
    }
}
class Program20_1
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.SumEvenNumbers(10);
    }
}