import java.util.*;

public class Program145
{
    public static void EvenOddFactors(int iNo)
    {
        int iFact=1;
        int i=0;
        
        for(i=1;i<=iNo;i++)
        {
            if((iNo%i)==0)
            {
                if((i%2)==0)
                {
                    System.out.println("Even factor are:"+i);
                }
                else
                {
                    System.out.println("Odd factor are:"+i);
                }
            }
        }
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter number:");
        iValue=sobj.nextInt();

        EvenOddFactors(iValue);

        sobj.close();
    }
}

