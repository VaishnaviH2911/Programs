import java.util.*;

public class LBA40Q4
{
    public static boolean ChkBit(int iNo,int iPos1,int iPos2)
    {
        int iMask1=0X00000001;
        int iMask2=0X00000001;
    
        int iResult1=0 , iResult2=0;

        iMask1=iMask1<<(iPos1-1);
        iMask2=iMask2<<(iPos2-1);

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
        int iNo=0, iPos1=0, iPos2=0;
        boolean bRet=false;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        System.out.println("Enter Position 1:");
        iPos1=sobj.nextInt();

        System.out.println("Enter position 2:");
        iPos2=sobj.nextInt();

        bRet=ChkBit(iNo,iPos1,iPos2);

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