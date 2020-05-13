#include <stdio.h>

int main() {
    char StudentName [100];
    float ExamValue, Sum, Avg;
    int students, exams;
    for (students = 0; students < 5; students++) {
        Sum = 0.0;
        printf("Enter Student Name \n");
        scanf("%s",StudentName);
        for (int exams = 0; exams < 3; exams++) {
            printf("Enter exam grade: \n");
            scanf("%f",& ExamValue);
            Sum = Sum+ExamValue;
        }
        Avg = Sum / 3.0;
        printf("Average for %s is %f\n", StudentName,Avg);
    }
    return 0;
}