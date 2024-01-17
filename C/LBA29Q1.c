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

int SearchFirstOcc(PNODE Head, int iValue)
{
    int ipos=1;
    PNODE temp=NULL;
    temp=Head;

    while(temp!=NULL)
    {
        if(temp->Data==iValue)
        {
            return ipos;
        }
        temp=temp->Next;
        ipos++;
    }
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

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    printf("Enter element for serach:\n");
    scanf("%d",&iNo);

    iRet=SearchFirstOcc(First,iNo);
    printf("First occurance of %d is at position %d\n",iNo,iRet);

    return 0;
}
