////////////////////////////////////////////////////////////////////////
//
//  Program     : Write a program which accepts fine name from user 
//                and open that file.
//  Author      : Abhijeet Kalathil
//  Created     : 28/07/2023   
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    int fd = 0;

    if(argc != 2)
    {
        printf("Invalid number of argument\n");
        return -1;
    }
    
    fd = open(argv[1],O_RDONLY);
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