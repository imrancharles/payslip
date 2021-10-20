/*I
 project: payslip program
 Author:  Imran Charles
 Date:    oct,2021
 compiler: GCC
 Language: C99
 license: MIT


 */



#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name [100];
    int emp_no,hours;
    int normal_pay,overtime_pay, gross;
    float tax,net;
    const int rate = 1000;

    printf("\ Gitonga's factory payslip system!\n");
    printf("Employee Name: ");
    gets(name);
    printf("Employees number: ");
    scanf("%d",&emp_no);
    printf("Hours worked: ");
    scanf("%d",&hours);

    //computation
    if(hours > 40){
        normal_pay = 40*rate;
        overtime_pay = 0;
     }
    else
    {
        normal_pay = hours * rate;
        overtime_pay = 0;

    }
     gross = normal_pay + overtime_pay;
     tax = 0.16 * gross;
     net = gross - tax;

    // print payslip
    printf("Emp No:\t%d\n",emp_no);
    printf("Employee Name: \t%s\n",name);
    printf("Normal pay: \t%d\n",normal_pay);
    printf("Overtime pay: \t%d\n",overtime_pay);
    printf("Gross pay: \t%d\n,gross");
    printf("Tax: \t%f\n",tax);
    printf("Net pay: /t%f\n,net");



    return 0;
}
