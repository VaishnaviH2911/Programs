import java.util.*;

public class Program238
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0;
        int iCol=0;

        System.out.println("Enter no.of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter no.of columns:");
        iCol=sobj.nextInt();

        int Arr[][]=new int[iRow][iCol];
        int i=0;
        int j=0;

        System.out.println("Enter the elements:");
        //    1     2    3
        for( i=0;i<iRow;i++)//outer
        {
            for(j=0;j<iCol;j++)//inner
            {
                Arr[i][j]=sobj.nextInt();//4
            }
        }

        System.out.println("Entered elements are:");

        for( i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

    }
    
}
