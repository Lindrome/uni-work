#include <stdio.h>
#include <time.h>

int random(int limit){
	return rand() %limit;
}

int main(){
	srand(time(NULL));
	int i,n;
	n = random(20);
	for (i=0;i<20;i++){
		n = rand() % 20;
		printf("%i\n",n);
	}
}
