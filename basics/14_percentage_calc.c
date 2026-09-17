# include <stdio.h>

float percentage(float science,float maths,float sanskrit );

int main() {
    float science,maths,sanskrit;
    printf("Enter your marks of science,maths and sanskrit");
    scanf("%f %f %f" , &science,&maths,&sanskrit);
    printf("your percentage is:%f\n", percentage(science,maths,sanskrit));
    return 0;
}

float percentage(float science,float maths,float sanskrit){
    return (science + maths + sanskrit)/3.0;
}
