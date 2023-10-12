#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <conio.h>

using namespace std;

int RM() {
	int menu;
	// do { cout << "\nBạn có muốn quay lại Menu không ? [0/1]: "; cin >> menu; } while (menu != 0);
	for ( ; ; ) {
		cout << "\nBạn có muốn quay lại Menu không ? [0/1]: "; cin >> menu;
		if (menu == 0 || menu == 1) { break; }
	}
	
	return menu;
}

// Start Custom Cpp
#include "labs1/main.cpp"
#include "labs2/main.cpp"
// End Custom Cpp

int line(int a, int b) {
	for (int i = 1; i <= a; i++ ) {
		cout << "▓";
		if (b == 1 && a == i) {
			cout << endl;
		}
	}
	return 0;
}

int menu() {
	line(35, 1);
	cout << "Tên: Trần Nguyễn Tuấn Anh" << endl
		 << "Lớp: CTK47A" << endl
		 << "MSSV: 2312577" << endl
		 << "Môn: Nguyên Lý Lập Trình Cấu Trúc" << endl;
	line(35, 1);
	cout << "Menu bài tập: \n"
		 << "Labs 1: \n"
		 << " 1 - Biến\n"
		 << " 2 - Vẽ Hình\n"
		 << "Labs 2: \n"
		 << " 3 - Chu Vi và Diện Tích hình tròn \n"
		 << " 4 - Đổi giây sang giờ \n"
		 << " 5 - Hình Thang Cân \n"
		 << " 6 - Hình trụ tròn \n"
		 << " 7 - Hình cầu \n"
		 << " 8 - Chỉ số cơ thể (BMI) \n"
		 << " 9 - Khoảng cách \n"
		 << " 10 - Độ lạnh của gió \n"
		 << " 11 - Chuyển đổi hệ tọa độ \n"
		 << " 12 - Thứ trong tuần \n"
		 << " 13 - Chuyển đổi hệ màu \n"
		 << "Options: \n"
		 << " 0 - Exits\n";
	line(35, 1);
	return 0;
}

int input(int a) {
	switch (a) {
		case 1:
			if (test1_labs1() == 0) {
				exit(0);
				break;
			}
		case 2:
			if (test2_labs1() == 0) {
				exit(0);
				break;
			}
		case 3:
			if (Labs2_ChuViDienTich() == 0) {
				exit(0);
				break;
			}
		case 4:
			if (Labs2_time_corvert() == 0) {
				exit(0);
				break;
			}
		case 5:
			if (Labs2_HinhThang() == 0) {
				exit(0);
				break;
			}
		case 6:
			if (Labs2_HinhTruTron() == 0) {
				exit(0);
				break;
			}
		case 7:
			if (Labs2_HinhCau() == 0) {
				exit(0);
				break;
			}
		case 8:
			if (Labs2_ChiSoCoThe() == 0) {
				exit(0);
				break;
			}
		case 9:
			if (Labs2_KhoanCach() == 0) {
				exit(0);
				break;
			}
		case 10:
			if (Labs2_DoLanhCuaGio() == 0) {
				exit(0);
				break;
			}
		case 11:
			if (Labs2_ChuyenDoiHeToaDo() == 0) {
				exit(0);
				break;
			}
		case 12:
			if (Labs2_ThuTrongTuan() == 0) {
				exit(0);
				break;
			}
		case 13:
			if (Labs2_ChuyenDoiHeMau() == 0) {
				exit(0);
				break;
			}
		default:
			cout << "Cần chọn ít nhất một lựa chọn !!!";
	}
	return 0;
}

int RealMain() {
	int input_menu;
	while (true) {
		system("cls");
		menu();
		cout << "Nhập: "; cin >> input_menu;
		if(input_menu == 0) {
			exit(0);
			break;
		} else {
			input(input_menu);
		}
	}
	return 0;
}

int main() {
	exit(RealMain());
	return 0;
}