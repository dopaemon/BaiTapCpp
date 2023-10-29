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

	return 0;
}
