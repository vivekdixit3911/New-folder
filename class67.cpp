#include <iostream>
using namespace std;
class linked{
    public:
     int data;
    linked *next;
}; 
linked *head=NULL;
void create (){
    linked *last,*temp;
    head=new linked();
    head->data =1;
    head->next =NULL;
    last= head;
int count =5;
    for(int i=1;i<=5;i++){
       
        temp =new linked;
        temp->data=count;
        temp->next =NULL;
        last->next=temp;
        last=temp;
        count=count*5;
    }
}
void push(){
   
    linked *tempe =new linked();
    tempe->data=599;
    tempe->next=head;           //this is joining of the two nodes;
    head=tempe;
}
void insert(int pos,int data){
    linked *temp,*p;
    temp->data;
    p=head;
    for (int i=0;i=pos-1;i++){
        p=p->next;
        }
        p->next=temp->next;
        p->next=temp;
}
void Display(){
    while(head->next!=0){
        cout<<head->data<<"\t";
        head=head->next;
    }
}
int main(){

create ();
// push();
insert(2,4568);
Display();

cout  <<endl;
return 0;
}