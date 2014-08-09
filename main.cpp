#include <iostream>

using namespace std;

void distcount(int a[], int l, int r, int N, int M){
	int i,j, cnt[M], b[N];
	for(j=0; j<M; j++) cnt[j]=0;
	for(i=l; i<=r; i++) cnt[a[i]+1]++;
	for(j=1; j<M; j++) cnt[j] += cnt[j-1];
	for(i=l; i<=r; i++) b[cnt[a[i]]++] = a[i];
	for(i=l; i<=r; i++) a[i] = b[i-l];
}

int main() {
	int a[15]{0,3,3,0,1,1,0,3,0,2,0,1,1,2,0};
	distcount(a, 0, 14, 15, 4);

	for(int i=0; i<15; i++){
		cout<<a[i];
	}

	return 0;
}