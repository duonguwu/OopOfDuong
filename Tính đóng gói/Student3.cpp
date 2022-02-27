#include<iostream>

using namespace std;

class Student{
private:
	int id, score;
	string name;
	int age;
	string address;
public:
    Student(){}
	Student(int id, string name, int age, string address, int score){
		this->id = id;
		this->name = name;
		this->age = age;
		this->address =address;
        this->score = score;
	}
	int getId(){
		return id;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getAddress() {
		return address;
	}
    int getScore(){
        if (score > 10) return 10;
        if (score < 0) return 0;
        return score;
    }
    void setScore(int score){
        this->score = score;
    }
    void setId(int id) {
		this->id = id;
	}void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setAddress(string address) {
		this->address = address;
	}
};


int main() {
	Student s(1001, "Trung", 24, "Ha Noi", 5);
	cout << s.getId() << endl;;
	cout << s.getName() << endl;;
	cout << s.getAge() << endl;;
	cout << s.getAddress() << endl;;
	cout << s.getScore() << endl;;
	s.setScore(-7);
	cout << s.getScore() << endl;;
	s.setScore(15);
	cout << s.getScore() << endl;;
	return 0;
}