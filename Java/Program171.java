//Hexadecimal
import java.util.*;

public class Program165 
{
    public static boolean CheckBit(int iNo)
    {
        int iMask=0X00000a00;
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
            System.out.println("10th and 12th bit is ON");
        }
        else
        {
            System.out.println("bit is OFF");
        }
    }
}
/* 
0000 0000 0000 0000 0100 1010 0100 0000
0    0    0    0    0    a    0     0
0X00000a00
*/