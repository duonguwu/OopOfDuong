#include "Student5.cpp"
#include "Person.cpp"
#include "Teacher5.cpp"

int main() {
	Student5 s("Khanh", 23, "Ha Noi", 9.0);
	s.display();
	Teacher5 t("Tung", 34, "Ha Noi", 1700);
	t.display();
	return 0;
}