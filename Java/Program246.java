import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void RowSum()
    {
        int i=0,j=0,iSum=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                iSum=iSum+Arr[i][j];
            }
            System.out.println("Summation of row "+(i+1)+" is "+iSum);
            iSum=0;
        }
    }

    public void RowMax()
    {
        int i=0,j=0,iMax=0;

        for(i=0;i<Arr.length;i++)
        {
            iMax=Arr[i][0];

            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]>iMax)
                {
                    iMax=Arr[i][j];
                }
            }
            System.out.println("Maximum from row "+(i+1)+" is "+iMax);
        }
    }

    public void RowMin()
    {
        int i=0,j=0,iMin=0;

        for(i=0;i<Arr.length;i++)
        {
            iMin=Arr[i][0];

            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]<iMin)
                {
                    iMin=Arr[i][j];
                }
            }
            System.out.println("Minimum from row "+(i+1)+" is "+iMin);
        }
    }


}

class Program246
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.RowSum();
        mobj.RowMax();
        mobj.RowMin();

        // Function calls

        mobj = null;
        System.gc();
    }
}