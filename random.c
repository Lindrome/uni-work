#include <stdio.h>
#include <time.h>

int random(int limit){
	return rand() %limit;
}

int main(){
	srand(time(NULL));
	int i,n;
	n = random(10);
	for (i=0;i<10;i++){
		n = rand() % 10;
		if (n%2=0) printf("%i\n",n);
	}
}
