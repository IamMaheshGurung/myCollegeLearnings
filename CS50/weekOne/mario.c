#include <stdio.h>

int main(){
printf("\n MARIO PYRAMID\n");

int height;

printf("Enter the height of Pyramid: ");
scanf("%d", &height);

for (int i =1 ; i<=height; i++){
/*	for(int j =0; j<i; j++){
	printf("$");
	}*/
	for (int m = 0; m<height-i; m++){
	printf(" ");
	}
for(int j =0; j<i ; j++){
	printf("#");
	}
	printf("\n");
	}
return 0;
}
