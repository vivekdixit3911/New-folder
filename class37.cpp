
#include <iostream>
using namespace std;
int main(){ 
char a[]="ertrte45  4";
int i;
for (i=0;a[i]!='\0';i++){
    if (!(a[i]>='a' && a[i]<='z') && !(a[i]>='A' && a[i]<='Z') && !(a[i]>=48 && a[i]<=57) ){
      cout<<"invalid";
      return 0;
    }
}
cout<<"vlaid";
return 0;
}