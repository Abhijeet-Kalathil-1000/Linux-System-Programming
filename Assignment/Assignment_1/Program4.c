////////////////////////////////////////////////////////////////////////
//
//  Program     : Write a program which accepts fine name 
//                and print all infomration about the file.
//  Author      : Abhijeet Kalathil
//  Created     : 28/07/2023   
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int fd = 0, mode = 0;

    if(argc != 2)
    {
        printf("Invlaid nop of arguments\n");
        return -1;
    }

    return 0;
}