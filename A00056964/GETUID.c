#include <unistd.h>
#include <sys/types.h>
int main(){

if (getuid() != 0){
		printf("you is not a root!\n");
	} else {
		printf("you is a root!\n");
	}




}

