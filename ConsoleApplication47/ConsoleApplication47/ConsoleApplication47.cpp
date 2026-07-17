// ConsoleApplication47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class circle {
private:
	double radius ;
	string color ;
public:
	circle() {
		radius = 1.0;
		color = "red";
	}
	circle(double r) {
		radius = r;

	}
	circle(double r,string c) {
		radius = r;
		color = c;
	}
	double get_radius() {
		return radius;
	}
	string get_color() {
		return color;
	}
	void set_radius(double rad) {
		radius = rad;
	}
	void set_color(string col) {
		color = col;
	}
	double get_area() {
		double area = 3.14 * radius * radius;
		return area;
	}
};
class employee {
private:
	int id;
	string firstname;
	string lastname;
	int salary;
public: 
	employee(int id, string firstname, string lastname, int salary) {
		this->id = id;
		this->firstname = firstname;
		this->lastname = lastname;
	
}
	int get_id() {
		return id;

	}
	string get_first_name() {
		return firstname;

	}
	string get_last_name() {
		return lastname;
	}
	int get_salary() {
		return salary;
	}
	string get_name() {
		string fullname = firstname + lastname;
		return fullname;

	}
	void set_salary(int sal) {
		salary = sal;

	}
	int get_annual_salary() {
		return salary * 12;
	}
	int raise_salary(int percent) {
		salary = salary + salary * percent;
		return salary;
	}

};
class Account {
private:
	string id;
	string name;
	double balance;
public:
	Account() {
		balance = 0;
	}
	Account(string id, string name) {
		this->id = id;
		this->name = name;
	}
	Account(string id, string name, double balance) {
		this->balance = balance;
		this->id = id;
		this->name = name;

	}
	string get_name() {
		return name;
	}
	string get_id() {
		return id;
	}
	double get_balance() {
		return balance;
	}
	double credit(double amount) {
		balance = balance + amount;
	}
	double debit(double amount) {
		if (amount <= balance) {
			balance = balance - amount;
		}
		else
			cout << "Amount exceeded balance" << endl;
		return balance;
	}
	double transfer_to(Account another, double amount) {
		if (amount <= balance) {
			balance = balance - amount;
			another.credit(amount);

		}
		else
			cout << "Amount exceeded balance" << endl;
		return balance;
	}
};
class time {
private:
	int hour;
	int minute;
	int second;
public:
	time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	int gethour() {
		return hour;

	}
	int getminute() {
		return minute;
	}
	int getsecond() {
		return second;
	}
	time nextsecond() {
		second++;
		if (second == 60) {
			second = 0;
			minute++;
		}
		if (minute == 60) {
			minute = 0;
			hour++;
		}
		if (hour == 24) {
			hour = 0;
		}
		return *this;

	 }
	time prevous_second() {
		second = second - 1;
		if (second < 0) {
			second = 59;
			minute--;

		}
		if (minute < 0) {
			minute = 59;
			hour--;

		}
		if (hour < 0) {
			hour = 23;

		}
		return *this;

	}
	void showtime() {
		cout << hour << " : " << minute << " : " << second << endl;
	}
};

int main()
{


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
