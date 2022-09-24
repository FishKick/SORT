#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;



int main(){
	int count[10000001];
	int n; cin >> n;
	int a[n];
	int m = INT_MIN;
	for (int i= 0; i < n; i++){
		cin >> a[i];
		count[a[i]]++;
		m = max(m, a[i]);
		
		
	}

	return 0;
}
