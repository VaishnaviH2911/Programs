import java.util.*;

public class Program149
{
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

        System.out.println("Elements of array are:");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
        sobj.close();
    }
}

