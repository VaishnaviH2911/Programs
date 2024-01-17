import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public int AddDiagonal() {
        int i = 0, j = 0;
        int dSum = 0;

        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                dSum = dSum + Arr[i][i];
            }
        }
        return dSum;
    }
}

public class LBA46Q1 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0, iRet1 = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.AddDiagonal();

        System.out.println("Sum of diagonal elements is:" + iRet);

        mobj = null;
        System.gc();
    }
}
