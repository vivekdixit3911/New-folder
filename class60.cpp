#include <iostream>
using namespace std;
int main(){
    int i,j;
char k[22]={'a','b','c','d','e','f'};
char *a;
a= new char[22];
for( i=0;k[i]!='\0';i++){};

for (j=0;a[j]!='\0',i>=0;j++,i--){
    a[j]=k[i];
}
for( i=0;k[i]!='\0';i++){
    cout<<a[i] <<endl;
}

return 0;
}