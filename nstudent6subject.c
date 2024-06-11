#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 6

struct Student {
    int id;
    char name[50];
    int age;
    int marks[NUM_SUBJECTS];
    float percentage;
};

float calculatePercentage(int marks[], int numSubjects) {
    int total = 0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }
    return (total / (float)(numSubjects * 100)) * 100;
}

int main() {
    struct Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
    
        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Marks in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        students[i].percentage = calculatePercentage(students[i].marks, NUM_SUBJECTS);
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    return 0;
}