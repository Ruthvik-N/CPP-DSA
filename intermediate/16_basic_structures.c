# include <stdio.h>
# include <string.h>

struct studentinfo{
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
     struct studentinfo s1;
     strcpy(s1.name,"ruthvik");
     s1.roll_no = 123;
     s1.cgpa = 9.2;
    
     printf("Student's name is: %s\n" , s1.name);
     printf("Student's roll.no is: %d\n" , s1.roll_no);
     printf("Student's cgpa is: %.1f\n" , s1.cgpa);
     
     struct studentinfo s2;
     strcpy(s2.name,"tony");
     s2.roll_no = 124;
     s2.cgpa = 9.1;
     printf("Student's name is: %s\n" , s2.name);
     printf("Student's roll.no is: %d\n" , s2.roll_no);
     printf("Student's cgpa is: %.2f\n" , s2.cgpa);

     struct studentinfo s3;
     strcpy(s3.name,"thor");
     s3.roll_no = 125;
     s3.cgpa = 9.23;
     printf("Student's name is: %s\n" , s3.name);
     printf("Student's roll.no is: %d\n", s3.roll_no);
     printf("Student's cgpa is: %.1f\n" , s3.cgpa);
return 0;
}