#include <bits/stdc++.h>
using namespace std;

int main() {
	int test, n, index1=0,index2=0;
	int ar[100], b[100];
	cin >> test;
	while(test--)
	{
	    cin >> n;
	    ar[n];
	    for(int i=0; i<n; i++){ cin >> ar[i]; b[i]=ar[i];}
	    sort(b, b+n);
	    for(int i = 0; i < n; i++)
	    {
	        if(b[0] == ar[i])
	            index1 = i;
	        if(b[n-1] == ar[i])
	            index2 = i;
	    }
	    if(index1<=index2)
	        cout << b[0] << " " << b[n-1] << endl;
	    else
	        cout << b[n-1] << " " << b[0] << endl;
	}
	return 0;
}