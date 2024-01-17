import java.util.*;

public class Program163 
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        int iMask=256;
        int iResult=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iResult =iNo & iMask;

        if(iResult==iMask)
        {
            System.out.println("9th bit is ON");
        }
        else
        {
            System.out.println("9th bit is OFF");
        }
    }
}
