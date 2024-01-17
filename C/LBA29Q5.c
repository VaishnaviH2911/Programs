#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->Next=NULL;
    newn->Data=no;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->Next=*Head;
        *Head=newn;
    }
}

int Minimum(PNODE Head)
{
    PNODE temp=NULL;
    temp=Head;

    int Min=temp->Data;

    while(temp!=NULL)
    {
        if((temp->Data)<Min)
        {
            Min=temp->Data;
        }
        else
        {
            temp=temp->Next;
        }
    }
    return Min;
}

void Display(PNODE Head)
{
    printf("Contents of linked list are:\n");

    while(Head!=NULL)
    {
        printf("| %d | <=>",Head->Data);
        Head=Head->Next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First=NULL;
    int iNo=0;
    int iRet=0;
    
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet=Minimum(First);
    printf("Minimum element is %d\n",iRet);

    return 0;
}
