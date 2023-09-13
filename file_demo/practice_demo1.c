#include<stdio.h>
int main(){
    FILE *file;
    file=fopen("test.pdf","w");
    if(file==NULL){
        printf("File Doesn't exit\n");
    }else{
        printf("File is created\n");
        fclose(file);
    }
    return 0;
}