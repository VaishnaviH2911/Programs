import java.util.*;

public class LBA37Q3
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=0X08104040;
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
            System.out.println("7th, 15th, 21st and 28th bit is ON");
        }
        else
        {
            System.out.println("bit is OFF");
        }
    }
}
/* 
0000 1000 0001 0000 0100 0000 0100 0000
0    8    1    0    4    0    4    0
0X08104040
*/