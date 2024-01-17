import java.util.*;

public class Program146
{
    public static void EvenOddFactors(int iNo)
    {
        int iFact=1;
        int i=1;

        int iSumEven=0;
        int iSumOdd=0;
        
        for(i=1;i<=iNo;i++)
        {
            if((iNo%i)==0)
            {
                if((i%2)==0)
                {
                    iSumEven=iSumEven+i;
                }
                else
                {
                    iSumOdd=iSumOdd+i;
                }
            }
        }
        System.out.println("Addition even fact:"+iSumEven);
        System.out.println("Addition odd fact:"+iSumOdd);
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

