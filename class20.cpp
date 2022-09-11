#include <iostream>
using namespace std;
int main(){
int a=10, b=6,c=0;
try {
    if (b==0){
    throw 101;
    }
    c=a/b;
    cout<<c<<endl;
}
catch(int e){
    cout << "u r dividing by zero " <<e <<endl;
}
cout<<"bye";
return 0;    
} 