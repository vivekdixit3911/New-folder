#include <iostream>
using namespace std;
int main(){
char a[]="raman fhg gf";
int i,countvo=0,consonant=0,spacce=0;
for (i=0;a[i]!='\0';i++){
    if (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
        countvo++;
    }
    else if ((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z')){
        consonant++;
    }  
    else if (a[i]==' ') {
        spacce++;
    }

}
cout <<countvo <<endl <<consonant<<endl <<spacce<<endl;
cout  <<endl;
return 0;
}