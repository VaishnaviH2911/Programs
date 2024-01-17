import java.util.*;

public class LBA37Q2
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=0X00020010;
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

        bRet=ChkBit(iNo);

        if(bRet==true)
        {
            System.out.println("5th and 18th bit is ON");
        }
        else
        {
            System.out.println("bit is OFF");
        }
    }
}
/* 
0000 0000 0000 0010 0000 0000 0001 0000
0    0    0    2    0    0    1     0
0X00020010
*/