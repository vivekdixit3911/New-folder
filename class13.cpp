#include <iostream>
using namespace std;

struct link
{
    /* data */
    int data;
    struct link *next;
};
void Display(struct link *print){
    if (print== NULL)
        cout<<"linked list NULL";
    while(print!=NULL){
        cout<<print->data<<endl;
    print =print->next;
    }
};

int main(){

link *head =new struct link;
head->data=2;
head->next=NULL;

link *node=new struct link;
node->data=3;
node->next=NULL;
head->next=node;

node=new struct link;
node-> data=4;
node->next= NULL;
head->next->next=node;
Display(head);
//cout <<"  "<< head->next->next<<endl;
return 0;
}