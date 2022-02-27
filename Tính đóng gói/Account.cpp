#include <iostream>
using namespace std;

class Account{
private:
    int id;
    string name;
    int balance;
public:
    Account(int id, string name){
        this->id = id;
        this->name = name;
    }
    Account(int id, string name, int balance){
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    int getId(){
        return id;
    }
    void setName(string Name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    int getBalance(){
        return balance;
    }
    void deposit(int amount){
        balance += amount;
    }
    void withdraw(int amount){
        if (balance < amount) cout << "That amount exceeds your current balance." << endl;
        else balance -= amount;
    }
    void display(){
        cout << "Id: " << id << "\nName: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
	Account account1(1000, "Tuan", 2000);
	account1.display();
	account1.withdraw(2100);
	account1.deposit(600);
	cout << "Balance: " << account1.getBalance() << endl;
	account1.withdraw(2100);
	cout << "Balance: " << account1.getBalance() << endl;
	return 0;
}