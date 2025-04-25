#include<iostream>
using namespace std;

class node
{
private:
    /* data */
public:
    int data;
    node*next;
    node*pre;
    node(int value){
        data=value;
        pre=NULL;
        next=NULL;
    }
};

void print(node*&head){
    node*temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
};
 
void insertAtBegin(node*&head,int value){
    node*n= new node(value);
    n->next=head;
    head=n;
}
void insertAtEnd(node*&head,int value){
    if(head==NULL){
        insertAtBegin(head,value);
    }
    node*n=new node(value);
    node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=n;
    n->next=NULL;
}

int main(){
    node*list=(node*)malloc(sizeof(node));

    insertAtEnd(list,5);
    insertAtEnd(list,2);
    insertAtEnd(list,3);
    insertAtEnd(list,4);
    insertAtEnd(list,6);
    print(list);

return 0;
}