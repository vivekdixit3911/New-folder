#include <iostream>
using namespace std;
int main(){
char a[] = "hi my name is bibek";
int i;
for (i=0;a[i]!='\0';i++){
    if (a[i]>='A' && a[i]<='Z'){
        a[i]+=32;
    }
    else if(a[i]>='a' && a[i]<='z'){
        a[i]-=32;
    }
}
for (i=0;a[i]!='\0';i++){
    cout<<a[i];
}
cout  <<endl;
return 0;
}