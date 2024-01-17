//Take position from user (bit chalu ahe ka band te check krel (chalu asel tr return true band asel tr return false))
import java.util.*;

public class Program177
{
    public static boolean CheckBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);

        iResult=iNo & iMask;

        if(iResult==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    public static void main (String Arg[])
    {
        Scanner sobj=new Scanner (System.in);
        int iNo=0;
        boolean bRet=false;
        int iPos=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        System.out.println("Enter position:");
        iPos=sobj.nextInt();

        bRet=CheckBit(iNo,iPos);

        if(bRet==true)
        {
            System.out.println("Bit is on at given position");
        }
        else
        {
            System.out.println("Bit is off at given position");
        }

    } 
}
/*
iMask:  0000 0000 0000 0000 0000 0000 0000 0001

iPos:6

iMask=iMask<<(iPos-1);
iMask=iMask<<5;

iMask:  0000 0000 0000 0000 0000 0000 0001 0000

*/