#include <stdio.h>
#include <string.h>

struct person {                // Defining new Data type person 
    char fatherName[100];
    char name[100];
    char gender[100];
    long long number;
};

int main() {
    long long n;
    struct person people[5];                              //Information of the students 
    strcpy(people[4].fatherName, "Mr. James");
    strcpy(people[4].gender, "Male");
    strcpy(people[4].name, "jona Jonas");
    people[4].number = 22350005;



    printf("Enter the Roll No. : ");                     // Asking For Roll No.
    scanf("%lld", &n);

    for (int i = 0; i < 5; i++)                // Use Of Linear Search 
    {
        if (people[i].number == n)
         {
            printf("Name: %s\nGender: %s\nFather's Name : %s", people[i].name, people[i].gender, people[i].fatherName);
            return 0;
        }
    }
    printf("User Not found\n");
    return 1;
}
