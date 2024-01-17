import java.util.*;

public class LBA33Q1
{
    public static int Difference(int Brr[])
    {
        int iCnt=0, eSum=0, oSum=0 , sDiff=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]%2==0)
            {
                eSum=eSum+Brr[iCnt];
            }
            else
            {
                oSum=oSum+Brr[iCnt];
            }
        }
        sDiff=(eSum-oSum);
        return sDiff;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iSize=0,iCnt=0,iRet=0;

        System.out.println("Enter no.of elements:");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        iRet=Difference(Arr);

        System.out.println("Difference is:"+iRet);
        
        sobj.close();
    }
}

