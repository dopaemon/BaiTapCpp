int GiaiPTBacNhat(double a, double b) {
	if(a == 0 && b == 0) {
		cout << "Phương trình có vô số nghiệm." << endl;
	} else if (a == 0 && b != 0) {
		cout << "Phương trình vô nghiệm." << endl;
	} else {
		cout << "phương trình có nghiệm duy nhất x = " << (-b / a) << endl;
	}
	return 0;
}

int Labs3_GiaiPTBacNhat() {
	double a, b;
	cout << "Nhập vào số a: "; cin >> a;
	cout << "Nhập vào số b: "; cin >> b;

	GiaiPTBacNhat(a, b);

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double PhepToanSoHoc(double x, double y, char a) {
	switch (a) {
		case '+':
			return x + y;
			break;
		case '-':
			return x - y;
			break;
		case '*':
			return x * y;
			break;
		case '/':
			return x / y;
			break;
		default:
			cout << "Chỉ chấp nhận: + -* /" << endl;
			return 0;
			break;
	}
}

int Labs3_PhepToanSoHoc() {
	double x, y;
	char a;
	cout << "\nNhập vào x: "; cin >> x;
	cout << "\nNhập vào y: "; cin >> y;

	for ( ; ; ) {
		cout << "Nhập vào +, -, *, / hoặc 0 để thoát: "; cin >> a;
		if(a == '0') { break; }
		cout << "\n" << x << " " << a << " " << y << " = " << PhepToanSoHoc(x, y, a) << endl;
	}

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int Labs3_output(int number) {
	if (number < 10) {
		cout << number;
	} else {
		char c = 'A' + number - 10;
		cout << c;
	}
	return 0;
}

unsigned int Labs3_TimLuyThua(unsigned int b, unsigned int n) {
	unsigned int v = 1;
	while (v * b <= n) {
		v *= b;
	}
	return v;
}

int Labs3_DoiCoSo(unsigned int n, unsigned int b) {
	unsigned int v = Labs3_TimLuyThua(b, n);

	while (v > 0) {
		if (n < v) {
			Labs3_output(0);
		} else {
			unsigned int so = n / v;
			Labs3_output(so);
			n -= so * v;
		}
	v /= b;
	}
	return 0;
}

int Labs3_ChuyenDoiCoSo() {
	unsigned int n, b;

	do {
                cout << "Nhập vào n [n > 0]: "; cin >> n;
        } while (n <= 0);

	do {
		cout << "Nhập vào b [1 < b < 17]: "; cin >> b;
	} while (b <= 1 || b >= 17);

	cout << "\nGiá trị " << n << " ở hệ cơ số " << b << " là: "; Labs3_DoiCoSo(n, b); cout << endl;

	// 10 11 12 13 14 15 16
	// A  B  C  D  E  F  G

	// Start Menu
        int menu = RM();
        // End Menu
        return menu;
}

int Labs3_SoNguyen_a(unsigned int n) {
	// Xuất các số từ 1 tới n, các số cách nhau 1 dấu Tab và mỗi dòng chứa 10 số.
	cout << "\nSố bạn nhập sau khi in ra là: " << endl;
	for(int i = 0; i <= n; i++) {
		cout << i << "\t";
		if (i % 10 == 0) { cout << endl; }
	}
	return 0;
}

int Labs3_SoNguyen_b(unsigned int n) {
	// Đếm số lượng các số chia hết cho 3 nhưng không chia hết cho 4 trong đoạn [1..n].
	int s = 0;
	for(int i = 0; i <= n; i++) {
		if ((i % 3 == 0) && (i % 4 == 1)) { s = s + 1; }
	}

	cout << "\nCó " << s << " số chia hết cho 3 nhưng không chia hết cho 4 từ 0 đến " << n;

	return 0;
}

int Labs3_SoNguyen_c(unsigned int n) {
	// Đếm số lượng chữ số của n. Ví dụ: n = 12345 thì số lượng chữ số là 5.
	int i = 0;
	int a = n;
	for( ; ; i++) {
		if (n > 0) {
			n = n / 10;
		} else {
			break;
		}
	}

	cout << "\nSố " << a << " có " << i << " số\n";

	return 0;
}

int Labs3_SoNguyen_d(unsigned int n) {
	// Đảo ngược số n. Ví dụ: n = 12345 thì sau khi đảo ngược, n = 54321.
	int b = n;
	int a = 0;
	for (int i = 0; ; ) {
		if (n > 0) {
			i = n % 10;
			a = a * 10 + i;
			n = n / 10;
		} else {
			break;
		}
	}

	cout << "\nSố " << b << " đảo ngược là: " << a << endl;
	return 0;
}

int Labs3_SoNguyen_e(unsigned int n) {
	unsigned int a = n;
	// Tính tổng các chữ số trong n. Ví dụ: n = 12345 thì tổng các chữ số là 1+2+3+4+5 = 15.
	int s = 0;
	for(int i = 0; ; ) {
		if ( n > 0 ) {
			i = n % 10;
			s += i;
			n = n / 10;
		} else {
			break;
		}
	}

	cout << "\nTổng " << a << " là: " << s << endl;
	return 0;
}

int Labs3_SoNguyen_f(unsigned int n) {
	unsigned int a = n;
	for ( ; ; ) {
		if ( n >= 10) {
			n = n / 10;
		} else {
			break;
		}
	}

	cout << "\nSố đầu tiên của số " << a << " là: " << n << endl;

	return 0;
}

int Labs3_SoNguyen_g(unsigned int n) {
	string binary = "";

	if (n == 0) { binary = "0"; } else {
		for (int i = 0; ; ) {
			if (n > 0) {
				i = n % 2;
				binary = to_string(i) + binary;
				n = n / 2;
			} else { break; }
		}

		cout << "\nSố " << n << " chuyển qua binary là: " << binary << endl;
	}

	return 0;
}

int Labs3_SoNguyen_h(unsigned int n) {
	int s = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			s += i;
		}
	}

	bool a = false;

	if(s == n) { a = true; }

	if (a) { cout << "\n" << n << " là số hoàn hảo\n"; }
	else { cout << "\n" << n << " không phải số hoàn hảo\n"; }
	return 0;
}

