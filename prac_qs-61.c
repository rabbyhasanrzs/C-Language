


////***----------------->

// // make a program to read 5 integers from a file.
// #include<stdio.h>
// int main(){
//     FILE *fptr2;
//     fptr2=fopen("prac","r");
//     int num;
//     // fscanf(fptr2,"%d\n",&num);
//     // printf("%d\n",num);
//     // fscanf(fptr2,"%d\n",&num);
//     // printf("%d\n",num);
//     // fscanf(fptr2,"%d\n",&num);
//     // printf("%d\n",num);
//     // fscanf(fptr2,"%d\n",&num);
//     // printf("%d\n",num);
//     // fscanf(fptr2,"%d\n",&num);
//     // printf("%d\n",num);
//     return 0;
// }




////***----------------->

// Make a program to input student information from a user & enter it to a file.
 
// #include<stdio.h>
// int main(){
//     FILE *fptr2;
//     fptr2=fopen("prac2","w");
//     int stuData;

//     printf("How Many Stu data you can stored : ");
//     scanf("%d",&stuData);
//     for (int i = 0,k=1; i <stuData,k<=stuData; i++,k++)
//     {
//         char name[100];
//         int age;
//         float cgpa;
        
//         printf("%d) Enter Your Name : ",k);
//         scanf("%s",name);
//         printf("   Enter Your Age : ");
//         scanf("%d",&age);
//         printf("   Enter Your CGPA : ");
//         scanf("%f",&cgpa);

//         fprintf(fptr2,"%d)",k);fprintf(fptr2," Student Name : %s\t\n",name);
//         fprintf(fptr2,"   Student age : %d\t\n",age);
//         fprintf(fptr2,"   Student CGPA : %f\t\n\n",cgpa);
//         printf("\n");

//     }
    
//     fclose(fptr2);

//     return 0;
// }



////***----------------->

// Write a Program to write all the Odd numbers from 1 to n in a file.
// #include<stdio.h>
// int main(){
//     FILE *fptr3;
//     fptr3=fopen("prac3","w");
    
//     int num;
//     printf("Enter Your NUm Here : ");
//     scanf("%d",&num);

//     for (int i = 1; i <=num; i++)
//     {
//         if (i%2 !=0)
//         {
//             fprintf(fptr3,"%d\t",i);
//         }
        
//     }
    
//     fclose(fptr3);
//     return 0;
// }




////***----------------->

// 2 numbers - a & b,are written in a file .write a parogram to replace them with their sum.

// #include<stdio.h>
// int main(){
//     FILE *fptr4;
//     fptr4=fopen("prac4.txt","r");
//     int a,b;
//     fscanf(fptr4,"%d",&a);
//     fscanf(fptr4,"%d",&b);

//     fptr4=fopen("prac4.txt","w");
//     fprintf(fptr4,"%d",a+b);

    
//     fclose(fptr4);
//     return 0;
// }




////***-----------------> ////***-----------------> ////***-----------------> ////***----------------->
/*

                               Home Work Set:
        --------------------------------------------------
1) Write a program to read a string from a file & input to user.
2) Replace the data in file of Q(a) with the num of vowels in
   string
3) Format the information of 5 students (name,marks,cgpa,course) in a table like structure in a file

*/
