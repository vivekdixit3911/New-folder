#include <iostream>
using namespace std;
int main(){ 
char a[]="ertrte";
int i ,space=0;
for (i=0;a[i]!='\0';i++){

    
    if (a[i]==' '&& a[i-1]!=' '){
        space++;
    }
}

cout <<space+1<<" words are there "<<endl;
return 0;
}