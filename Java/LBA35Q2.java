import java.util.*;

public class LBA35Q2
{
    public static int FirstOcc(int Brr[],int iValue)
    {
        int iCnt=0;
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]==iValue)
            {
                return iCnt;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iNo=0,iSize=0, iCnt=0, iRet=0;
        

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

        iRet=FirstOcc(Arr,iNo);

        System.out.println(iRet);

        sobj.close();
    }
}

