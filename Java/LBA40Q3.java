import java.util.*;

public class LBA40Q3
{
    public static boolean ChkBit(int iNo)
    {
        int iMask1=0X00000100;//for 9th bit
        int iMask2=0X00000800;//for 12th bit

        int iResult1=0 , iResult2=0;

        iResult1=iNo & iMask1;
        iResult2=iNo & iMask2;

        if(iResult1==iMask1 || iResult2==iMask2)
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
        int iNo=0;
        boolean bRet=false;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        bRet=ChkBit(iNo);

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");

        }
    }
}