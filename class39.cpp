#include <iostream>
using namespace std;
int main(){

char a[] ="nadaada";
int i ,j;
for (i=0;a[i]!='\0';i++){ }
i=i-1;
for (j=0;i<j;i--,j++){
    int temp=a[j];
    a[j]=a[i];
    a[i]=temp;
}


cout  <<endl;
return 0;
}