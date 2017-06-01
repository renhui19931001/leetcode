#include <iostream>
#include <vector>
using namespace std;
void fastsort(int*,int,int);
int main(){
	int a[] = {5,6,8,1,2,4,90};
	int length = sizeof(a)/sizeof(int);
	fastsort(a,0,length-1);
	for(int i =0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
void fastsort(int*a,int left,int right){
	if(left < right){
		int i = left;
		int j = right;
		//keyi gaijin
		int x = a[i];
		while(i < j){
			while(a[j] > x && i <j)
				j--;
			if(i < j)
				a[i++] = a[j]; 
			while(a[i] < x && i <j)
				i++;
			if(i < j)
				a[j--] = a[i];
		}
		a[i] = x;
		fastsort(a,left,i-1);
		fastsort(a,i+1,right);
	}
}
