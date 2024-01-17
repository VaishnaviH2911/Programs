import java.util.*;

public class LBA39Q4
{
    public static int ToggleBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask=iMask<<(iPos-1);

        iResult=iNo & iMask;

        if(iResult==iNo)//Bit is on
        {
            iResult= (iMask ^ iNo);//Off the bit
        }
        else
        {
            iResult=(iMask ^ iNo);//On the bit
        }
        return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iNo=0, iPos=0;
        int iRet=0;

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        System.out.println("Enter the position:");
        iPos=sobj.nextInt();

        iRet=ToggleBit(iNo,iPos);

        System.out.println("Updated number is:"+iRet);

        
        
    }
}