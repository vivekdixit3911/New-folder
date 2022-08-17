#include <iostream>
using namespace std;
class link{
    public:
    int data;
    link *address;
};
void print(link *count){
    
    int coun =1;
    while(count=NULL){
        coun++;
   count=count->address;
    }
    cout<<count;
}
int main(){
link *head= new link;
head->data=45;
head->address=NULL; 


    link *list1=new link;
    list1->data=10;
    list1->address=NULL;
    
    head->address=list1;

    link *list2=new link;
    list2->data=11;
    list2->address=NULL;

    head->address=list2;
print(head);
//cout <<head->address->address <<endl;
return 0;
}