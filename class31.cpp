#include <iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int len;
};
int display(struct array dis){
    int i;
    for (int i=0;i<dis.size;i++){
        cout<<dis.A[i]<<"\t";
    }
}
 void swap(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
 }
void append(struct array *app,int number){
    if (app->size>app->len){
        app->A[app->len]=number;
        app->len++;
    }
}
void setin(struct array *set, int place , int number){
    int i;
    // if(place<=0 && place>=set->len){
    
    for(i=set->len;i>place;i--){
        set->A[set->len]=set->A[set->len-1];
    }
    set->A[place]=number;
    set->len++;
// }
}
void del(struct array *deete,int index)
{
    int i;
    for(i=index;i<deete->len-1;i++){
        deete->A[i]=deete->A[i+1];
    }
    deete->len;
}
int search(struct array inti,int number){
    int i;
    for (i=0;i<inti.len;i++){
        if (number == inti.A[i]){
            return i;
        }
    }
    return -1;
}
int isearch(struct array *inti,int number){
    int i;
    for (i=0;i<inti->len;i++){
        if (inti->A[i]==number){
            swap(&inti->A[i],&inti->A[i-1]);
            return i;
        }   
}
return -1;
}
int topsearch(struct array *inti,int number){
    int i;
    for (i=0;i<inti->len;i++){
        if (inti->A[i]==number){
            swap(&inti->A[i],&inti->A[0]);
            return i;
        }   
}
return -1;
}
int binsearch(struct array a,int num,int high ,int low){
    int mid;
    while (low<=high){
    mid = (low+high)/2;
    if(num==a.A[mid]){
        return mid;
    }
    else if(num<a.A[mid]){
        high= mid-1;
    }
    else{
        low=mid+1;
    }
}
return -1;
}
int max(struct array maxi){
    int i,j=0;
    for(i=0;i<maxi.len;i++){
        if (j<maxi.A[i]){
            j=maxi.A[i];
        }
    }
 return j;  
}

int avg(struct array maxi){
  float j=0;
  int i;
    for(i=0;i<maxi.len;i++){
       j=j+maxi.A[i];
    }
    j =j/i;
 return j;  
}
int min(struct array maxi){
    int i,j;
    for(i=0;i<maxi.len;i++){
        if (j>maxi.A[i]){
            j=maxi.A[i];
        }
    }
 return j;  
}
void reverse(struct array *Arr){
    int i,j;
    int *ptr;
    ptr=new int [10];
    for (i =0, j=Arr->len-1; i<Arr->len , j>=0;i++, j--){
       ptr[j]= Arr->A[i];
    }
    for (i=0;i<Arr->len;i++){
        Arr->A[i]= ptr[i];
    }
    delete[]ptr;
    ptr =NULL;
}
void nereverse(struct array *Arr){
    int i,j;
    for (i=0,j=Arr->len-1;i<j;i++,j--){
       swap(&Arr->A[i],&Arr->A[j]);
       
        // int temp=Arr->A[i];
        // Arr->A[i]=Arr->A[j];
        // Arr->A[j]=temp;
    }
}
void insert(struct array *in, int num){
    int i,j;
    
    for(i=in->len-1;i>0;i--){
        if (num>in->A[i]){           // this need some correction
            in->A[i+1]=num;
            break;
        }
        else{
            in->A[i+1]=in->A[i];
        }
    }
}
void sort(struct array *in){
    for (int i=0; i<in->len;i++){
            if(in->A[i]>in->A[i+1]){
                swap(&in->A[i],&in->A[i+1]);
            }
    }
}
void mergeer(struct array inti){
int b[25];
int *a;
a = new int [10];
for (int i=0;i<10;i++){
        a[i]=i+1;
}
for (int i=0;i<20;i++){
    for(int j=0;j<20;i++){
        if (inti.A[i]>a[j]){
            b[i]=a[j];
        }
        else{
            b[i]=inti.A[i];
            break;
        }
    }
}
for (int i=0;i<21;i++){
  cout<<b[i]<<"\t";  
}

delete []a;
a=NULL;
// int b[]
}
int main(){
struct array inti={{2,4,6,8,10,12,14,16,18},10,8};
// sort(&inti);
mergeer(inti);
// display(inti);
// reverse(&inti);
// nereverse(&inti);
//insert(&inti,5);

// cout<<min(inti)<<endl;
// cout<<max(inti)<<endl;
// cout<<avg(inti);
// append(&inti,456);
// cout<<"-------"  <<endl;
// setin(&inti,0,196);
// display(inti);
// cout<<"-------"  <<endl;
// del(&inti,0);
// display(inti);
//cout<<search(inti,998)<<endl;
//cout<<isearch(&inti,45);
//cout<<topsearch(&inti,5)<<endl;
// cout<<binsearch(inti,77,9,0)<<" place pe hai!"<<endl;
// display(inti,66,5);

return 0;
}