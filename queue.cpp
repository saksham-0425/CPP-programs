#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node*next;
};

struct node * head=(struct node*)malloc(sizeof(struct node));
struct node * f = NULL;
struct node * r = NULL;

void enqueue(int data){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        cout<<"overflow";
    }
    else{
        p->data=data;
        p->next=NULL;
    }
    if(r==NULL){
        r=p;
        f=p;
        head=p;
    }
    else{
        r->next=p;
        r=r->next;
        p=NULL;
        free(p);
    }
}

void dequeue(){
    int y;
    struct node*p;
    if(f==NULL){
      cout<<"underflow";
    }
    else{
        p=head;
        y=f->data;
        cout<<y<<" ";
        f=f->next;
        head=f;
        if(f==NULL){
            r=NULL;
        }
        free(p);

    }
}

int main(){
    for(int i=0;i<5;i++){
        int data;
        cin>>data;
        enqueue(data);
    }
    for(int i=0;i<5;i++){
        dequeue();
    }
}