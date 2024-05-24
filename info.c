#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[10];
};
int main()
{
    int i;
    struct student st[5];
    printf("Enter Records of 5 students");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Detail Of student %d", i + 1);
        printf("\nEnter Roll No., Name and Marks of Student %d:", i + 1);
        scanf("%d%s", &st[i].rollno, &st[i].name);
    }
    printf("\nStudent Information List:");
    for (i = 0; i < 5; i++)
    {
        printf("\nDetails of Student %d:", i + 1);
        printf("\nRollno:%d, Name:%s", st[i].rollno, st[i].name);
    }
    return 0;
}