int Labs3_SoNguyen_i(unsigned int n) {
	int b = n;
	cout << "\nTừ 1 đến " << b << " : ";
	for (int j = 1; j <= b; j++) {
		bool a = false;
		int s = 0;
	        for (int i = 1; i <= j / 2; i++) {
	                if (j % i == 0) {
	                        s += i;
	                }
	        }

	        if(s == j) { a = true; }

		if (a) {
			cout << j << "  ";
		}
	}
        return 0;
}

int Labs3_SoNguyen_j(unsigned int n) {
	int s = 0;
//	for (int i = 0; i <= n; i++) {
//		s += i;
//		if ((s + i + 1) > n) {
//			break;
//		}

	for (int i = 1; i <= n; i++) {
		s = s + i;
		if (s > n) {
			s = s - i;
		}
	}
	cout << "\nSố nguyên m lớn nhất khi tổng 1+2+…+m ≤ " << n << " m là: " << s << endl;
	return 0;
}

int Labs3_SoNguyen() {
	unsigned int n;

	do {
		cout << "\nNhập vào N [N>0]: "; cin >> n;
	} while (n < 0);

	Labs3_SoNguyen_a(n);
	Labs3_SoNguyen_b(n);
	Labs3_SoNguyen_c(n);
	Labs3_SoNguyen_d(n);
	Labs3_SoNguyen_e(n);
	Labs3_SoNguyen_f(n);
	Labs3_SoNguyen_g(n);
	Labs3_SoNguyen_h(n);
	Labs3_SoNguyen_i(n);
	Labs3_SoNguyen_j(n);

	// Start Menu
        int menu = RM();
        // End Menu
        return menu;
}
