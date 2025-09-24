//Darshan soni
//24070123034

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*next;
        
        Node(int num){
            data=num;
            next= NULL;
        }
};

void insert_head(Node*&head,int data){
    Node*new_node=new Node(data);
    new_node->next=head;
    head=new_node;
}
void disp(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node*head=NULL;
    insert_head(head,30);
    disp(head);
    insert_head(head,32);
    disp(head);
    insert_head(head,35);
    disp(head);
}

//Output
//30->NULL
//32->30->NULL
//35->32->30->NULL
