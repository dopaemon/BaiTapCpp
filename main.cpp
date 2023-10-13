// #include <bits/stdc++.h>

#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <conio.h>

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
	do {
		system("cls");
		menu();
		cout << "Nhập: "; cin >> input_menu;
		if(input_menu == 0) {
			return 0;
		} else {
			input(input_menu);
		}
	} while (true);
}

// Start Custom Cpp
#include "labs1.cpp"
#include "labs2.cpp"
// End Custom Cpp