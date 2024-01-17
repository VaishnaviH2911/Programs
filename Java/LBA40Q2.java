import java.util.*;

public class LBA40Q2
{
    public static void CommonOnBits(int iNo1, int iNo2)
    {
        int iResult=0, iCnt=0;
        int CommonBits=0;
        
        iResult=iNo1 & iNo2;

        System.out.println("Position of common on bits are:");

        for(int i=0;i<32;i++)
        {
            CommonBits=(iResult>>i) & 1;
            if(CommonBits==1)
            {
                System.out.println(i+1);
            }
        }
    }
    
    public static void main(String arg[])
    {
        int iNo1=0, iNo2=0, iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the first number:");
        iNo1=sobj.nextInt();

        System.out.println("Enter the second number:");
        iNo2=sobj.nextInt();

        CommonOnBits(iNo1,iNo2);
    }
}