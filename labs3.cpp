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

int Labs3_ChiSoKhoiCoThe() {
	double w, h;
	cout << "\nNhập vào chiều cao (đơn vị mét): "; cin >> h;
	cout << "Nhập vào cân nặng (đơn vị kg): "; cin >> w;

	double bmi = w / (h * h);

	cout << "Chỉ số khối cơ thể là: " << bmi << endl;

	if (bmi < 15) {
		cout << "Trạng thái cơ thể: Đói khát";
	} else if (bmi < 17.5) {
		cout << "Trạng thái cơ thể: Biếng ăn";
	} else if (bmi < 18.5) {
		cout << "Trạng thái cơ thể: Thiếu cân";
	} else if ((bmi >= 18.5) && (bmi < 25)) {
		cout << "Trạng thái cơ thể: Lý tưởng";
	} else if ((bmi >= 25) && (bmi < 30)) {
		cout << "Trạng thái cơ thể: Thừa cân";
	} else if ((bmi >= 30) && (bmi < 40)) {
		cout << "Trạng thái cơ thể: Béo phì";
	} else if (bmi >= 40) {
		cout << "Trạng thái cơ thể: Trẻ em bị béo phì";
	}

	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}

string ChuyenDoiHeCoSo(int n, int b) {
    string ketQua = "";
    while (n > 0) {
        int chuSo = n % b;
        char kyTuChuSo;
        if (chuSo < 10) {
            kyTuChuSo = chuSo + '0';
        } else {
            kyTuChuSo = chuSo - 10 + 'A';
        }
        ketQua = kyTuChuSo + ketQua;
        n /= b;
    }
    return ketQua.empty() ? "0" : ketQua;
}

int Labs3_ChuyenDoiHeCoSo() {
	int n, b;

    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    cout << "Chọn hệ cơ số:\n";
    cout << "1. Đổi sang hệ nhị phân (b=2)\n";
    cout << "2. Đổi sang hệ bát phân (b=8)\n";
    cout << "3. Đổi sang hệ thập lục phân (b=16)\n";
    cout << "4. Đổi sang hệ cơ số 7 (b=7)\n";

    cout << "[1, 2, 3, 4]: ";
    cin >> b;

    if ((b < 2) || (b > 16) || (b > 10 && b != 7)) {
        cout << "Hệ cơ số không hợp lệ.\n";
    } else {
        string ketQua = ChuyenDoiHeCoSo(n, b);
        cout << "Kết quả: " << ketQua << endl;
    }

	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}

int Labs3_SoNguyenTo_a(int n) {
	if (n < 2) {
		cout << "\n" << n << " không phải số nguyên tố" << endl;
	} else {
		int c = 0;
		for(int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				c++;
			}
		}
		
		if (c != 0) {
			cout << "\n" << n << " không phải số nguyên tố" << endl;
		} else {
			cout << "\n" << n << " là số nguyên tố" << endl;
		}
	}
	return 0;
}

int Labs3_SoNguyenTo_b(int n) {
	bool chk;
	int a[n];
	int count = 0;

	if (n < 2) { chk = false; }
	else { chk = true; }
	for (int j = 2; j <= n; j++) {
		chk = true;
		for (int i = 2; i <= sqrt(j); i++) {
			if (j % i == 0) {
				chk = false;
				break;
			}
		}
		if (chk) { a[count] = j; count++; }
	}
	for (int i = 0; i < count; i++) {
		cout << a[i] << "\t";
		if ((i + 1) % 5 == 0) {
			cout << endl;
		}
	}
	if (count % 5 != 0) {
		cout << endl;
	}

	return 0;
}

int Labs3_SoNguyenTo_c(int n) {
	bool chk;
	int count = 0;

	if (n < 2) { chk = false; }
	else { chk = true; }
	for (int j = 2; j <= n; j++) {
		chk = true;
		for (int i = 2; i <= sqrt(j); i++) {
			if (j % i == 0) {
				chk = false;
				break;
			}
		}
		if (chk) { count++; }
	}
	cout << "Có " << count << " số nguyên tố trong dãy từ 1 đến " << n << endl;

	return 0;
}

int Labs3_SoNguyenTo_d(int n) {
	int count = 0;
	int a[n];
	int b[n];
	int j = 2;
	int p = 0;
	bool chk;

	for (int i = 2; i <= n; ++i) {
		if (n % i == 0) {
			a[j] = i;
			j++;
		}
	}

	for (int i = 2; i < j; i++) {
		bool chk = true;

		for (int m = 2; m <= sqrt(a[i]); m++) {
			if (a[i] % m == 0) {
				chk = false;
				break;
			}
		}

		if (chk) {
			b[p] = a[i];
			p++;
			count = count + a[i];
		}
	}

	cout << "Tổng của các ước số (Là số nguyên tố) là: ";
	for (int o = 0; o < p; o++) {
        if (o < p - 1) {
            cout << b[o] << ", ";
        } else {
            cout << b[o];
        }
    }
	cout << " là " << count << endl;

	return 0;
}

int Labs3_SoNguyenTo_e(int n) {
	cout << "Phân tích " << n << " thành tích các thừa số nguyên tố: ";

    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            cout << i;
            n /= i;

            if (n > 1) {
                cout << " * ";
            }
        }
    }

    cout << endl;
	
	return 0;
}

int Labs3_SoNguyenTo() {
	int n;
	cout << "Nhập vào N: ";
	cin >> n;
	cout << endl << "a) Kiểm tra n có phải là số nguyên tố (sử dụng vòng lặp for).";
	Labs3_SoNguyenTo_a(n); cout << endl << "b) Xuất ra màn hình các số nguyên tố trong phạm vi từ 1 tới n, các số cách nhau 1 dấu Tab. Mỗi dòng chứa 5 số." << endl;
	Labs3_SoNguyenTo_b(n); cout << endl << "c) Đếm số lượng số nguyên tố trong phạm vi từ 1 tới n." << endl;
	Labs3_SoNguyenTo_c(n); cout << endl << "d) Tính tổng các ước số nguyên tố của n. Ví dụ: n = 30 có các ước 1, 2, 3, 5, 6, 10, 15, 30. Tổng các ước số nguyên tố là 2 + 3 + 5 = 10." << endl;
	Labs3_SoNguyenTo_d(n); cout << endl << "e) Phân tích n thành tích các thừa số nguyên tố. Ví dụ: n = 12 = 2.2.3, n = 30 = 2.3.5." << endl;
	Labs3_SoNguyenTo_e(n);

	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}
