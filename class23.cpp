#include <iostream>
using namespace std;

int min(int x, int y ){
    return x>y?x:y;
}
int max(int x, int y){
    return x<y?x:y;
}
int main(){
int (*type) (int ,int);
type=min;
(*type)(4,50);
cout<<type<<endl;
type =max;
(*type)(4,99);
cout<<type;
return 0;
}