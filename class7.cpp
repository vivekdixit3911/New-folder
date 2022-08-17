#include <iostream>
using namespace std;
struct list{
   int head;
   struct list *next;
};
int main(){
struct list *r= new struct list;
r->head=45;
r->next=NULL;

struct list *r1= new struct list;
r1->head=5;
r1->next=NULL;
r->next=r1;
r1= new struct list;
r1->head=5;
r1->next=NULL;
r->next->next=r1;

cout<<(r->next->next=r1)  <<endl;
return 0;
}