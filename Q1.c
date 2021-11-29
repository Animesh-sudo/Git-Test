//Structure
//Changing for git test in second folder
#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    char roll[10];
    int no_of_backlog;
} STUDENT;

void Read(STUDENT *array,int p)
{
    printf("Please input name, roll number and backlogs (Enter 0 if no backlogs): ");
    scanf("%s %s %d", array[p].name, array[p].roll, &array[p].no_of_backlog);
}

void Display(STUDENT *array, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Student name: %s\n", array[i].name);
        printf("Student roll number: %s\n", array[i].roll);
        printf("No. of backlogs: %d\n", array[i].no_of_backlog);
        printf("====================================================\n");
    }
}

void Search(STUDENT *array, int size, char *roll)
{
    int k;
    for(k=0; k<size; k++)
    {
        if(!strcmp(array[k].roll,roll))
        {
            printf("Student name: %s\n",array[k].name);
            printf("Student roll number: %s\n", array[k].roll);
            printf("No. of backlogs: %d\n", array[k].no_of_backlog);
        }
        else
            printf("Student with roll %s does not exist in the database\n", roll);
    }
}

void Update_backlog(STUDENT *array, int size, char *roll, int x)
{
    int k;
    char pswd[20];
    printf("Give pswd: ");
    scanf("%s",pswd);
    if(!strcmp(pswd,"iamadmin"))
    {
        for(k=0; k<size; k++)
        {
            if(!strcmp(array[k].roll,roll))
            {
                array[k].no_of_backlog += x; 
            }
            else
                printf("Student with roll %s does not exist in the database\n", roll);
        }
    }
    else
    {
        printf("Wrong pswd!!\n");
        return;
    }    
}

int Delete(STUDENT *array, int size, char *roll)
{
    int k, i, position;
    for(k=0; k<size; k++)
    {
        if(!strcmp(array[k].roll,roll))
        {
            position = k;
        }
        else
            printf("Student with roll %s does not exist in the database\n", roll);
            //return 0;
    }
    for(i = position-1; i<size-1; i++)
    {
        array[i] = array[i+1];
    }
    return 1;    
}
int main()
{
    STUDENT arr_stu[10]; //Ques 1(a)
    STUDENT *ptr;
    ptr = arr_stu;
    Read(ptr,0);
    Read(ptr,1);
    Display(ptr,sizeof(arr_stu)/sizeof(STUDENT));
    Update_backlog(ptr,sizeof(arr_stu)/sizeof(STUDENT),"22MS45",-1);
    Display(ptr,sizeof(arr_stu)/sizeof(STUDENT));
    Delete(ptr,sizeof(arr_stu)/sizeof(STUDENT),"22MS45");
    Display(ptr,sizeof(arr_stu)/sizeof(STUDENT));
    return 0;

}
