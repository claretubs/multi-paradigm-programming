// Creating Structures
// Author: Clare Tubridy

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a struct for employees
struct Employee {
    char name[50];
    float salary;
    int yearsWorked;
    char jobTitle[80];
};

// Define a struct for college modules
struct Module {
    char moduleName[80];
    int credits;
};

// Define a struct for students
struct Student {
    char name[50];
    int age;
    struct Module modules[10]; // An array of up to 10 college modules
    int numModules;
};

// Define a struct for managers
struct Manager {
    char name[50];
    int age;
    float salary;
    struct Employee employeesManaged[10];
    int numEmployees;
};

// Function to print information about an Module
void printModule(struct Module module) {
    printf("Module Name: %s\n", module.moduleName);
    printf("Module Credits: %d\n", module.credits);
}

// Function to print information about an Employee
void printEmployee(struct Employee employee) {
    printf("Employee Name: %s\n", employee.name);
    printf("Employeee Salary: € %.2f\n", employee.salary);
    printf("Years worked: %d\n", employee.yearsWorked);
    printf("Job Title: %s\n", employee.jobTitle);
}

// Function to print information about a Student
void printStudent(struct Student student) {
    printf("Student Name: %s\n", student.name);
    printf("Student Age: %d\n", student.age);
    printf("Enrolled Modules:\n");
    
    for (int i = 0; i < student.numModules; i++) {
        printModule(student.modules[i]);
    }
}

// Function to print information about a Manager
void printManager(struct Manager manager) {
    printf("Manager Name: %s\n", manager.name);
    printf("Manager Age: %d\n", manager.age);
    printf("Manager Salary: € %.2f\n", manager.salary);
    printf("Employees Managed:\n");

    for (int i = 0; i < manager.numEmployees; i++) {
        printEmployee(manager.employeesManaged[i]);
    }  
}

int main(){

    // Example usage of the defined structs
    struct Module module1 = {"Physics", 10};
    struct Module module2 = {"Geography", 5};

    struct Employee employee1 = {"Clare", 50000, 8, "Engineer"};
    struct Employee employee2 = {"Billy", 50000, 15, "Quality Assurance"};

    struct Student student1;
    strcpy(student1.name, "John Doe");
    student1.age = 19;
    student1.modules[0] = module1;
    student1.modules[1] = module2;
    student1.numModules = 2;

    struct Manager manager1;
    strcpy(manager1.name, "Mary Mangan");
    manager1.age = 40;
    manager1.salary = 80000.0;
    manager1.employeesManaged[0] = employee1;
    manager1.employeesManaged[1] = employee2;
    manager1.numEmployees = 2;

    // Print information about the entities
    printf("College Modules:\n");
    printModule(module1);
    printModule(module2);
    
    printf("\nStudents:\n");
    printStudent(student1);
    
    printf("\nEmployees:\n");
    printEmployee(employee1);
    printEmployee(employee2);
    
    printf("\nManagers:\n");
    printManager(manager1);
    
    return 0;
}