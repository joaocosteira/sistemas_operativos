#include<stdio.h> 
#include <fcntl.h> 
#include<errno.h> 
extern int errno; 



int main() 
{ 
    int fd1 = open("foo.txt", O_RDONLY);    //abrir o ficheiro
    if (fd1 < 0)  
    { 
        perror("c1"); //caso haja um erro
        exit(1); 
    } 
    printf("opened the fd = % d\n", fd1); 
      
    // Using close system Call 
    if (close(fd1) < 0)  
    { 
        perror("c1"); 
        exit(1); 
    }  
    printf("closed the fd.\n"); 
} 