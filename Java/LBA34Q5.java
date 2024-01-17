import java.util.*;

public class LBA34Q5
{
    public static int CountDiff(int iValue)
    {
        int iDigit=0 , eSum=0, oSum=0, iDiff=0;
        int temp=0;
        temp=iValue;

        while(temp>0)
        {
            iDigit=temp%10;
            temp=temp/10;
            if(iDigit%2==0)
            {
                eSum=eSum+iDigit;
            }
            else
            {
                oSum=oSum+iDigit;
            }
            iDiff=eSum-oSum;
        }
        return iDiff;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iNo=0,iRet=0;

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        iRet=CountDiff(iNo);
        System.out.println("Difference is:"+iRet);

        sobj.close();
    }
}

