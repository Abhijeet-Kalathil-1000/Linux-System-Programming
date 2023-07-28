////////////////////////////////////////////////////////////////////////
//
//  Program     : Write a program which accepts fine name & mode 
//                from user and open that file in that mode.
//  Author      : Abhijeet Kalathil
//  Created     : 28/07/2023   
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    int fd = 0;

    if(argc != 2)
    {
        printf("Invalid arguments\n");
        return -1;
    }
    
    fd = open(argv[1],O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1;
    }
    else
    {
        printf("File is successfully opened  with fd %d \n ",fd);
    }

    return 0;
}