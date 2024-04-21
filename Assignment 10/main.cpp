/****************************************************************************
CSCI 240         Program 10     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 5/2/2024

Purpose: Use Object Oriented Programming and cstyle strings to create a Employee class
****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

const int FIXED_WIDTH = 30;
using namespace std;

class Employee{
    private:
        char name[30];
        char id[8];
        double salary;

    public:
        //Empty Construtor
        Employee(){
            strcpy(name, "None");
            strcpy(id, "ACB1234");
            salary = 0.0;
        }
        //Three arg construtor
        Employee(char newName[], char newId[], double newSalary){
            strcpy(name, newName);
            setIDnum(newId);
            setSalary(newSalary);
        }

        void display();
        void increaseSalary(double raise);
        void setIDnum(const char newId[]);
        void setSalary(double newSalary);
        const char * getName();
        const char * getIDnum();
        double getSalary();
    
};

//Main for testing the Employee class defined above
int main(){
    Employee employee1 = Employee("Shaivil Patel", "NIU9635", 53948.61);

    cout << "The first Employee object:" << endl;
    employee1.display();
    employee1.increaseSalary(125.15);
    employee1.display();

    Employee employee2 = Employee();
    
    cout << "The second Employee object:" << endl;
    employee2.display();
    employee2.increaseSalary(-2200.00);
    employee2.display();

    Employee employee3 = Employee("Blanche Devereaux", "TGG1985", 820.12);
    cout << "The third Employee object:" << endl;
    employee3.display();
    employee3.setSalary(82.88);
    employee3.setIDnum("TGP1992");
    employee3.display();

    Employee employee4 = Employee("Grace Hopper", "UNI1950", 2468.00);
    cout << "The fourth Employee object:" << endl;
    employee4.display();
    employee4.setIDnum("COBOL1959");
    employee4.increaseSalary(9517.53);

    cout << employee4.getName() << " has the salary of $" << employee4.getSalary() << endl;
    employee4.display();

    Employee employee5 = Employee("Charlie Hudson", "REX2332", 71940.76);
    cout << "The fifth Employee object:" << endl;
    employee5.display();
    employee5.setSalary(-10000.01);
    cout << "Employee 5 has an identification number of " << employee5.getIDnum() << endl;
    employee5.display();

    return 0;
}

/***************************************************************
Function: display
Use: Display the employee's name, ID, and salary.
Arguments: None
Returns: None
***************************************************************/
void Employee::display(){
    cout << name << setw(FIXED_WIDTH) << id << endl;
    cout << "$" << fixed << setprecision(2) << salary << endl << endl;
}

/***************************************************************
Function: increaseSalary
Use: Increase the employee's salary by a specified amount.
Arguments: double raise - the amount by which to increase the salary
Returns: None
***************************************************************/
void Employee::increaseSalary(double raise){
    if(raise <= 0){
        cout << "Erorr: Salary less than 0 please enter a non-zero value. Salary was not changed." << endl;
        return;
    }

    salary += raise;
}

/***************************************************************
Function: setIDnum
Use: Set the employee's ID number to a new value.
Arguments: char[] newId - the new ID number to set
Returns: None
***************************************************************/
void Employee::setIDnum(const char newId[]){
    if(strlen(newId) != 7){
        cout << "Erorr: Length of newId is not correct length. Id not changed." << endl << endl;
        return;
    }

    if(!isalpha(newId[0]) || !isalpha(newId[1]) || !isalnum(newId[2])){
        cout << "Erorr: First 3 characters of newID are not alphabetic" << endl;
        return;
    }

    if(!isdigit(newId[3]) || !isdigit(newId[4]) || !isdigit(newId[5]) || !isdigit(newId[6])){
        cout << "Erorr: Last 4 characters of newId are not digits" << endl;
        return;
    }

    strcpy(id, newId);
}

/***************************************************************
Function: setSalary
Use: Set the employee's salary to a new value.
Arguments: double newSalary - the new salary to set
Returns: None
***************************************************************/
void Employee::setSalary(double newSalary){
    if(newSalary <= 0){
        cout << "Erorr: Please enter a non-zero value. Salary not changed" << endl << endl;
        return;
    }

    salary = newSalary;
}

/***************************************************************
Function: getName
Use: Get the employee's name.
Arguments: None
Returns: A pointer to the employee's name
***************************************************************/
const char * Employee::getName(){
    return name;
}

/***************************************************************
Function: getIDnum
Use: Get the employee's ID number.
Arguments: None
Returns: A pointer to the employee's ID number
***************************************************************/
const char * Employee::getIDnum(){
    return id;
}

/***************************************************************
Function: getSalary
Use: Get the employee's salary.
Arguments: None
Returns: The employee's salary
***************************************************************/
double Employee::getSalary(){
    return salary;
}
