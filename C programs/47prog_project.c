#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <mysql.h>

void selStuOrGstu();

int studentArray();
int init_choice();
//void EnteryConfirm();
void EnteryConfirm(MYSQL *conn);
MYSQL* sqlConnection();
void stu_data_input(int num, MYSQL *conn);

struct student_info
{		
	char name[30];
	int section;
	char studentID[30];
	int mobile;
} stif;

/// This function takes input of student data and inserts into the database
void stu_data_input(int num, MYSQL *conn){
	struct student_info stu[num];
	for(int i=0;i<num;i++){
		printf("Enter %dst student Name : ",i+1);
		scanf("%s", stu[i].name);
		printf("Enter %dst student section : ",i+1);
		scanf("%d", &stu[i].section);
		printf("Enter %dst Student ID : ",i+1);
		scanf("%s", stu[i].studentID);
		printf("Enter %dst Student Mobile Number : ",i+1);
		scanf("%d", &stu[i].mobile);

		// Prepare the SQL insert query
		char query[256];
		sprintf("INSERT INTO students (Name, Section, stu_ID, Mobile_Num) VALUES ('%s', %d, '%s', %d)", stu[i].name, stu[i].section, stu[i].studentID, stu[i].mobile);

		// Execute the SQL insert query
		if (mysql_query(conn, query)) {
		    fprintf(stderr, "INSERT error: %s\n", mysql_error(conn));
		} else {
		    printf("Inserted student %d successfully!\n", i+1);
		}
	}
}

int main(){
	MYSQL *conn = sqlConnection();
	init_choice(conn);
	mysql_close(conn);
	return 0;
}

// Number of students data to want to enter taking input from user
int studentArray(MYSQL *conn){
	printf("How many student data do you want to Enter:  ");
	int num;
	static int count=0;
	scanf("%d", &num);
	if(num>0){
		stu_data_input(num, conn);
		return 0;
	}else{
		if(count<3){
			printf("Enter a valid Positive Number Input.");
			printf("\nTry again!\n\n");
			count++;
		    studentArray(conn);
		}
	}
	return -1;
}

// Selecting that whose is the doing Entry i.e student or group or student or organization ->but now it is not completed
void selStuOrGstu(){
	printf("I want to do Entry of some student [y/n]:");
}

// Entry to user to want enter data or Not
int init_choice(MYSQL *conn){
	printf("Entering data Choice/Enter 1\n");
	printf("For Exit Choice/Enter 2\n");
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	     EnteryConfirm(conn);
		 break;
	case 2 : 
	     printf("Exited from Program");
	     break;
	
	default:
	printf("\nError Occurred!\n\n");
	//init_choice();
		break;
	}
	return 0;
}

// Code for two step verification
void EnteryConfirm(MYSQL *conn) {
    char ch;
    printf("Confirm it! Do you want to enter students [y/n]: ");
    scanf(" %c", &ch);  // Note the space before %c to skip any leading whitespace
    ch = tolower(ch);

    if (ch == 'y') {
        studentArray(conn);
    } 
	else if (ch == 'n') {
		printf("Exit!");
    //     printf("You entered 'n' that means \"No\"\n");
    //    printf("Enter again and confirm it [y[Enter in Program]/n[exit]]: ");
	//    char chc;
    //     scanf("%c", &chc);
    //     chc = tolower(chc);

    //     if (chc == 'n') {
    //         printf("Exited from program\n");
    //         return;
    //     } else if (chc == 'y') {
    //         studentArray(conn);
    //     }
    }
}

// Function to connect to the MySQL database
MYSQL* sqlConnection() {
    MYSQL *conn = mysql_init(NULL);

    if (conn == NULL) {
        fprintf(stderr, "mysql_init() failed\n");
        exit(EXIT_FAILURE);
    }

    if (mysql_real_connect(conn, "127.0.0.1", "root", "", "university_info", 3307, NULL, 0) == NULL) {
        fprintf(stderr, "mysql_real_connect() failed\n");
        mysql_close(conn);
        exit(EXIT_FAILURE);
    }

    printf("Connected to MySQL database successfully!\n");
    return conn;
}
