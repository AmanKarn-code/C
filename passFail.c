#include <stdio.h>

// void sum()
// {
//     int a, b, c;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);
//     printf("Enter the value of b"); // Missing semicolon here
//     scanf("%d", &b);
//     c = a + b;
//     printf("%d", c);
// }



void isPass(int sub1,int sub2,int sub3,int tMarks){
    // int sub1,sub2,sub3,tMarks;

      if (tMarks == 0) {
        printf("Invalid total marks (division by zero)\n");
        return;
    }

    float totalMarksObtained=sub1+sub2+sub3;
    float total=(totalMarksObtained*100)/(tMarks*3);
    if(total>=40 && ((sub1*100)/tMarks)>=33 && ((sub2*100)/tMarks)>=33 && ((sub3*100)/tMarks)>=33){
        printf("pass %.2f%%",total);
    }
    else{
        printf("fail %.2f%%",total);
    }
}

int main()
{
    int a,b,c,t;
    printf("The marks in subject 1 \n");
    scanf("%d",&a);
    printf("The marks in subject 2 \n");
    scanf("%d",&b);
    printf("The marks in subject 3 \n");
    scanf("%d",&c);
    printf("Total marks in each subject \n");
    scanf("%d",&t);
    // sum();
    isPass(a,b,c,t);
    return 0;
}
