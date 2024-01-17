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

int AdditionEven(PPNODE Head)
{
    PNODE Temp = *Head;
    int iSum = 0;
    while(Temp != NULL)
    {
        if((Temp->data % 2) == 0)
        {
            iSum = iSum + Temp->data;
        }
        Temp = Temp->next;
    }
    return iSum;
}

int main()
{
    PNODE First  = NULL;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,32);
    InsertFirst(&First,41);

    iRet = AdditionEven(&First);
    printf("Addition of Even number is : %d",iRet);
    return 0;
}