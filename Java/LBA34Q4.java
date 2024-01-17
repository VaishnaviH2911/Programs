import java.util.*;

public class LBA34Q4
{
    public static int Multiply(int iValue)
    {
        int iDigit=0 , iCnt=0;
        int temp=0, iMult=1;
        temp=iValue;

        while(temp>0)
        {
            iDigit=temp%10;
            temp=temp/10;

            if(iDigit>0)
            {
                iMult=iMult*iDigit;
            }
        }
        return iMult;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iNo=0,iRet=0;

        System.out.println("Enter the number:");
        iNo=sobj.nextInt();

        iRet=Multiply(iNo);
        System.out.println("Multiplication of digits is:"+iRet);

        sobj.close();
    }
}

