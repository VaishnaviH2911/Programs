import java.util.*;

public class LBA35Q4
{
    public static void Display(int Brr[],int iStart,int iEnd)
    {
        int iCnt=0;
        System.out.println("Range is:");
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]>iStart && Brr[iCnt]<iEnd)
            {
                System.out.println(Brr[iCnt]);
            }
        }
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iStart=0, iEnd=0, iSize=0, iCnt=0, iRet=0;
        

        System.out.println("Enter the number of elements you want to enter:");
        iSize=sobj.nextInt();

        System.out.println("Enter the start of range:");
        iStart=sobj.nextInt();
        
        System.out.println("Enter the end of range:");
        iEnd=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        Display(Arr,iStart,iEnd);

        sobj.close();
    }
}

