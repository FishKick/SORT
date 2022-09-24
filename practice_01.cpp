#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;



void sellection_Sort(int a[], int n){
	for (int i = 0; i < n - 1 ; i++){
		
		int min_pos = i; 
		
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[i]){
				min_pos = j;
			}
		}
		
		swap(a[i], a[min_pos]);
	}
}

void bubble_Sort(int a[], int n){
	
	for (int i = 0; i < n-1;i++){
		for (int j = 0; j < n-1-i; j++){
			if (a[j] > a[j+1]) swap(a[j], a[j+1]);
		}
	}
	
}

void insertion_Sort(int a[], int n){
	
	for (int i = 0; i < n-1; i++){
		int x = a[i], pos = i-1;
		while (pos >= 0 && x < a[pos]){
			a[pos +1] = a[pos];
			pos--;
		}
		a[pos++] = x;
		
	}
	
}

int main(){
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
//	sellection_Sort(a, n);
	bubble_Sort(a, n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	
	

	return 0;
}
