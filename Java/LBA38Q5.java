import java.util.*;

public class LBA38Q5
{
    public static int OnBit(int iNo)
    {
        int iMask=0X0000000f;
        int iResult=0;

        iResult=iNo & iMask;

        if(iResult==iMask)
        {
            return iNo;
        }
        else{
            iResult=iNo | iMask;
        }
        return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iNo=0;
        int iRet=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iRet=OnBit(iNo);

        System.out.println("Updated number is:"+iRet);

        sobj.close();
    }
}