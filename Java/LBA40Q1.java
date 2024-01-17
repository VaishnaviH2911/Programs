import java.util.*;

public class LBA40Q1
{
    public static int CountOn(int iNo)
    {
        int iCount=0;

        while(iNo!=0)
        {
            iCount=iCount+(iNo & 1);
            iNo>>>=1;
        }
        return iCount;
    }
    public static void main(String arg[])
    {
        int iNo=0, iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        iRet=CountOn(iNo);

        System.out.println("Number of on bits are:"+iRet);
    }
}