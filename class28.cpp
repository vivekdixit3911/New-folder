#include <iostream>
using namespace std;
struct Arr{
    int *a;
    int size; //means the full lenght of array that it can consist
    int length; //numbersinside of the array
};
void display(struct Arr add){
 int i;
 for(i=0;i<add.length;i++){
    cout<<add.a[i]<<"\t";
 }
}

int main(){
    int i;
    struct Arr add;
    cout<<"enter the size of array u want for you above zero"<<endl;
    cin>>add.size;
    add.a=new int[add.size];

    cout<<"how many number want to enter in array size of " <<add.size <<endl;
    cin>>add.length;
    if(add.size<add.length&&add.length<0){
        cout<<"please enter the length less than "<< add.size <<" and greater than zero!" <<endl;
       return 0;
    }
     
     cout<< "enter " <<add.length <<" number after enter " <<endl;
     for(i=0;i<add.length;i++){
        cin>>add.a[i];
     }
     cout<<"the size of array is "<<add.size <<" u have entered "<< add.length <<" number and those numbers are as follows"<<endl;
     display(add);

return 0;
}