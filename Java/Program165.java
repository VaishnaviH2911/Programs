//Program268
import java.util.*;

public class Program165 
{
    public static boolean CheckBit(int iNo)
    {
        int iMask=16448;
        int iResult=0;
        iResult= iNo & iMask;

        if(iResult==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        boolean bRet=false;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        bRet=CheckBit(iNo);

        if(bRet==true)
        {
            System.out.println("7th and 15th bit is ON");
        }
        else
        {
            System.out.println("bit is OFF");
        }
    }
}
