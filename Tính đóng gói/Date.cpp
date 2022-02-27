#include<iostream>
#include<string>
using namespace std;

class Date{
private:
	int day;
	int month;
	int year;
public: 
    Date(int day, int month, int year) {
    	this->day = day;
    	this->month = month;
    	this->year = year;
    }
    void setDate(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
    int getDay() {
		return day;
	}

	void setDay(int day) {
		this->day = day;
	}

	int getMonth() {
		return month;
	}

	void setMonth(int month) {
		this->month = month;
	}

	int getYear() {
		return year;
	}

	void setYear(int year) {
		this->year = year;
	}
    void display() {
    	string day = to_string(this->day);
		string month = to_string(this->month);
		string year = to_string(this->year);
		if (day.length() == 1) {
		  day = "0" + day;
		}
		if (month.length() == 1) {
		  month = "0" + month;
		}
		cout << day + "/" + month + "/" + year << endl;
    }
};

int main() {
	Date d(1, 1, 1997);
	d.display();
	d.setDate(12, 12, 2004);
	d.display();
	d.setMonth(3);
	d.display();	
	return 0;
}

Bài 1:
input: số nguyên n 
output: tổng S

Bước 1: s=0; i=1;
BƯớc 2: nếu i<=n thì s=s+i;
		Ngược lại sang bước 4;
Bước 3: i += 1;
		Quay lại bước 2;
Bước 4: s=s/i;
Bước 5: S là tổng trung bình cộng cần tìm;

Bài 2:
input: số nguyên n 
output: dãy số chẵn từ 1 đến n

Bước 1: i = 1;
Bước 2: nếu i<n thì
			i % 2 == 0 thì cout << i;
			ngược lại không in ra màn hình;
Bước 3: i += 1;
			Quay lại bước 2;
Bước 4: Dãy in ra màn hình là dãy số chẵn từ 1 đến n.


