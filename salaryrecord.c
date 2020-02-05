#include<stdio.h>
struct SalaryRecord
{
    int enumber;
    float basicsal;
    float epf;
    float tax;
    float netsal;
};
void calsal(struct SalaryRecord buffer[]);
int main()
{
    int i;
    struct SalaryRecord arr[4];
    for ( i = 0; i < 4; i+=1)
    {
        printf(" employee number %d: ",i+1);
        printf("enter the employee ID: ");
        scanf("%d",&arr[i].enumber);
        printf("Enter the basic salary: \n");
        scanf("%f",&arr[i].basicsal);
    }
    calsal(arr);
    for ( i = 0; i < 4 ; i++)
    {
        printf(" employee number %d: \n",i+1);
        printf("%d %.2f %.2f %.2f %.2f\n",arr[i].enumber,arr[i].basicsal,arr[i].epf,arr[i].tax,arr[i].netsal);
    }
    

return 0;
}
void calsal(struct SalaryRecord buffer[] )
{
    float epf,tax;
    for (int i = 0; i < 4; i++)
    {
        epf = 0.11 * (buffer[i].basicsal);
        buffer[i].epf = epf;
        if(buffer[i].basicsal >= 10000 )
        {
            tax= 0.15 * (buffer[i].basicsal);
            buffer[i].tax= tax;
            buffer[i].netsal = buffer[i].basicsal-buffer[i].epf-buffer[i].tax;
        }
        else if (buffer[i].basicsal >= 5000 && buffer[i].basicsal < 10000 )
        {
            tax= 0.10 * (buffer[i].basicsal);
            buffer[i].tax= tax; 
            buffer[i].netsal = buffer[i].basicsal-buffer[i].epf-buffer[i].tax;
        }
        else if (buffer[i].basicsal >= 3000 && buffer[i].basicsal < 5000)
        {
            
            tax= 0.08 * (buffer[i].basicsal);
            buffer[i].tax= tax;
            buffer[i].netsal = buffer[i].basicsal-buffer[i].epf-buffer[i].tax;
        
        }
        else if (buffer[i].basicsal < 3000)
        {
            tax= 0 * (buffer[i].basicsal);
            buffer[i].tax= tax;
           buffer[i].netsal = buffer[i].basicsal-buffer[i].epf-buffer[i].tax;
        }
        

    }
    
 
}



    


