#include <iostream>
using namespace std;
struct array {
    int A[10];
};
int binarysearch(struct array sear, int number){
    int high=10,low=0,mid;
while(low<=high){
    
    mid =(high+low)/2;
    if (number==sear.A[mid]){
        return mid+1;
    }
    else if(number<sear.A[mid]){
        high =mid-1;
    }
    else {
        low=mid+1;
    }
  }
return-1;
}
int main(){

struct array are={2,3,4,5,6,7,8,9,10,11};
// binarysearch(are,10);
cout << binarysearch(are,8)<<" is the place where is the number"<<endl;
return 0;
}