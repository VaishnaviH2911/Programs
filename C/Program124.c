#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node 
{
    int data;          //4 bytes
    struct node *next; //8 bytes
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    //step 1:Allocate memory for node
    PNODE newn = NULL;
    newn=(PPNODE)malloc(sizeof(NODE));

    //step 2:Initialise the node
    newn->data=No;
    newn->next=NULL;

    //step 3: Check whether linked list is empty or not
    if(*Head==NULL) //LL is empty
    {
        *Head=newn;
    }
    else           //LL contains at least one node in it
    {
        newn -> next= *Head;
        *Head = newn;
    }
    
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are:\n");

    while(Head!=NULL)
    {
        printf("| %d | -> ",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
   int iCnt=0;

    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
   return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);//InsertFirst(60,51)
    InsertFirst(&First, 21);//InsertFirst(60,21)
    InsertFirst(&First, 11);
    

    Display(First);

    iRet=Count(First);

    printf("Number of nodes are:%d\n",iRet);

    return 0;
}