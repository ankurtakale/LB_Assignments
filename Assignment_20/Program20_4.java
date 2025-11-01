class Logic
{
    void FindLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iLrgDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLrgDigit)
            {
                iLrgDigit = iDigit;
            }
            iNo = iNo / 10;
        }

        System.out.println(iLrgDigit);
    }
}
class Program20_4
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.FindLargestDigit(83429);
    }
}