/*堆排序(大顶堆) 2017.9.14*/ 

#include <iostream>
#include<algorithm>
using namespace std;
void Built_min_heap(int temp[],int k,int ans){
    while(2*k+1 <= ans){
        if(temp[k] < temp[2*k+1] && temp[k] < temp[2*k]) break;
        else if(temp[2*k] < temp[2*k+1]){
            swap(temp[k],temp[2*k]);
            k = k*2;
        }else{
            swap(temp[k],temp[2*k+1]);
            k = k*2+1;
        }
    }
    if(2*k == ans && temp[2*k] < temp[k])
        swap(temp[k],temp[2*k]);
}
void HeapSort(int* a,int n){
    int count = n;
    int temp[100];
    for(int i =1;i <= count;i++) temp[i] = a[i-1];

    for(int i =count;i>=1;i--) Built_min_heap(temp,i,count);

    for(int i = count;i>=1;i--){
        a[count - i] = temp[1];
        temp[1] = temp[i];
        Built_min_heap(temp,1,i-1);
    }
}

int main(int argc, char *argv[])
{
    int a[]={20,16,200,3,11,17,8};
    int size = sizeof(a)/sizeof(int);
    HeapSort(a,size);
    for(int i=0;i< size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}