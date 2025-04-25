#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }
};
    //1.Insertion at tail in a Linked List
    
    void insertAtTail(node* &head,int val){
        node*n=new node(val);

        if(head==NULL){         //Base case when no element in ll
            head=n;
            return;
        }
        node*temp=head;
        while(temp->next!=NULL){ //iterating till last element in linked list
            temp=temp->next;     //Pointing to last element of ll
        }
        temp->next=n;            //Saving the value at the end of ll

    }
//Function For display linked list
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";    //Displaying node temp->data
        temp=temp->next;          //continuing displaying full ll
    }
    cout<<endl;
}

//2.Insertion at head of linked list
void insertAtHead(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}

//3.Searching in a Linked List
bool search(node*head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return 1;

        }
        temp=temp->next;
    }
    return 0;
}
int main(){
    node* head=NULL;
    
    insertAtTail(head,1); //Function calling in OOP
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* head1=NULL;
    insertAtHead(head1,9);
    insertAtHead(head1,8);
    insertAtHead(head1,7);
    insertAtHead(head1,6);
    insertAtHead(head1,5);
    display(head1);
    cout<<search(head1,5)<<endl;
    cout<<search(head,25)<<endl;
    cout<<search(head,1)<<endl;
    cout<<search(head,439)<<endl;
    cout<<search(head1,9)<<endl;


return 0;
}