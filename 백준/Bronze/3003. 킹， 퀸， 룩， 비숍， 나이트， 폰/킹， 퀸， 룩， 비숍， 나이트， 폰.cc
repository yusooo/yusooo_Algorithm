#include<stdio.h>
int main(){
	int king, queen, rook, bishop, knight, phone;
	scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &phone);
	printf("%d %d %d %d %d %d", 1-king, 1-queen, 2-rook, 2-bishop, 2-knight, 8-phone);
}