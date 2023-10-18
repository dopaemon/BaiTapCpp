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