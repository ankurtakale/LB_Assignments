class Logic
{
    void FindSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iSmlDigit = 9;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmlDigit)
            {
                iSmlDigit = iDigit;
            }
            iNo = iNo / 10;
        }

        System.out.println(iSmlDigit);
    }
}
class Program20_5
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.FindSmallestDigit(45872);
    }
}