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

int SecMaximum(PPNODE Head)
{
    PNODE Temp = *Head;
    int Max = Temp->data;
    int SecMax = 0;
    while(Temp != NULL)
    {
        if(Temp->data > Max)
        {
            SecMax = Max;
            Max = Temp->data; 
        }
        else if((Temp->data > SecMax) && (Temp->data < Max) )
        {
            SecMax = Temp->data;
        }
        Temp = Temp->next;
        
    }
    return SecMax;
}

int main()
{
    PNODE First  = NULL;
    int iRet = 0;

    InsertFirst(&First,122);
    InsertFirst(&First,32);
    InsertFirst(&First,231);
    InsertFirst(&First,876);

    iRet = SecMaximum(&First);
    printf("Second Maximum number is : %d",iRet);
    return 0;
}