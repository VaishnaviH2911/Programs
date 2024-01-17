//Take position from user (bit chalu asel tr band krel ani band asel tr band ch rahil)
import java.util.*;

public class Program176
{
    public static int OffBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);

        iResult=iNo & iMask;

        if(iResult==iMask)
        {
            iResult= (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
        return iResult;

    }
    public static void main (String Arg[])
    {
        Scanner sobj=new Scanner (System.in);
        int iNo=0;
        int iRet=0;
        int iPos=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        System.out.println("Enter position:");
        iPos=sobj.nextInt();

        iRet=OffBit(iNo,iPos);

        System.out.println("Updated number is:"+iRet);

    } 
}
/*
iMask:  0000 0000 0000 0000 0000 0000 0000 0001

iPos:6

iMask=iMask<<(iPos-1);
iMask=iMask<<5;

iMask:  0000 0000 0000 0000 0000 0000 0001 0000

*/