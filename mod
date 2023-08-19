#include<stdio.h>
const int M=100000007;

int main(){
	long long n;
	scanf("%lld",&n);
	long long t=1;
	long long ans=0;
	for (int i =1; i <=n; ++i)
	{
		t*=i;
		t%=M;
		ans+=(t*i)%M;
		ans=ans%M;
	}
	printf("%lld\n",ans);
}
