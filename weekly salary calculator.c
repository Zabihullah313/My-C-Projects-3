#include <stdio.h>
int main(void){
    float hours;
    float extra_hours;
    float extra_money;
    float salary;
    float rate;
    float total_salary;
    while (4)
    {
        printf("Enter the # of hours worked (-1 to end):");
        scanf("%f",&hours);
        if (hours==-1)
            break;
        printf("Enter the hourly rate of worker:");
        scanf("%f",&rate);
        if(hours>40){
            extra_hours=hours-40;
        }
        extra_money = extra_hours*0.5*rate;
        salary =rate*hours;
        total_salary=salary+extra_money;
        printf("The salary is %.2f$\n",total_salary);
    }

}