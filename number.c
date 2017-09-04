#include <stdio.h>
 
int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if(a>0)
		printf("Positive");
	else if(a==0)
		printf("Zero");
	else
		printf("Negative");
	return 0;
}
