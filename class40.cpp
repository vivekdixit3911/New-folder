#include <iostream>
using namespace std;
int main(){
    int i,j,temp=0;
int a[10]={10,12,1,2,4,2,4,6,7,9};
cout<<"this is sdiha "  <<endl;
for (i=0;i<10;i++){
 cout<<a[i]<<"\t";
}
for ( i =0,j=9; i<j;i++,j--){
      temp = a[i];
        a[i]=a[j];
        a[j]=temp;
}
cout<<endl<<"this is ulta "  <<endl;
for ( i=0;i<10;i++){
 cout<<a[i]<<"\t";
}


return 0;
}