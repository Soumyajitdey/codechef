#include <iostream>
using namespace std;

int main() {
	int T, num;
	scanf("%d", &T);
	while(T--)
	{
	    int res=0;
	    scanf("%d", &num);
	    while(num/5 != 0)
	    {
	        res += num/5;
	        num = num/5;
	    }
	    printf("%d\n", res);
	}
	return 0;
}
