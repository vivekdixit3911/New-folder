#include <iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int len;
};
void display(struct array arr){
    for(int i=0;i<10;i++){
        cout<<arr.A[i]<<" ";
    }
}
void append(struct array *arr,int last){
    if (arr->len<arr->size){
        arr->A[arr->len++]=last;
    }
}
 void add(struct array *arr,int place ,int number){
    int i;
    if (arr->size>arr->len){
        for(i=arr->len;i>place;i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[place]=number; 
    arr->len++;
 }
 }
int main(){
    int n;
struct array arr ={{2,3,4,6,4},10,5};
cout<<"Enter the value u want to enter at last"<<endl;
cin>>n;
append(&arr,n);
add(&arr,0,99);
display(arr);
return 0;
}