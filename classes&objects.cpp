#include<iostream>
#include<stdio.h>

using namespace std;

class Employee
{
    private:
        int salary = 500;


    public:
        int const empCode = 123;
        string name = "Jatin";
        string fname = "Raghu";
        string mname = "Rina";
    

    void printDetailsOfEmployee(){
        cout<<"Employee Code: "<<this->empCode<<endl;
        cout<<"Name of Employee: "<<this->name<<endl;
        cout<<"Father's Name: "<<this->fname<<endl;
        cout<<"Mother's Name: "<<this->mname<<endl;
    }

    void printSalary(){
        cout<<"Salary of "<<this->name<<" is "<<this->salary<<endl;
    }

};


class Programmer : public Employee
{
    private:
        int performanceIndex = 8;

    public:
        int errors = 3;

    void printPerformanceIndex(){
        cout<<"Performance Index of "<<this->name<<" is "<<this->performanceIndex<<endl;
    }

    void printNoOfErrors(){
        cout<<"Number of errors in the code: "<<this->errors<<endl;
    }
};



int main()
{
    // Employee emp;

    // emp.printDetailsOfEmployee();

    // emp.printSalary();

    Programmer pr;

    pr.printDetailsOfEmployee();

    pr.printNoOfErrors();

    pr.printPerformanceIndex();

    pr.printSalary();

    cout<<endl;

    return 0;
    
}