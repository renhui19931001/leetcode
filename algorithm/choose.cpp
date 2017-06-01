#include <iostream>
#include <vector>
using namespace std;
void choose(int*,int);
int main(){
	int a[] = {5,6,8,1,2,4,90};
	int length = sizeof(a)/sizeof(int);
	choose(a,length);
	for(int i =0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
void choose(int* a,int n){
	for(int i =0;i < n;i++){
		int min = i;
		for(int j = i;j <n;j++){
			if(a[min] > a[j])
				min = j;
		}
		swap(a[i],a[min]);
	}
}