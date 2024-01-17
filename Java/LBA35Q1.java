import java.util.*;

public class LBA35Q1
{
    public static boolean Check(int Brr[],int iValue)
    {
        int iCnt=0;
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]==iValue)
            {
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iNo=0,iSize=0, iCnt=0;
        boolean bRet=false;

        System.out.println("Enter the number of elements you want to enter:");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Enter the element to check:");
        iNo=sobj.nextInt();

        bRet=Check(Arr,iNo);

        if(bRet==true)
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

