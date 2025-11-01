class Logic
{
    void FindMax(int iNo1,int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1+" "+"Is maximum");
        }
        else
        {
            System.out.println(iNo2+" "+"Is maximum");
        }
    }
}

class Program17_3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindMax(20,15);
    }
}