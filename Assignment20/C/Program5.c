// PS - Accept division of student from user and depends on division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7AM, B at 8:30AM, C at 9:20AM and D at 10:30AM.
// Application should be case sensitive

#include <stdio.h>

void CheckExamTime(char ch)
{
    if ((ch == 'A') || (ch == 'a'))
    {
        printf("Exam is at 7AM");
    }
    else if ((ch == 'B') || (ch == 'b'))
    {
        printf("Exam is at 8:30AM");
    }
    else if ((ch == 'C') || (ch == 'c'))
    {
        printf("Exam is at 9:20AM");
    }
    else if ((ch == 'D') || (ch == 'd'))
    {
        printf("Exam is at 10:30AM");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char ch = '\0';

    printf("Enter division \n");
    scanf("%c", &ch);

    CheckExamTime(ch);

    return 0;
}