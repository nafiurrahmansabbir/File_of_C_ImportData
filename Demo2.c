#include<stdio.h>
#include<string.h>
int main(){
    FILE *file;
    char name[20]="Nafiur Rahman S dsfd";
    int lenght=strlen(name);
    int i;
    
    file=fopen("test.txt","a");
    if(file==NULL){
        printf("File Doesn't exit\n");
    }else{
        printf("File is created\n");
        for(i=0;i<lenght;i++){
            fputc(name[i],file);
        }
        fputs("\n",file); //  \n
        fclose(file);
    }

    return 0;
} 