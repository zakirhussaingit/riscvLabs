#include<stdio.h>

int main() {
	int i, sum=0, n=5;
	for(i=1;i<=n;++i){
		sum +=i;
	}
	printf("sum of numbers from 1 to %d\n",n,sum);
	return
}

gcc sum1ton.c
./a.out