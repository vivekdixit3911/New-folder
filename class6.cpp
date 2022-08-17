#include <iostream>
using namespace std;
struct link{
  int head;
  struct link *nu;
};
int count(struct link *node){
int cont=0;
if(node==NULL){
  cout<<"the list is empty";
}
struct link *ptr=NULL;
ptr=node;
while(ptr!=NULL){
  cont++;
  ptr= ptr->nu;
}
cout<<cont<<endl;
};

int main(){
struct link *node =new struct link;
node->head=45;
node->nu=NULL;

  struct link *node1 =new struct link;
  node1->head=65;
  node1->nu=NULL;
  node->nu=node1;
     node1 =new struct link;
     node1->head=68;
     node1->nu=NULL; 
     node->nu->nu =node1;
cout<< (node->nu->nu) <<endl;
count (node);
return 0;
} 