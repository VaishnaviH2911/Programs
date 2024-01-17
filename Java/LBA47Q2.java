import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 
{
    public MyMatrix(int A, int B) 
    {
        super(A, B);
    }

    public void ReverseRow() 
    {
        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) 
        {
            int start = 0;
            int end = Arr[i].length - 1;
            
            while (start < end) 
            {
                int temp = Arr[i][start];
                Arr[i][start] = Arr[i][end];
                Arr[i][end] = temp;
                
                start++;
                end--;
            }
        }
       
    }
}

public class LBA47Q2 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        mobj.ReverseRow();

        System.out.println("Matrix after RowReverse is:");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}
