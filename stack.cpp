#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int n)
{

    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        cout << "overflow";
    }
    else
    {
        p->data = n;
        p->next = head;
        head = p;
    }
}

void pop()
{
    struct node *p = NULL;
    if (head == NULL)
    {
        cout << "underflow\n";
    }
    else
    {
        p = head;
        int y = head->data;
        cout << y << endl;
        head = head->next;
        free(p);
    }
}

int isempty(){
    if(head==NULL){
        return 1;
    }
    return 0;
}

int main()
{
    printf("Menu\n");
    printf("1. Push\n2. Pop\n3. IsEmpty\n4. display the stack elements\n5. Exit\n");

    while (1)
    {
        int ch;
        printf("enter your choice : ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            int data;
            printf("enter the data to be pushed : ");
            scanf("%d", &data);
            push(data);
        }
        else if (ch == 2)
        {
            pop();
        }
        else if(ch==3){
            int a=isempty();
            if(a==1){
                printf("Yes, the stack is empty\n");
            }
            else{
                printf("The stack is not empty\n");
            }
        }
        else if(ch==4){
            while(head!=NULL){
                pop();
            }
        }
        else
        {
            printf("thankyou");
            break;
        }
    }
}