#include<iostream>
using namespace std;

//defining a node
class node_name{
public:
int data;
node_name*next; //Pointing to next of a node
node_name(int value){
    data=value;
    next=NULL;

}

};

void inserthead(node_name*&head,int data){
    node_name*n=new node_name(data);
    n->next=head;
    head=n;

}
void print(node_name* head){
    node_name*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";    //Displaying node temp->data
        temp=temp->next;          //continuing displaying full ll
    }
    cout<<endl;
}
//Reverse a Linked list
//Function for reversing a ll
node_name* reverse(node_name*&head){
node_name* prevptr=NULL;
node_name*currptr=head;
node_name*nextptr;

while(currptr!=NULL){
   nextptr=currptr->next;
   currptr->next=prevptr;
   prevptr=currptr;
   currptr=nextptr;
}

return prevptr;
}

//Reverse K nodes of A LL
node_name* reversek(node_name* &head, int k){
    node_name* prevptr=NULL;
node_name*currptr=head;
node_name*nextptr;

int count =0;
while(currptr!=NULL && count<k){
   nextptr=currptr->next;
   currptr->next=prevptr;
   prevptr=currptr;
   currptr=nextptr;
   count++;
}

if(nextptr!=NULL){
    head->next= reversek(nextptr,k);
}
return prevptr;
}

node_name* recursive_rev(node_name*&head){
        if(head==NULL ||head->next==NULL){
            return head;
        }

        node_name*newhead=recursive_rev(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
}


int main(){
    node_name*head=NULL;
    inserthead(head,1);
    inserthead(head,2);
    inserthead(head,3);
    inserthead(head,4);
    inserthead(head,5);
    inserthead(head,6);

print(head);
cout<<endl;
// node_name*temp=head;
// // node_name*newhead= reverse(head);
// // print(newhead);
// // cout<<endl;


// node_name*newh=recursive_rev(temp);
// print(newh);
node_name*newhead=reversek(head,2);
print(head);

}