#include <iostream>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
	    int n, a, b, ar[8]={0}, total=0;
	    cin >> n;
	    while(n--){
	        cin >> a >> b;
	        if(a==1 && b > ar[0] ){ar[0]=b;}
	        else if(a==2 &&  b>ar[1]){ar[1]=b;}
	        else if(a==3 && b>ar[2]){ar[2]=b;}
	        else if(a==4 && b>ar[3]){ar[3]=b;}
	        else if(a==5 && b>ar[4]){ar[4]=b;}
	        else if(a==6 && b>ar[5]){ar[5]=b;}
	        else if(a==7 && b>ar[6]){ar[6]=b;}
	        else if(a==8 && b>ar[7]){ar[7]=b;}
	    }
	    for(int i=0; i<8; i++){
	        //cout << ar[i] << endl;
	        total+=ar[i];
	    }
	    cout << total << endl;
	}

}
