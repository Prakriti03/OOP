#include<stdio.h>
struct students{
    int roll,marks;
    char name[100],add[100];
}s[100];
int main()
{
    int i,n;
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name and adress of no %d student",i+1);
        scanf("%s%s",s[i].name,s[i].add);
        printf("\nEnter roll and marks of no %d student",i+1);
        scanf("%d%d",&s[i].roll,&s[i].marks);
    }
    for (i=0;i<n;i++){
        printf("\nThe details of no %d student are",i+1);
        printf("\nName=%s ,\nAddress=%s,\nRoll=%d,   		\nMarks=%d",s[i].name,s[i].add,s[i].roll,s[i].marks);
        
    }
    return 0;
}
