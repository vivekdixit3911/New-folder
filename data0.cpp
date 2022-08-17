struct node {
    int data;
    struct node *next;  //self strutered pointer
};

#include <iostream>
using namespace std;
int main(){
struct node *p;
p= new node ;
p->data =10;
p->next=0; 


cout  <<endl;
return 0;
}