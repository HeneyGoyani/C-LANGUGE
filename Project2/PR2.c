#include <stdio.h>

main() 
{
    int marks;
    char grade;

    printf("Enter your marks (out of 100): ");
    scanf("%d",&marks);

    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' : 'F';

    printf("Your grade is %c.", grade);

    switch(grade) {
        case 'A':
            printf(" Outstanding Performance..\n");
            break;
        case 'B':
            printf(" Excellent Work..\n");
            break;
        case 'C':
            printf(" Good work, can do better..\n");
            break;
        case 'D':
            printf(" Have to work hard more..\n");
            break;
        case 'F':
            printf(" Sorry, you failed.\n");
            break;
        default:
            printf(" Invalid grade.\n");
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') 
	{
        printf("Congratulations! You are eligible for the next Grade!!.\n");
    } else {
        printf("sorry! You are not eligible for the next grade.\n");
    }

}