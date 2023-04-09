#include <stdio.h>

void printHeader();
void printFooter();
void printGradeSheet(char name[], int roll, int marks);

int main() {
    char name[50];
    int roll, marks;

    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter student's roll number: ");
    scanf("%d", &roll);
    printf("Enter student's marks (out of 100): ");
    scanf("%d", &marks);

    printHeader();
    printGradeSheet(name, roll, marks);
    printFooter();

    return 0;
}

void printHeader() {
    printf("--------------------------------------------------------\n");
    printf("|                    Grade Sheet                       |\n");
    printf("--------------------------------------------------------\n");
}

void printFooter() {
    printf("--------------------------------------------------------\n");
}

void printGradeSheet(char name[], int roll, int marks) {
    printf("Student's Name: %s", name);
    printf("Roll Number: %d\n", roll);
    printf("Marks Obtained: %d/100\n", marks);

    if (marks >= 90) {
        printf("Grade: A+\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B+\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C+\n");
    } else if (marks >= 40) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }
}

