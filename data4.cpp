#include <iostream>
using namespace std;
class add{
    
    int i;
    int h;
    public:

void seti(int k){
    if (k>=0){
       i=k; 
    }  
    else i=0;
}
void seth( int j){
     if (j>=0){
         h=j;
          }  
    else{
      cout<<"the value u enter is nagative so setting it to 0" <<endl;
    h=0;
   }
}
int geti(){
    return i;
}
int geth(){
    return h;
}
int area(){
    return i+h;
}
int peri(){
    return i*h;
}
};
int main(){
add *j;
j= new add;
j->seti(10);
j->seth(5);
cout<<j->peri()  <<endl;
return 0;
}