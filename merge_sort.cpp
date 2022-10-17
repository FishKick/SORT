#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;


//hieu ve thuat toan MERGE_sort


//step 1: start
//
//step 2: declare array and left, right, mid variable
//
//step 3: perform merge function.
//    if left > right
//        return
//    mid= (left+right)/2
//    mergesort(array, left, mid)
//    mergesort(array, mid+1, right)
//    merge(array, left, mid, right)
//
//step 4: Stop


void merge(int a[], int l, int m, int r){
	vector <int> subArrOne(a+l, a + m + 1); // vector <int> v[v,begin(), v.end())
	vector <int> subArrTwo(a+m+1, a+r+1);
	int i = 0, j = 0;
	while (i < subArrOne.size() && j < subArrTwo.size()){
		if (subArrOne[i] <= subArrTwo[j]){
			a[l] = subArrOne[i]; ++l; ++i;
		} 
		else{
			a[l] = subArrTwo[j]; ++l; ++j;
		} 	
	}
	while (i < subArrOne.size()){
		a[l] =subArrOne[i]; ++l; ++i;
	} 
	while (j < subArrTwo.size()){
		a[l] =subArrTwo[j]; ++l; ++j;
	}
}

void mergeSort(int a[], int l, int r){
	if (l >= r) return;
	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	merge(a, l, m, r);
}

int main(){
	int n; cin >> n; 
	int a[n];
	for (int & x : a) cin >> x;
	mergeSort(a, 0, n-1);
	for (int x : a) cout << x << " ";
	cout << endl;

	return 0;
}
