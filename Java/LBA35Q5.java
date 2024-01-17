import java.util.*;

public class LBA35Q5
{
    public static int Product(int Brr[])
    {
        int iCnt=0, iMult=1;
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]%2!=0)
            {
                iMult=iMult*Brr[iCnt];
            }
        }
        return iMult;
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iRet=0, iSize=0, iCnt=0;
        
        System.out.println("Enter the number of elements you want to enter:");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        iRet=Product(Arr);

        System.out.println("Multiplication of odd elements is:"+iRet);

        sobj.close();
    }
}

