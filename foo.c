// C program to illustrate 
// open system call 

/*
        No meu dá erro, pois o sistema operativo diz que não tem 
        permissões, não vou correr isto com sudo
*/
#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 
extern int errno; 
int main() 
{      
    // if file does not have in directory  
    // then file foo.txt is created. 
    int fd = open("foo.txt", O_RDONLY | O_CREAT);  //file descriptor e criar o ficheiro
      
    printf("fd = %d\n", fd);   //se não coseguir criar o ficheiro
      
    if (fd ==-1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);  
          
        // print program detail "Success or failure" 
        perror("Program");                  
    } 
    return 0; 
} 