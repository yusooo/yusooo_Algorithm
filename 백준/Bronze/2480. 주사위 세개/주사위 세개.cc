#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c) printf("%d", 10000+a*1000);
	else if (a==b) printf("%d", 1000+a*100);
	else if (b==c || a==c) printf("%d", 1000+c*100);
	else{
		if(a>b && a>c) printf("%d", 100*a);
		else if(b>a && b>c) printf("%d", 100*b);
		else if(a<c && b<c) printf("%d", 100*c);
	}
}