#include<iostream>
#include<cstring>
using namespace std;

struct HocSinh
{
	char name[40];
	int ms;
	double toan, van, dtb;
};

void Nhapsv(HocSinh &a)
{   
    cin.ignore();
    cin.getline(a.name,100);
	cin >> a.ms;
	cin >> a.toan >> a.van;
}

void Nhap(HocSinh A[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++) {
        Nhapsv(A[i]);
    }
}

void Xuatsv(HocSinh a){
	a.dtb = (a.toan + a.van)/2;
	cout << "Ho va ten: " << a.name << endl;
	cout << "MSSV: " << a.ms << endl;
	cout << "Diem toan: " << a.toan << endl;
	cout << "Diem van: " << a.van << endl;
	cout << "DTB: " << a.dtb << endl;
}
void Xuat(HocSinh A[], int n){
    for (int i = 0; i < n; i++) {
        Xuatsv(A[i]);
    }
}

int main(){
	HocSinh a[100];
	int n;
	Nhap(a,n);
	Xuat(a,n);
	double max = a[0].dtb;
	for (int i = 1; i < n; i++) {
		if (max < a[i].dtb) max = a[i].dtb;
	}
	cout << "\nDiem cao nhat lop:" << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].dtb == max) {
			Xuatsv(a[i]);
		}
	}	
}