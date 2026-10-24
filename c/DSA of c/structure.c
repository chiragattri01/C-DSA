// #include<stdio.h>
// #include<string.h>
// struct student{
//     int roll_no;
//     char name[20];
//     float marks;
// };
// int  main(){
//     struct student s1;
//     s1.roll_no=54;
//     strcpy(s1.name,"chirag");
//     s1.marks=85.5;
//     printf("roll_no:%d",s1.roll_no);
//     printf("name:%s",s1.name);
//     printf("marks:%2f",s1.marks);

//     return 0;

// }
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct Student s1;

    s1.roll_no = 101;
    strcpy(s1.name, "Chirag");
    s1.marks = 85.5;

    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}