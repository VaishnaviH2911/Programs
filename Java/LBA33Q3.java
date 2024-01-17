import java.util.*;

public class LBA33Q3
{
    public static void Display(int Brr[])
    {
        int iCnt=0;

        System.out.println("Even Elements divisible by 5 are:");
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]%5==0 && Brr[iCnt]%2==0)
            {
                System.out.println(Brr[iCnt]);
            }
        }
    }
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iSize=0,iCnt=0;

        System.out.println("Enter no.of elements:");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        Display(Arr);

        sobj.close();
    }
}

