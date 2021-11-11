#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){

  int pid, status;
  pid = fork();
  if(pid==0){
  int num = 8; // Child Process
   for(int i=1; i<=7; i++){
     printf("%d x %d = %d\n",num, i, num*i);
  }
 }
 else{ // Parent Process
   wait(&status);
   printf("In the parent Process :/nName is Rumaisa Aslam and CNIC is 30000-1234567-7\n");
 }

 return 0;
}