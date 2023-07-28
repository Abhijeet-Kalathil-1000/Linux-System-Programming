///////////////////////////////////////////////////////////////////////
//
//  Program     : Write a program which accepts 2 file name 
//                and copies existing contents from first to second
//  Author      : Abhijeet Kalathil
//  Created     : 28/07/2023   
//
///////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/dir.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Invalid no of arguments\n");
    }

    DIR *dp = NULL;
    struct dirent *entry = NULL;

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open the directory\n");
        return -1;
    }

    while( entry = readdir(dp) != NULL )
    {
        if(strcmp(argv[2], entry->d_name) == 0)
        {
            printf("File is present in directory\n");
            break;
        }
    }

    if(entry == NULL)
    {
        printf("There is no suxh file\n");
        return -1;
    }

    closedir(dp);
    return 0;
}