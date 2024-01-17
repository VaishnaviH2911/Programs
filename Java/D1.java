package demo;

import java.util.*;

public class D1 extends Thread
{
    public void run()
    {
        for(int i=0;i<20;i++)
        {
            System.out.println(i);
        }
    }
}
