#include "Employee5.cpp"
using namespace std;

class Manager : public Emlpoyee{
private:
    int bonus;
public:
    Manager(string name, int salary, int bonus) : Emlpoyee(name, salary){
        this->bonus = bonus;
    }
    void setBonus(int bonus){
        this->bonus = bonus;
    }
    int getSalary(){
        return Emlpoyee::getSalary() + bonus;    
        }
    int getBonus(){
        return bonus;
    }
    void display(){
        cout << "Name: " << getName() << endl;
		cout << "Salary: " << getSalary() << endl;
    }
};