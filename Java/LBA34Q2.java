import java.util.*;

public class LBA34Q2
{
    public static int CountOdd(int iValue)
    {
        int iDigit=0 , iCnt=0;
        int temp=0;
        temp=iValue;

        while(temp>0)
        {
            iDigit=temp%10;
            temp=temp/10;
            if(iDigit%2!=0)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iNo=0,iRet=0;

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        iRet=CountOdd(iNo);
        System.out.println("Count of odd digits in number is:"+iRet);

        sobj.close();
    }
}

