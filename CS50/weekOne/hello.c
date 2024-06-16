#include <stdio.h>

int main(){
printf("Happy to learn from scratch\n");

int i = 0;

while(i<4){
printf("learn until death");
i++;
}
printf("\n");

for (int j=0; j<5; j++)
{
printf("Happy Coding\n");
}
printf("\n");

int height;
printf("input Enter height\n");

scanf("%d", &height);

for(int i=0; i<=height; i++){
	for (int m=i; m<height; m++){
	printf(" ");
	}
	for (int j=1; j<=(i * 2 - 1); j++){
		printf("#");
		};
		printf("\n");
};

	int n;
        printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
                for (int k = 1; k <= i; k++) {
            printf("#");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

   return 0;
}

