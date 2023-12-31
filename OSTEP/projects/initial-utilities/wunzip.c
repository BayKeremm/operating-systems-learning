#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int unzipFunc(FILE * input){
    size_t n = 5;

    char * buffer = (char *) malloc(n * sizeof(char));
    if (buffer == NULL){
        printf("Unable to allocate buffer\n");
        return 1;
    }
    while (fread(buffer,5,1,input) > 0){
        char * ptr1 = buffer;
        char num = (int)*ptr1-'0'; // uses ascii table
        char * s = ptr1 + 1; 
        for(char i = 0; i < num; i++ ){
            printf("%c",*s);
        }
    }
    free(buffer);
    return 0;
}
int main(int argc, char * argv[]){
    if(argc < 2){
        perror("Please check the arguements\n");
        exit(1);
    }
    char * fileName = argv[1];
    FILE * file = fopen(fileName,"r");
    if(file == NULL){
        printf("wunzip: cannot open file\n");
        exit(1);
    }
    unzipFunc(file);
    fclose(file);
    return 0;
}