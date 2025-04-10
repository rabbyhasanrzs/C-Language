
/* 

    - Create a File name (test1.txt).
    - Open it in Write mood.
    - Writing Something(In 3 methods).
    - Closeing file.

    - Open it in Append mood.
    - Closeing file.



*/
// -------->

/*
     
    #include<stdio.h>
    int main(){
    FILE *cFile;
    cFile=fopen("test1.txt","w");
    //Writing Something

    // ### Method:1 
    // char ch='R';
    // fprintf(cFile,"%c",ch);

    // ### Method:2 
    fprintf(cFile,"%c",'O');
    fprintf(cFile,"%c",'v');
    fprintf(cFile,"%c",'i');
    fprintf(cFile,"%c",' ');
    fprintf(cFile,"%c",'H');
    fprintf(cFile,"%c",'a');
    fprintf(cFile,"%c",'s');
    fprintf(cFile,"%c",'a');
    fprintf(cFile,"%c",'n');
    fclose(cFile);

    cFile=fopen("reaateFile.txt","a");

    // fprintf(cFile,"%c",' ');
    // fprintf(cFile,"%c",'+');
    // fprintf(cFile,"%c",' ');
    // fprintf(cFile,"%c",'R');
    // fprintf(cFile,"%c",'a');
    // fprintf(cFile,"%c",'b');
    // fprintf(cFile,"%c",'b');
    // fprintf(cFile,"%c",'y');
    // fprintf(cFile,"%c",' ');
    // fprintf(cFile,"%c",'H');
    // fprintf(cFile,"%c",'a');
    // fprintf(cFile,"%c",'s');
    // fprintf(cFile,"%c",'a');
    // fprintf(cFile,"%c",'n');

    // ### Method:3 

    fputc('+',cFile);
    fputc(' ',cFile);
    fputc('R',cFile);
    fputc('a',cFile);
    fputc('b',cFile);
    fputc('b',cFile);
    fputc('y',cFile);
    fputc(' ',cFile);
    fputc('H',cFile);
    fputc('a',cFile);
    fputc('s',cFile);
    fputc('a',cFile);
    fputc('n',cFile);

    fclose(cFile);
    return 0;
}

*/
