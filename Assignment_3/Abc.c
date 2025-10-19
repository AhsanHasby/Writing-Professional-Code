#include<stdio.h> 

int main() { 
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int student_index, subject_index, total_marks;
    float average; 

    for (student_index = 0; student_index < 3; student_index++) {
        total_marks = 0;

        for (subject_index = 0; subject_index < 3; subject_index++) {
            total_marks += marks[student_index][subject_index];
        }
        average = total_marks/3.0;

        if (average >= 80) {
            printf("%s - Grade A | Average marks = %.2f\n", names[student_index], average);
        }
        else if (average >= 60) {
            printf("%s - Grade B | Average marks = %.2f\n", names[student_index], average);
        }
        else if (average >= 40) {
            printf("%s - Grade C | Average marks = %.2f\n", names[student_index], average);
        }
        else { 
            printf("%s - Failed | Average marks = %.2f\n", names[student_index], average);
        }
    }

    int max_marks = 0, topper_index = 0;
    for (student_index = 0; student_index < 3; student_index++) {
        total_marks = 0;

        for (subject_index = 0; subject_index < 3; subject_index++) {
            total_marks += marks[student_index][subject_index];
        }

        if (total_marks > max_marks) {
            max_marks = total_marks;
            topper_index = student_index;
        }
    }

    printf("Topper: %s \nwith total marks: %d\n", names[topper_index], max_marks);
        
    return 0;
} 
