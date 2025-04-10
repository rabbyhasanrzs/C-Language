
/* 
    - Open a File in read mood named (test2.txt).
    - Read The files data (In 3 methods).
    - Print the data on terminal.
    - Also used EOF concept.
    - Closeing file.
*/
// -------->


#include<stdio.h>
int main(){
    FILE *rFile;
    rFile=fopen("test2.txt","r");

    // ### Method :1
        // char ch;
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fclose(rFile);

    // ### Method :2
    // rFile=fopen("test2.txt","r");
        //    printf("%c",fgetc(rFile));
        //    printf("%c",fgetc(rFile));
        //    printf("%c",fgetc(rFile));


    // ### Method :3 using EOF
        rFile=fopen("test2.txt","r");
        char ch ;
        ch=fgetc(rFile);
        while (ch != EOF)
        {
            printf("%c",ch);
            ch=fgetc(rFile);
        }
        fclose(rFile);
    return 0;
}