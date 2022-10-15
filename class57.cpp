#include <iostream>
using namespace std;
class roy{};
int tmaa(int x, int y) throw(roy){
    if(x==y)
    throw roy();
    return x/y;
}
int main(){
int x=10, b=10,c;
try {
    c=tmaa(x,b);
    cout<<c;
}
catch (roy e){
    cout<<"this is error"<<endl<<endl;
}


cout<<"bye"  <<endl;
return 0;
}