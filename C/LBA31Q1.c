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

void Reverse(PPNODE Head)
{
    PNODE Temp = *Head;
    while(Temp != NULL)
    {
        int iNo = Temp->data;
        int iRem = 0;
        int iSum = 0;

        while(iNo != 0 )
        {
            iRem = iNo % 10;
            iSum = iSum + iRem;
            iNo = iNo / 10;
        }
        printf("%d ",iSum);
        Temp = Temp->next;

    }
    
}

int main()
{
    PNODE First  = NULL;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);

    SumDigit(&First);
}