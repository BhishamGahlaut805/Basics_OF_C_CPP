#include<iostream>
using namespace std;

class node
{
private:
    /* data */
public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;

    }
    
};
void deleteAtHead(node* &head){
    

    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &list ,int val){
    node* temp=list;
    if(temp==NULL){       //Base Case 1
        return;
    }
    if(temp->next==NULL){
        deleteAtHead(temp);
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;  //To point the value in list that is to be deleted

    }
   node*todelete=temp->next;
  
   temp->next=temp->next->next;
}



void insertAtHead(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";    //Displaying node temp->data
        temp=temp->next;          //continuing displaying full ll
    }
    cout<<endl;
}



int main(){
    node* head=NULL;

       insertAtHead(head,5);
     insertAtHead(head,4);
      insertAtHead(head,3);
       insertAtHead(head,2);
        insertAtHead(head,1);

        deleteAtHead(head);
        display(head);

       deletion(head,3);
        display(head);
        deletion(head,5);
        display(head);


return 0;
}