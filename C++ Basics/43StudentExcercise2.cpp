#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    float basic,per_allowance,per_deduction,net_salary;
    cout<<"Enter Basic Pay"<<endl;
    cin>>basic;    
    cout<<"Enter Percentage Allowance, Percentage Deduction"<<endl;
    cin>>per_allowance>>per_deduction;

    net_salary = basic + per_allowance*(basic/100) - per_deduction*(basic/100);
    cout<<"Net Salary is :"<<" "<<net_salary<<endl;

    return 0;
}
