#include <stdio.h>

int main() {
    int students, i = 1;
    int attendance, present = 0, absent = 0;
    float percentage;

    printf("STUDENT ATTENDANCE MONITORING\n");
    printf("Enter number of students: ");
    scanf("%d", &students);

    while (students <= 0) {
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &students);
    }
    while (i <= students) {
        printf("\nStudent %d\n", i);
        printf("Enter attendance (1 = Present, 0 = Absent): ");
        scanf("%d", &attendance);

        while (attendance != 1 && attendance != 0) {
            printf("Invalid input! Enter 1 or 0: ");
            scanf("%d", &attendance);
        }
        if (attendance == 1) {
            printf("Status: Present\n");
            present++;
        } else {
            printf("Status: Absent\n");
            absent++;
        }
        i++;
    }
    percentage = ((float)present / students) * 100;

    printf("\nATTENDANCE SUMMARY\n");
    printf("Total Students: %d\n", students);
    printf("Present Students: %d\n", present);
    printf("Absent Students: %d\n", absent);
    printf("Attendance Percentage: %d\n", percentage);
   
    return 0;
} 