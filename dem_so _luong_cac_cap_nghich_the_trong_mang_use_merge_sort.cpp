#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;


//đếm số lượng các cặp nghịch thế trong mảng i < j mà a[i] > a[j];
//=> sử dụng thuật toán MERGE_SORT

int merge(int a[], int l, int m, int r){
	vector <int> subArrOne(a+l, a + m + 1); // vector <int> v[v,begin(), v.end())
	vector <int> subArrTwo(a+m+1, a+r+1);
	int i = 0, j = 0;
	int cnt = 0;
	while (i < subArrOne.size() && j < subArrTwo.size()){
		if (subArrOne[i] <= subArrTwo[j]){
			a[l] = subArrOne[i]; ++l; ++i;
		} 
		else{
			cnt+= subArrOne.size() - i;
			a[l] = subArrTwo[j]; ++l; ++j;
		} 	
	}
	while (i < subArrOne.size()){
		a[l] =subArrOne[i]; ++l; ++i;
	} 
	while (j < subArrTwo.size()){
		a[l] =subArrTwo[j]; ++l; ++j;
	}
	return cnt;
}

int mergeSort(int a[], int l, int r){
	int dem = 0;
	if (l < r){
		int m  = (l + r) / 2;
		dem += mergeSort(a, l, m);
		dem += mergeSort(a, m + 1, r);
		dem += merge(a, l, m, r);
	}
	return dem;
}

int main(){
	int n; cin >> n; 
	int a[n];
	for (int & x : a) cin >> x;
	cout << mergeSort(a, 0, n - 1) << endl;

	return 0;
}
