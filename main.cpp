// #include <bits/stdc++.h>

#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

// Định nghĩa hằng số và kiểu dữ liệu mới
#include "globalVariable.cpp"

// Khai báo nguyên mẫu function
#include "function.cpp"

// Utils
#include "utils.cpp"

int main() {
	exit(RealMain());
	return 0;
}

int RealMain() {
	int input_menu;
	for( ; ; ) {
		system("cls");
		Menu();
		cout << "Nhập: "; cin >> input_menu;
		if (input_menu == 1) {
			system("cls");
			Menulabs1();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs1(input_menu);
			break;
		} else if (input_menu == 2) {
			system("cls");
			Menulabs2();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs2(input_menu);
			break;
		} else if (input_menu == 3) {
			system("cls");
			Menulabs3();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs3(input_menu);
			break;
		} else if(input_menu == 0) {
			break;
		}
	}
	return 0;
}

// Start Custom Cpp
#include "labs1.cpp"
#include "labs2.cpp"
#include "labs3.cpp"
// End Custom Cpp