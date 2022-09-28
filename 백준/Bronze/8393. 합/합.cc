#include<stdio.h>
int main(){
	int a, hap=0;
	scanf("%d", &a);
	for(int i=a;i>0;i--){
		hap+=i;
	}
	printf("%d", hap);
}