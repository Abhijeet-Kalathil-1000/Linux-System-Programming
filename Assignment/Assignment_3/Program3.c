///////////////////////////////////////////////////////////////////////
//
//  Program     : Write a program which accepts directory name & file name 
//                and remove all files from one to second
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
    
    DIR *dp = NULL;
    struct dirent *entry = NULL;

    char oldname[50], newname[50];

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }

    while((entry = readdir(dp)) != NULL)
    {
        sprintf(oldname,"%s/%s",argv[1],entry->d_name);
        sprintf(newname,"%s/%s",argv[2],entry->d_name);

        rename(oldname,newname);
    }
    
    closedir(dp);
    return 0;
}