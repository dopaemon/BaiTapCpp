int Labs1_Bien() {
	int k;
	long x;
	float a;
	double h;
	char c;
	
	cout << "Nhập giá trị int [ex: 1]: "; cin >> k;
	cout << "Nhập giá trị long [ex: 1000]: "; cin >> x;
	cout << "Nhập giá trị float [ex: 9.88233]: "; cin >> a;
	cout << "Nhập giá trị double [ex: 8.9232324]: "; cin >> h;
	cout << "Nhập giá trị char [ex: A]: "; cin >> c;
	
	cout << "Bạn đã nhập giá trị int: " << k << endl
		 << "Bạn đã nhập giá trị long: " << x << endl
		 << "Bạn đã nhập giá trị float: " << a << endl
		 << "Bạn đã nhập giá trị double: " << h << endl
		 << "Bạn đã nhập giá trị char: " << c << endl;
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_VeHinhCout() {
	cout << "\nHình (a):" << endl;
	cout << "* * * * *\n * * * * *\n* * * * *\n * * * * *\n* * * * *\n";
	
	cout << "\nHình (b):" << endl;
	cout << "* * * * *\n*       *\n*       *\n*       *\n* * * * *\n";
	
	cout << "\nHình (c):" << endl;
	cout << "* * * * *\n * * * * \n  * * *  \n   * *   \n    *     \n\n";
	
	return 0;
}

int Labs1_VeHinhFor() {
	cout << "\nHình (a):" << endl;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i % 2 == 1) {
				cout << "* ";
			} else {
				cout << " *";
			}
		}
		cout << endl;
	}
	
	cout << "\n\nHình (b): " << endl;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 1 || i == 5) {
				cout << "* ";
			} else if ( i >= 2 && i <= 4) {
				if ( j == 1 || j == 5) {
					cout << "* ";
				} else {
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	
	cout << "\n\nHình (c): " << endl;
	for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        if (i == 5 || i == 1) {
			if(i == 1) {
				for (int k = 1; k <= 2 * i - 1; k++) {
					cout << "*";
				}
            } else if (i == 5) {
				for (int k = 1; k <= (2 * i - 1) - 4; k++) {
					cout << "* ";
				}
			}
        } else {
            cout << "*";
            for (int k = 1; k <= 2 * i - 3; k++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

	return 0;
}

int Labs1_VeHinh() {
	int a;
	for ( ; ; ) {
		cout << "* Dùng cout [1]\n* Dùng for [2]\n[1/2]: "; cin >> a; 
		if (a == 1) { 
			Labs1_VeHinhCout();
			break;
		} else if ( a == 2 ) {
			Labs1_VeHinhFor();
			break;
		}
	}

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_PhepGan() {
	int x, y, z;
	cout << "\nNhập vào x: "; cin >> x;
	cout << "Nhập vào y: "; cin >> y;
	
	// Phép cộng
	z = x + y;
	cout << endl << x << " + " << y << " = " << z;

	// Phép trừ
	z = x - y;
	cout << endl << x << " - " << y << " = " << z;
	
	// Phép nhân
	z = x * y;
	cout << endl << x << " * " << y << " = " << z;
	
	// Phép chia
	z = x / y;
	cout << endl << x << " / " << y << " = " << z;
	
	// Phép chia lấy dư
	z = x % y;
	cout << endl << x << " % " << y << " = " << z << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_ChuViDienTichHinhTamGiac() {
	double a, b, c;
	
	cout << "\nNhập vào cạnh a: "; cin >> a;
	cout << "Nhập vào cạnh b: "; cin >> b;
	cout << "Nhập vào cạnh c: "; cin >> c;

	double p = (a + b + c) / 2; // Chu vi
	double s = sqrt(p * (p - a) * (p - b) * (p - c)); // Diện tích
	
	cout << "\nChu vi hình tam giác cạnh " << a << ", " << b << ", " << c << " là " << p * 2 << endl;
	cout << "\nDiện tích hình tam giác cạnh " << a << ", " << b << ", " << c << " là " << s << endl;
	

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_PhepToan() {
	int x, y, z;
	
	cout << "\nNhập vào x: "; cin >> x;
	cout << "Nhập vào y: "; cin >> y; cout << endl;

	z = x++;
	cout << x << "++ | x = " << z << endl;
	
	z = x--;
	cout << x << "-- | x = " << z << endl;
	
	z = ++x;
	cout << "++" << x << " | x = " << z << endl;
	
	z = --x;
	cout << "--" << x << " | x = " << z << endl;
	
	z = x;
	z = z / y;
	cout << x << " = " << x << " / " << y << " | x = " << z << endl;
	
	z = x % y;
	cout << y << " = " << x << " % " << y << " | y = " << z << endl;
	
	z = x;
	z *= y;
	cout << x << " *= " << y << " | x = " << z << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_SoLon() {
	long long int a;
	int b;
	
	cout << endl;
	
	do {
		cout << "Nhập vào số a (ít nhất 10 chữ số): "; cin >> a;
	} while (a <= 999999999);

	b = a;

	cout << "\nVì kiểu số int có giới hạn: từ -2147483647 đến 2147483647 (4 bit)\n"
		 << "Vì số có 10 chữ số là số rất lớn nên chúng ta dùng long hoặc long long nếu chưa đủ\n"
		 << "Ngược lại nếu bạn biết số nhập vào là rất nhỏ, bạn cần dùng short\n"
		 << "Ở đây chúng ta dùng long long int\n"
		 << "Bạn vừa nhập số a (long long int) " << a
		 << "\nHoặc a sẻ là " << b << " Nếu chỉ dùng int\n";
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_LuyThua() {
	double x, y;
	int n;
	
	cout << setprecision(10);
	
	cout << "\nNhập vào x (số thực): "; cin >> x;
	cout << "Nhập vào số y (số thực): "; cin >> y;
	cout << "Nhập vào số n (số nguyên): "; cin >> n;
	
	cout << "Kết quả của " << x << "^" << n << " + " << y << "^" << n << " là " << pow(x, n) + pow(y, n) << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_DanhSachSinhVien() {
	cout << setw(30) << right << "DANH SÁCH SINH VIÊN" << setw(30) << left << endl;
	cout << endl;
	cout << setw(10) << left << "MSSV" << setw(30) << left << "HỌ VÀ TÊN" << setw(10) << left << "KHOA" << "ĐIỂM" << endl;
	for (int i = 1; i <= 50; i++){
		cout << "-";
		if(i == 50) {
			cout << endl;
			break;
		}
	}
	cout << setw(10) << left << "2312577" << setw(32) << left << "Trần Nguyễn Tuấn Anh" << setw(10) << left << "CNTT" << "5.0" << endl;
	cout << setw(10) << left << "2312571" << setw(28) << left << "Nguyễn Minh Anh" << setw(10) << left << "CNTT" << "5.0" << endl;
	
	for (int i = 1; i <= 50; i++) {
		cout << "=";
		if(i == 50) {
			cout << endl;
			break;
		}
	}

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs1_AsciiArtt() {
	wcout << R"(
	                          
                        _ooOoo_
                       o8888888o
                       88" . "88
                       (| -_- |)
                       O\  =  /O
                    ____/`---'\____
                  .'  \\|     |//  `.
                 /  \\|||  :  |||//  \
                /  _||||| -:- |||||_  \
                |   | \\\  -  /'| |   |
                | \_|  `\`---'//  |_/ |
                \  .-\__ `-. -'__/-.  /
              ___`. .'  /--.--\  `. .'___
           ."" '<  `.___\_<|>_/___.' _> \"".
          | | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. _.'_/_/  -' _.' /
===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
                        `=--=-'
	)" << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}