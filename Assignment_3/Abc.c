#include<stdio.h> 

#define TOTAL_STUDENTS  3
#define TOTAL_SUBJECTS  3

// Computing average for marks grading
float calculate_average(int marks[TOTAL_SUBJECTS]) {
    int total_marks = 0;

    for (int subject = 0; subject < TOTAL_SUBJECTS; subject++) {
        total_marks += marks[subject];
    }

    return total_marks / (float)TOTAL_SUBJECTS;
}
// Printing grade based on average
void get_grade(float average, char name[10]) {
    if (average >= 80) {
            printf("%s - Grade A | Average marks = %.2f\n", name, average);
    }
    else if (average >= 60) {
            printf("%s - Grade B | Average marks = %.2f\n", name, average);
    }
    else if (average >= 40) {
            printf("%s - Grade C | Average marks = %.2f\n", name, average);
    }
    else { 
            printf("%s - Failed | Average marks = %.2f\n", name, average);
    }
}
// Returning the index of the topper
int find_topper(int marks[TOTAL_STUDENTS][TOTAL_SUBJECTS]) {
    int max_marks = 0, topper = 0;
    for (int student = 0; student < TOTAL_STUDENTS; student++) {
        int total_marks = 0;

        for (int subject = 0; subject < TOTAL_SUBJECTS; subject++) {
            total_marks += marks[student][subject];
        }

        if (total_marks > max_marks) {
            max_marks = total_marks;
            topper = student;
        }
    }

    return topper;
}

int main() { 
    int marks[TOTAL_STUDENTS][TOTAL_SUBJECTS] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[TOTAL_STUDENTS][10] = {"Ali", "Bob", "Cat"};
    int student, subject;

    //Print each student's grade
    for (student = 0; student < TOTAL_STUDENTS; student++) {
        float average = calculate_average(marks[student]);
        get_grade(average, names[student]);
    }

    int topper = find_topper(marks);
    int topper_marks = 0;
    //Calculating toppers total marks
    for(int subject = 0; subject < TOTAL_SUBJECTS; subject++) {
        topper_marks += marks[topper][subject];
    }
    
    printf("Topper: %s \nwith total marks: %d\n", names[topper], topper_marks);
        
    return 0;
} 
