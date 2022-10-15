#include <iostream>
using namespace std;

struct ass{
    int a[10];
    int n;
};
void pass(struct ass *r1, int n){
    r1->a[2]=999;
    for(int i=0;i<n;i++){
        cout<<r1->a[i]<<" "<<endl;
    }
}
int main(){
struct ass r={{12,3,1,4,4},5};
pass(&r,5);
cout<<"-------------"<<endl;
for(int i=0;i<r.n;i++){
        cout<<r.a[i]<<" "<<endl;
    }
cout  <<endl;
return 0;
}