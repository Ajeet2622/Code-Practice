#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Ajeeet.txt","r");

    char ch;
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);

     fclose(fptr);

    // fscanf() use for file to out the data , for int and float
    FILE *fptr1 = fopen("Aje.txt" ,"r");
    int num;
    fscanf(fptr1 ,"%d" ,&num);
    printf("\n%d\n" ,num);
    float fnum;
    fscanf(fptr1 ,"%f" , &fnum);
    printf("%f\n" ,fnum);

     fclose(fptr1);
    //fprintf() is use put the data into the files
    
    // FILE *fptr2 = fopen("Aje.txt" ,"w");
    // num =9090;
    // fprintf(fptr2 , "%d" , num );
    // num =9091;
    // fprintf(fptr2 , " %d" , num );
    // num =9092;
    // fprintf(fptr2 , " %d" , num );
    // num =9093;
    // fprintf(fptr2 , " %d" , num );
    // num =9094;
    // fprintf(fptr2 , " %d" , num );


    //inbult functions for file
    FILE *fptr3 = fopen("Ajeeet.txt","r");
    //fgetc(fptr3);
    printf("%c",fgetc(fptr3));
    //fclose(fptr3);
    //printf("%c",fgetc(fptr3));
    FILE *fptr4 = fopen("Ajeeet.txt","w");
    fputc('a' , fptr4);
    printf("%c",fgetc(fptr4));
    //
    

    // if (fptr == NULL) {
    //     perror("Error opening file");
    //     return 1;
    // }

    //fclose(fptr);
    return 0;
}