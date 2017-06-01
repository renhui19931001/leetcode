#include <iostream>
#include <vector>
using namespace std;
void maopao(int*,int);
int main(){
	int a[] = {5,6,8,1,2,4,90};
	int length = sizeof(a)/sizeof(int);
	maopao(a,length);
	for(int i =0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}

void maopao(int *a,int n){
	for(int i =0; i < n;i++)
		for(int j = i+1; j < n;j++)
			if(a[j] < a[i])
				swap(a[i],a[j]);
}