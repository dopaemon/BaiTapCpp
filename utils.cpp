int RM() {
	int menu;
	// do { cout << "\nBạn có muốn quay lại Menu không ? [0/1]: "; cin >> menu; } while (menu != 0);
	for ( ; ; ) {
		cout << "\nBạn có muốn quay lại Menu không ? [0/1]: "; cin >> menu;
		if (menu == 0 || menu == 1) { break; }
	}
	
	return menu;
}

int line(int a, int b) {
	for (int i = 1; i <= a; i++ ) {
		cout << "▓";
		if (b == 1 && a == i) {
			cout << endl;
		}
	}
	return 0;
}

int Menu() {
	line(35, 1);
	cout << "Tên: Trần Nguyễn Tuấn Anh" << endl
		 << "Lớp: CTK47A" << endl
		 << "MSSV: 2312577" << endl
		 << "Môn: Nguyên Lý Lập Trình Cấu Trúc" << endl;
	line(35, 1);
	cout << "Menu bài tập:" << endl
		 << " 1 - Labs 1" << endl
		 << " 2 - Labs 2" << endl
		 << " -1 - Luyện Tập" << endl;
	line(35, 1);
	cout << "Options:" << endl
		 << " 0 - Exits\n";
	line(35, 1);
	return 0;
}

int Menulabs1() {
	line(35, 1);
	cout << "Tên: Trần Nguyễn Tuấn Anh" << endl
		 << "Lớp: CTK47A" << endl
		 << "MSSV: 2312577" << endl
		 << "Môn: Nguyên Lý Lập Trình Cấu Trúc" << endl;
	line(35, 1);
	cout << "Menu bài tập:" << endl
		 << "Labs 1:" << endl
		 << " 1 - Biến" << endl
		 << " 2 - Vẽ Hình" << endl
		 << " 3 - Phép gán" << endl
		 << " 4 - Chu vi diện tích hình tam giác" << endl
		 << " 5 - Đổi giây sang giờ" << endl
		 << " 6 - Phép toán" << endl
		 << " 7 - Số lớn" << endl
		 << " 8 - Lũy thừa" << endl
		 << " 9 - Hình thang cân" << endl
		 << " 10 - Danh sách sinh viên" << endl
		 << " 11 - Hình trụ tròn" << endl
		 << " 12 - Hình cầu" << endl
		 << " 13 - ASCII ART" << endl
		 << " 14 - Thứ trong tuần" << endl;
	line(35, 1);
	cout << "Options:" << endl
		 << " 0 - Exits\n";
	line(35, 1);
	return 0;
}

int Menulabs2() {
	line(35, 1);
	cout << "Tên: Trần Nguyễn Tuấn Anh" << endl
		 << "Lớp: CTK47A" << endl
		 << "MSSV: 2312577" << endl
		 << "Môn: Nguyên Lý Lập Trình Cấu Trúc" << endl;
	line(35, 1);
	cout << "Menu bài tập:" << endl
		 << "Labs 2: " << endl
		 << " 1 - Chu Vi và Diện Tích hình tròn" << endl
		 << " 2 - Đổi giây sang giờ" << endl
		 << " 3 - Hình Thang Cân" << endl
		 << " 4 - Hình trụ tròn" << endl
		 << " 5 - Hình cầu" << endl
		 << " 6 - Chỉ số cơ thể (BMI)" << endl
		 << " 7 - Khoảng cách" << endl
		 << " 8 - Độ lạnh của gió" << endl
		 << " 9 - Chuyển đổi hệ tọa độ" << endl
		 << " 10 - Thứ trong tuần" << endl
		 << " 11 - Chuyển đổi hệ màu" << endl
		 << " 12 - Chuyển đổi thang đo nhiệt độ" << endl
		 << " 13 - Thanh toán công nợ" << endl
		 << " 14 - Đa giác lồi" << endl;
	line(35, 1);
	cout << "Options:" << endl
		 << " 0 - Exits\n";
	line(35, 1);
	return 0;
}

int MenuLuyenTap() {
	line(35, 1);
	cout << "Tên: Trần Nguyễn Tuấn Anh" << endl
		 << "Lớp: CTK47A" << endl
		 << "MSSV: 2312577" << endl
		 << "Môn: Nguyên Lý Lập Trình Cấu Trúc" << endl;
	line(35, 1);
	cout << "Menu bài tập:" << endl
		 << "Luyện Tập: " << endl
		 << " 1 - Hello, World!!!" << endl;
	line(35, 1);
	cout << "Options:" << endl
		 << " 0 - Exits\n";
	line(35, 1);
	return 0;
}

int InputLabs1(int a) {
	switch (a) {
		case 0: exit(0);
		case 1:
			if (Labs1_Bien() == 0) {
				break;
			} else {
				RealMain();
			}
		case 2:
			if (Labs1_VeHinh() == 0) {
				break;
			} else {
				RealMain();
			}
		case 3:
			if (Labs1_PhepGan() == 0) {
				break;
			} else {
				RealMain();
			}
		case 4:
			if (Labs1_ChuViDienTichHinhTamGiac() == 0) {
				break;
			} else {
				RealMain();
			}
		case 5:
			if (Labs2_time_corvert() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 6:
			if (Labs1_PhepToan() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 7:
			if (Labs1_SoLon() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 8:
			if (Labs1_LuyThua() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 9:
			if (Labs2_HinhThang() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 10:
			if (Labs1_DanhSachSinhVien() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 11:
			if (Labs2_HinhTruTron() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 12:
			if (Labs2_HinhCau() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 13:
			if (Labs1_AsciiArtt() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 14:
			if (Labs2_ThuTrongTuan() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		default:
			cout << "Cần chọn ít nhất một lựa chọn !!!";
	}
	return a;
}

int InputLabs2(int a) {
	switch (a) {
		case 0: exit(0);
		case 1:
			if (Labs2_ChuViDienTich() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 2:
			if (Labs2_time_corvert() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 3:
			if (Labs2_HinhThang() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 4:
			if (Labs2_HinhTruTron() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 5:
			if (Labs2_HinhCau() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 6:
			if (Labs2_ChiSoCoThe() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 7:
			if (Labs2_KhoanCach() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 8:
			if (Labs2_DoLanhCuaGio() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 9:
			if (Labs2_ChuyenDoiHeToaDo() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 10:
			if (Labs2_ThuTrongTuan() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 11:
			if (Labs2_ChuyenDoiHeMau() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 12:
			if (Labs2_ChuyenDoiThangDoNhietDo() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 13:
			if (Labs2_ThanhToanCongNo() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		case 14:
			if (Labs2_DaGiacLoi() == 0) {
				exit(0);
				break;
			} else {
				RealMain();
			}
		default:
			cout << "Cần chọn ít nhất một lựa chọn !!!";
	}
	return 0;
}