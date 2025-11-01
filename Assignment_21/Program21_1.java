class Logic
{
    void ProductOfDigits(int iNo)
    {
        int iDigit = 0;
        int iMul = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMul*=iDigit;
            iNo = iNo / 10;
        }

        System.out.println(iMul);
    }
}
class Program21_1
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.ProductOfDigits(234);
    }
}