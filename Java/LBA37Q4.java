import java.util.*;

public class LBA37Q4
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=0X000001C0;
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
            System.out.println("7th, 8th and 9th bit is ON");
        }
        else
        {
            System.out.println("bit is OFF");
        }
    }
}
/* 
0000 0000 0000 0000 0000 0001 1100 0000
0    0    0    0    0    1    c    0
0X000001C0
*/