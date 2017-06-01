#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums,int left,int right);
void mergeSort(vector<int>& nums,int left,int mid,int right);
int main(){
	vector<int> a = {5,6,8,1,2,4,998,56};
	int length = a.size();
	merge(a,0,length-1);

	for(int i =0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
void merge(vector<int>& nums,int left,int right){
	if(left < right){
		int mid = (left + right)/2;
		merge(nums,left,mid);
		merge(nums,mid+1,right);
		mergeSort(nums,left,mid,right);
	}
}
void mergeSort(vector<int>& nums,int left,int mid,int right){
	vector<int> newnums;
	int i = left;
	int j = mid+1;
	while(i <= mid && j <= right){
		if(nums[i] < nums[j]){
			newnums.push_back(nums[i]);
			i++;
		}else{
			newnums.push_back(nums[j]);
			j++;
		}
	}
	while(i<=mid)
		newnums.push_back(nums[i++]);
	while(j<=right)
		newnums.push_back(nums[j++]);
	for(int k = 0; k < right-left+1;k++){
		nums[left + k] = newnums[k];
	}
}