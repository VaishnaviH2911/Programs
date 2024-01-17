import java.util.*;

public class Program144
{
    public static int Factorial(int iNo)
    {
        int iFact=1;
        int i=1;
        
        while(i<=iNo)
        {
            iFact=iFact*i;
            i++;
        }
        return iFact;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0, iAns=0;

        System.out.println("Enter number:");
        iValue=sobj.nextInt();

        iAns=Factorial(iValue);

        System.out.println("Factorial is:"+iAns);
        sobj.close();
    }
}

