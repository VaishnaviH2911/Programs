import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void AddColumn() 
    {
        int i = 0, j = 0;

        for (j = 0; j < Arr[0].length; j++) 
        {
            int cSum = 0;
            for (i = 0; i < Arr.length; i++)
            {
                cSum = cSum + Arr[i][j];
            }
            System.out.println("Summation of col " + (j + 1) + " is " + cSum);
        }
    }
}

public class LBA46Q4 {
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

        mobj.AddColumn();

        mobj = null;
        System.gc();
    }
}
