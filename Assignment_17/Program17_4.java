class Logic
{
    void FindMin(int iNo1,int iNo2,int iNo3)
    {
        if(iNo1 < iNo2 && iNo1 < iNo3)
        {
            System.out.println(iNo1+" "+"Is minimum");
        }
        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            System.out.println(iNo2+" "+"Is minimum");
        }
        else
        {
            System.out.println(iNo3+" "+"Is minimum");
        }
    }
}

class Program17_4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindMin(3,7,2);
    }
}