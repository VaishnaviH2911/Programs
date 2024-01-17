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
    struct node * newn = NULL;
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

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    return 0;
}