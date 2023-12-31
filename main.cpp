// #include <bits/stdc++.h>

#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <conio.h>
#include <iomanip>
#include <cstdlib>

using namespace std;


#ifdef _WIN32
	// Định nghĩa hằng số và kiểu dữ liệu mới
	#include "library\\globalVariable.h"
	
	// Khai báo nguyên mẫu function
	#include "library\\function.h"
	
	// Utils
	#include "library\\utils.h"
	
	// Labs
	#include "library\\labs1.h"
	#include "library\\labs2.h"
	#include "library\\labs3.h"
	#include "library\\labs4.h"
#elif __linux__
	// Định nghĩa hằng số và kiểu dữ liệu mới
	#include "./library/globalVariable.h"
	
	// Khai báo nguyên mẫu function
	#include "./library/function.h"
	
	// Utils
	#include "./library/utils.h"
	
	// Labs
	#include "./library/labs1.h"
	#include "./library/labs2.h"
	#include "./library/labs3.h"
	#include "./library/labs4.h"
#endif

int main() {
	exit(RealMain());
	return 0;
}

int RealMain() {
	int input_menu;
	for( ; ; ) {
		clear();
		Menu();
		cout << "Nhập: "; cin >> input_menu;
		if (input_menu == 1) {
			clear();
			Menulabs1();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs1(input_menu);
			break;
		} else if (input_menu == 2) {
			clear();
			Menulabs2();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs2(input_menu);
			break;
		} else if (input_menu == 3) {
			clear();
			Menulabs3();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs3(input_menu);
			break;
		} else if (input_menu == 4) {
			clear();
			Menulabs4();
			cout << "Nhập: "; cin >> input_menu;
			InputLabs4(input_menu);
			break;
		} else if(input_menu == 0) {
			break;
		}
	}
	return 0;
}