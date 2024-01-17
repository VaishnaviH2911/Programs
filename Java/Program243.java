import java.util.*;

class Matrix
{
    protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr=null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }
    
    public int Sum()
    {
        int i = 0, j = 0;
        int sum=0;

        for( i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                sum=sum+Arr[i][j];
            }
        }
        return sum;
    }

    public int Maximum()
    {
        int i = 0, j = 0;
        int iMax=Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j]>iMax)
                {
                    iMax=Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int i = 0, j = 0;
        int iMin=Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j]<iMin)
                {
                    iMin=Arr[i][j];
                }
            }
        }
        return iMin;
    }
}

class Program243
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet=0, iRet1=0, iRet2=0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.Sum();

        iRet=mobj.Sum();
        System.out.println("Sum of all elements is:"+iRet);

        iRet1=mobj.Maximum();
        System.out.println("Maximum element is:"+iRet1);

        iRet2=mobj.Minimum();
        System.out.println("Minimum element is:"+iRet2);

        mobj=null;
        System.gc();
    }
}