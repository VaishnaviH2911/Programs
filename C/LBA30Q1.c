#include<Stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = (*Head);
        *Head = newn;
    }
}

void DisplayPerfect(PPNODE Head)
{
    PNODE Temp = *Head;
    
    while(Temp != NULL)
    {
        int iSum = 0;
        int i = 0;

        for(i = 1; i < Temp->data;  i++)
        {
            if((Temp->data % i) == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == Temp->data)
        {
            printf("%d ",Temp->data);
        }
        Temp = Temp->next;
    }
    
}

int main()
{
    PNODE First  = NULL;

    InsertFirst(&First,70);
    InsertFirst(&First,28);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,6);
    InsertFirst(&First,10);

    DisplayPerfect(&First);
    return 0;
}