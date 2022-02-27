#include <iostream>
using namespace std;

class Student
{
private:
   string name, gender;
   int age;
   double gpa;
public:
    Student(string name, int age, string gender, double gpa){
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->gpa = gpa;
    };
    void display(){
        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << "\nGPA: " << gpa;
    }
    
};
int main(){
    Student s ("Duong", 18, "Male", 8.7);
    s.display();
}


