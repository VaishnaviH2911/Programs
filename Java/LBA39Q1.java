import java.util.*;

public class LBA39Q1
{
    public static boolean ChkBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);

        iResult=iNo&iMask;

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

        int iNo=0, iPos=0;
        boolean iRet=false;

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        System.out.println("Enter the position:");
        iPos=sobj.nextInt();

        iRet=ChkBit(iNo,iPos);

        if(iRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
        sobj.close();
        
    }
}