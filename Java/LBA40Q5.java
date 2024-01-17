import java.util.*;

public class LBA40Q5
{
    public static int ToggleBitRange(int iNo,int iStart,int iEnd)
    {
        int iMask=0X00000001;
        int i=0, iResult=0;

        for(i=iStart;i<=iEnd;i++)
        {
            iMask=iMask<<1;
            iResult=iNo & iMask;

            if(iNo==iResult)
            {
                iResult=iNo ^ iMask;
            }
            else{
            return iNo;
            }
        }
        return iResult;
    }
    public static void main(String arg[])
    {
        int iRet=0, iNo=0;
        int iStart=0, iEnd=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        System.out.println("Enter the range of positions:");
        System.out.println("Enter start position:");
        iStart=sobj.nextInt();
        System.out.println("Enter end position:");
        iEnd=sobj.nextInt();

        iRet=ToggleBitRange(iNo,iStart,iEnd);

        System.out.println("Updated number is:"+iRet);

        
    }
}