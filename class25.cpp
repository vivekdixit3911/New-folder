#include <iostream>
using namespace std;
int main(){

int a[3][4]={{1,6,5,5},{6,8,6,8},{3,5,7}};
int b[3][4]={{1,4,2,1},{1,3,5,3},{9,5,3,5}};
int c[3][4];
cout<< "this is a matrix"<<endl;
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<a[i][j]<<" ";
    
}
cout<<endl;
}
cout<<"this is b matrix"<<endl;
// for (int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         cout<<b[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(auto & x:a){
    for (auto & y:x){
        cout<<y<<" ";
    }
    cout<<endl;
}

cout<<"this is adding two a & b matrix";
cout<<"this is b matrix"<<endl;
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        c[i][j]=a[i][j]+b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0;

}