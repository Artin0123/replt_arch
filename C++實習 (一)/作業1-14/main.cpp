#include <iostream>
#define N 10
using namespace std;
int main() {
	int a[N][N]={};
	int n;
	cin >> n;
	int x,y,m=1,i,j,k=n-1;
	a[x = 0][y = n-1]=m;
	for(i=0;i<n/2;i++){
		for(j=0;j<k;j++) a[x++][y] = m++;
		for(j=0;j<k;j++) a[x][y--] = m++;
		for(j=0;j<k;j++) a[x--][y] = m++;
		for(j=0;j<k;j++) a[x][y++] = m++;
		x++;y--;k-=2;
	}
	if(n%2 == 1) a[n/2][n/2] = m;
	for(i=0;i < n;i++){
		for(j=0;j < n;j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
} 