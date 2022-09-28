#include<stdio.h>
int main(){
	int a, arr[100000], brr[10000];
	scanf("%d", &a);
	for(int i=0;i<a;i++) scanf("%d %d", &arr[i], &brr[i]);
	for(int i=0;i<a;i++) printf("%d\n", arr[i]+brr[i]);
}