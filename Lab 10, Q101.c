#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float totalMarks;
};

int main() {
    FILE *file = fopen("LNMIITSTUDENT.DAT", "a");
    if (!file) { printf("Error opening file!\n"); return 1; }

    int n;
    printf("Enter number of students to add: ");
    scanf("%d", &n);
    getchar(); 

    struct Student student;
    for (int i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &student.rollNumber);
        getchar();
        printf("Enter name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0';  /
        printf("Enter total marks: ");
        scanf("%f", &student.totalMarks);

        fprintf(file, "Roll Number: %d\nName: %s\nTotal Marks: %.2f\n\n", 
                student.rollNumber, student.name, student.totalMarks);
    }

    fclose(file);
    return 0;
}
