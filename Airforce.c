#include<stdio.h>
#include<string.h>
struct airforceTeam
{
    char name[30];
    char rank[10];
    int age;
    float salary;
};
void getrank( struct airforceTeam *ptr);
int main()
{
    struct airforceTeam member[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the name: \n");
        scanf(" %[^\n]s",  member[i].name);
        printf("Enter the age: \n");
        scanf("%d",&member[i].age);
        printf("Enter the salary: \n");
        scanf("%f",&member[i].salary);
        getrank(&member[i]);
        printf("rank: %s",member[i].rank);
        
    }
    
}
void getrank( struct airforceTeam *ptr)
{
    float sal;
    sal = ptr -> salary;
    if (sal > 10000)
    {
        strcpy(ptr->rank,"Marshal");
    }
    else if (sal > 7000 && sal <= 10000)
    {
        strcpy(ptr->rank,"General");
    }
    else if (sal > 5000 && sal <= 7000)
    {
        strcpy(ptr->rank,"Colonel");
    }
    else if (sal <= 5000)
    {
        strcpy(ptr->rank,"lieutenant");
    }
    
    
}
