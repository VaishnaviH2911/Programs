//7th bit 
import java.util.*;

public class Program173
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0X00000040;
        int iResult=0;
        iResult= (iNo ^ iMask);

        return iResult;

    }
    public static void main (String Arg[])
    {
        Scanner sobj=new Scanner (System.in);
        int iNo=0;
        int iRet=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iRet=ToggleBit(iNo);

        System.out.println("Updated number is:"+iRet);

    } 
}