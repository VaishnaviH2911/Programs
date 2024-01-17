import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void transpose() {
        int i = 0, j = 0;

        int[][] transposeM = new int[Arr[0].length][Arr.length];

        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                transposeM[j][i] = Arr[i][j];
            }
        }
        Arr = transposeM;
    }
}

public class LBA47Q1 {
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

        mobj.transpose();

        System.out.println("Matrix after transpose is:");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}
