#include <iostream>
using namespace std;
class link{
    public:
    int data;
    link *next;
};
link *head=NULL;
void create(int a[]){
    int i;
    link *temp,*farzi;
    head=new link();
    head->data=a[0];
    head->next=NULL;
   farzi=head;
    for (i=1;i<7;i++){
        link *temp =new link();
        temp->data=a[i];
        temp->next=NULL;
        farzi->next=temp;
        farzi=temp;
    }
}
void push0(int number ){
     link *temp;
     temp=new link();
     temp->data=number;
     temp->next =head;
     head=temp;
}
void display(){
   link *temp;
   temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
void delet(){
    link *temp ; 
    temp= head;
    // head->next;
    head = head->next;
    delete temp;
}
void sum(){
    int sumq=0;
   link *temp;
   temp=head;
    while(temp!=NULL){
        sumq+=temp->data;
        temp= temp->next;
    }
    cout<<sumq;
}
void maxi(){
   int max=0;
   link *temp;
   temp=head;
    while(temp!=NULL){

        if(temp->data>max){
            max= temp->data;
        }
        temp= temp->next;
    }
    cout<<max;
}
void min(){
   int mini=head->data;
   link *temp;
   temp=head;
    while(temp!=NULL){

        if(temp->data<mini){
            mini= temp->data;
        }
        temp= temp->next;
    }
    cout<<mini;
}
int search(int n){
link *temp;
temp= head;
int pos=0;
while (temp!=NULL){
    pos++;
    if (temp->data==n){
        return pos;
        break;
    }
    temp= temp->next;
 }
}
// void inteliser(int sear){
//    link *temp ;
//    temp =head;
//    while(temp!=NULL){
//     if (temp->data==sear){
//         cout<<temp->data;
//     }
//     temp=temp->next;
//    }
// }
int count(){
    int sumq=0;
   link *temp;
   temp=head;
    while(temp!=NULL){
        sumq++;
        temp= temp->next;
    }
    return sumq;
}
void place(int pos,int number){
    int i;
    int k =count();
    if (k+1>=pos){
    link *temp = new link();
    link *far;
    temp->data= number;
    far= head;
    for (i=1;i<pos-1;i++){
       far= far->next;
    }
    temp->next=far->next;
    far->next=temp;

    }
    else {
        cout<<"there are only " <<k << " you can add inside our more to it but not more than tha "<<endl;
    }
    
}
void check(){
    int k=head->data;
    link *temp= head;
    while(temp!=NULL){
        temp= temp->next;
        if (k>temp->data && temp ){
           cout<<"nahi hai ye "<<endl;
           break;
        }
     k=temp->data;
     if (temp->next==NULL){
        break;
     }
    }
    cout<<"bna le gaye bhau!"<<endl;
}
int main(){
int k[]={1,2,3,8,43,45};
create(k);
display();
check();
// push0(844);
// count();
// place(11,777);
// delet();
// sum();
// maxi();
// min();
// cout<<endl<<search(6)<<endl;
return 0;
}