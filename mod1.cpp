#include<stdio.h>
#include<math.h>

int main(){
	long long n,m=0;
	char ch;
	scanf("%lld",&n);
	while((ch=getchar())!=EOF){
		int d=ch-'0';
		if((d<10)&&(d>=0)){
			m=m*10+d;
			m=m%n;
		}
		else{
			continue;
		}
	}
	printf("%lld\n",m);
}
