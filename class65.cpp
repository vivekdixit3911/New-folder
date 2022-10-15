#include <iostream>
using namespace std;
class Stack{
int size ;
int top;

public:
int *ptr;
Stack(int size, int top);
void push(class Stack *jk,int number);
void pop(int index);
void ismty();
int isfull();
void isplay();
};
Stack :: Stack(int size , int top ){
 this->size=size;
 this->top=top;
}
int Stack :: isfull(){
    if (top==size-1){
      return 1;
    }
}
void Stack :: ismty(){
    if (top ==-1){
        cout<<"the stack is MTY" <<endl;
    }


}
void Stack:: push(class Stack *jk,int number ){
   char s= isfull();
   if (!(s==1)){
    jk->top++;
    jk->ptr[top]=number;
   }
   else
   cout<<"khali nhi hai bhau!"<<endl;
}

int main(){
Stack fir(5,-1);
fir.ptr=new int [5];
fir.push(&fir,20);
fir.push(&fir,23);
fir.push(&fir,32);
fir.push(&fir,29);
fir.push(&fir,2);
fir.push(&fir,9);
fir.push(&fir,29);
for(int i=0;i<5;i++){
        cout<<fir.ptr[i]<<endl;
    }

return 0;
}