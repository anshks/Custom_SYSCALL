#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
#include<linux/kernel.h>
#include<errno.h>
long main() {
	printf("Enter PID\n");
	pid_t pid;
  	scanf("%d", &pid);
  	printf("Enter filename");
  	char *fname;
  	scanf("%s", fname);
  	long out = syscall(355, pid, fname);
  	if (out != 0) {
    		printf("Error\n");
   	}
   	perror("err");
   	printf("\nerrno: %d\n", errno);
   	return 0;	
}
