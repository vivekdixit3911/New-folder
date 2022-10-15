#include <iostream>
using namespace std;
template <class i>
i swap11(i *x, i *y){
    i k=*x;
    *x=*y;
    *y=k;
}

int main(){

int i=0,j=9,l;
int a[10]={-4,12,45,-464,-64,-465,4,-458,44,1};
while(i<j){
while(i>0){i++;}
while(j<0){j--;}
if (i<j){
    swap11(&a[i],&a[j]);
}
i++;
}
cout  <<endl;
return 0;
}