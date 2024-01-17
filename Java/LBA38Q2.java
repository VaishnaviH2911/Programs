import java.util.*;

public class LBA38Q2
{
    public static int OffBit(int iNo)
    {
        int iMask=0X00000240;
        int iResult=0;

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

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iRet=OffBit(iNo);

        System.out.println("Updated number is:"+iRet);

    } 
}
