class Logic
{
    void CheckPalindrome(int iNo)
    {
        int iCnt = iNo;
        int iDigit = 0;
        int iRev = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        if(iRev == iCnt)
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Not Palindrome");
        }
    }
}

class Program17_2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPalindrome(121);
    }
}