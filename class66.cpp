#include <iostream>
using namespace std;
class link{
public:
int data ;
link *next;

}; link *head;
void create(){
    link *last ;
    head =new link();
    head->data=6;
    head ->next=NULL;
    last = head;

    for(int i =1;i< 5;i++){
        link *k =new link();
        k->data=i;
        k->next=NULL;
        last->next =k;
        last=k;
    }
}
void display(link *n){
    int count=0;
    while (n!=0){
      count++;
       if (10==n->data){
       cout<<"at the "<< count <<" position";
       }
    n=n->next;
    } 
    cout<<"nodes are'nt avilable ";
}
int main(){
link *pahla=new link();
link *one = new link();
link *two = new link();

pahla->data=10;
pahla->next=one;

one->data=20;
one->next=two;

two->data=40;
two=pahla->next->next;

create();
display (pahla);
cout<<endl;
display(head);


cout  <<endl;
return 0;
}