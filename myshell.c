#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void){
    char buffer[50]; //Store command line
    char *space_buf[5]; // for "cd" command
    char pwd[512];
    printf("\n----------------------------------------------------------------\n");
    printf(" Term project that is making Myshell\n");
    printf(" Major : Transprotation & Logistics Engineering\n");
    printf(" ID : 2015035987\n");
    printf(" Name : Kim Jae Young\n");
    printf(" Please input command 'cmdlist' if you want to know function in shell.");
    printf("\n----------------------------------------------------------------\n");
   
    while(1){
    getcwd(pwd,512);
    printf("%s$ ",pwd);
    fflush(stdout);
    fgets(buffer,51,stdin); //buffer have "command line\n\0"  
    strtok(buffer, "\n"); // buffer have only command line
    space_buf[0] = strtok(buffer, " ");
    space_buf[1] = strtok(NULL, "\n"); //buffer = cd dir, this is dir

    if(strcmp(buffer, "exit") == 0){
	    printf("Quit this shell\n");
	    exit(0);
    }

    if(strcmp(buffer, "hello") == 0){
    	printf("hello world\n");
    }

    if(strcmp(buffer, "cd") == 0){
    	chdir(getenv("HOME"));//go to home
    }
    if(strcmp(space_buf[0], "cd") == 0){
    	chdir(space_buf[1]); // go to input directory
    }
    
    if(strcmp(buffer, "ls") == 0){
	
    }
    
    if(strcmp(buffer, "pwd") == 0){
    char path[512];
    getcwd(path, 512); 
    printf("%s\n",path);
    }
    

    if(strcmp(buffer, "cmdlist") == 0){
    printf("1. cmdlist\n"); //complete
    printf("2. cd\n"); //complete
    printf("3. exit\n"); //complete
    printf("4. hello\n"); //complete
    printf("5. ls\n");
    printf("6. ls -al\n");
    printf("7. cat\n");
    printf("8. mkdir\n");
    printf("9. pwd\n"); //complete
    }
  }
}
