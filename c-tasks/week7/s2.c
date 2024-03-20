#include <stdio.h>
#include <stdlib.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 4

int main() {
    int studentGrades[NUM_STUDENTS][NUM_SUBJECTS];
    int studentID;
         printf("enter grades from 1 to 100:
                ");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        for (int j = 0; j < NUM_SUBJECTS; j++) {
           scanf("%d",&studentGrades[i][j]);
        }
    }


    printf("Enter student ID (1 to 10): ");
    scanf("%d", &studentID);


    if (studentID < 1 || studentID > NUM_STUDENTS) {
        printf("Wrong student ID!\n");
        return 1;
    }

    printf("Grades for Student %d:\n", studentID);
    printf("Programming: %d\n", studentGrades[studentID - 1][0]);
    printf("Data Structures: %d\n", studentGrades[studentID - 1][1]);
    printf("Discrete Math: %d\n", studentGrades[studentID - 1][2]);
    printf("Algorithms: %d\n", studentGrades[studentID - 1][3]);

    return 0;
}
