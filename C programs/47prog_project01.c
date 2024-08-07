#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function declarations
void selStuOrGstu();
int studentArray();
void selStuOrGstu();
int init_choice();
void EnteryConfirm();

struct student_info {
    char name[30];
    int section;
    char studentID[30];
    int mobile;
};

// This function takes input of student data
void stu_data_input(int num) {
    struct student_info stu[num];
    for (int i = 0; i < num; i++) {
        printf("Enter %d student Name: ", i + 1);
        scanf("%s", stu[i].name);
        printf("Enter %d student section: ", i + 1);
        scanf("%d", &stu[i].section);
        printf("Enter %d Student ID: ", i + 1);
        scanf("%s", stu[i].studentID);
        printf("Enter %d Student Mobile Number: ", i + 1);
        scanf("%d", &stu[i].mobile);
    }
}

// Main function
int main() {
    init_choice();
    return 0;
}

// Number of students data to want to enter taking input from user
int studentArray() {
    //static int count = 1; // Static to preserve value across function calls
    printf("How many student data do you want to Enter: ");
    int num;
    scanf("%d", &num);
    if (num > 0) {
        stu_data_input(num);
        return 0;
    } else {
        //if (count = 1) {
            printf("Enter a valid Positive Number Input.\n");
            printf("Try again!\n\n");
            
            //studentArray();
       // }
    }
    return -1;
}

// Selecting that who is doing Entry i.e. student or group of students or organization
// but now it is not completed
void selStuOrGstu() {
    printf("I want to do Entry of some student [y/n]: ");
}

// Entry to user to want enter data or Not
int init_choice() {
    printf("Entering data Choice/Enter 1\n");
    printf("For Exit Choice/Enter 2\n");
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            EnteryConfirm();
            break;
        case 2:
            printf("Exited from Program\n");
            break;
        default:
            printf("\nError Occurred!\n\n");
            init_choice();
            break;
    }
    return 0;
}

// Code for two-step verification
void EnteryConfirm() {
    char ch;
    printf("Confirm it! Do you want to enter students [y/n]: ");
    scanf(" %c", &ch);  // Note the space before %c to skip any leading whitespace
    ch = tolower(ch);

    if (ch == 'y') {
        studentArray();
    } 
	else if (ch == 'n') {
        printf("You entered 'n' that means \"No\"\n");
        printf("Enter again and confirm it [y/n]: ");
        scanf(" %c", &ch);
        ch = tolower(ch);

        if (ch == 'n') {
            printf("Exited from program\n");
            return;
        } else if (ch == 'y') {
            studentArray();
        }
    }
}
