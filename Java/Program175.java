//Take position from user 
import java.util.*;

public class Program175
{
    public static int ToggleBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);
        iResult= (iNo ^ iMask);

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

        iRet=ToggleBit(iNo,iPos);

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