#include <iostream>
#include <vector>
using namespace std;
void insert(int*,int);
int main(){
	int a[] = {5,6,8,1,2,4,90};
	int length = sizeof(a)/sizeof(int);
	insert(a,length);
	for(int i =0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
void insert(int* a,int n){
	//from the end to top 
	for(int i =1;i < n;i++){
		int get = a[i];
		int j = i-1;
		while(j>=0 && a[j] > get){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = get;
	}
}