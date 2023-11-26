int Labs4_SoNguyen() {
	unsigned int n, a;

	cout << "Nhập vào số Nguyên N: "; cin >> n;
	cout << endl;

	cout << "Menu Số Nguyên: " << endl
		 << "1) Xuất các số từ 1 tới n, các số cách nhau 1 dấu Tab và mỗi dòng chứa 10 số." << endl
		 << "2) Đếm số lượng các số chia hết cho 3 nhưng không chia hết cho 4 trong đoạn [1..n]." << endl
		 << "3) Đếm số lượng chữ số của n. Ví dụ: n = 12345 thì số lượng chữ số là 5." << endl
		 << "4) Đảo ngược số n. Ví dụ: n = 12345 thì sau khi đảo ngược, n = 54321." << endl
		 << "5) Tính tổng các chữ số trong n. Ví dụ: n = 12345 thì tổng các chữ số là 1+2+3+4+5 = 15." << endl
		 << "6) Cho biết chữ số đầu tiên trong n. Ví dụ: n = 12345 thì chữ số đầu tiên là 1." << endl
		 << "7) Đổi số n sang hệ nhị phân. Ví dụ: n = 1234/10 tương ứng với 10011010010/2."<< endl
		 << "8) Kiểm tra số n có phải là số hoàn hảo (còn gọi là số hoàn chỉnh, số hoàn thiện)? \nBiết rằng, số hoàn hảo là số có tổng các ước bằng hai lần chính nó. Ví dụ: 6, 28 là \nsố hoàn chỉnh vì 6 = (1+2+3+6)/2, 28 = (1+2+4+7+14+28)/2." << endl
		 << "9) Xuất tất cả các số hoàn chỉnh trong phạm vi [1..n]. Ví dụ: Với n = 30 thì xuất 6, 28." << endl
		 << "10) Tìm số nguyên m lớn nhất sao cho tổng 1+2+…+m ≤ n." << endl;

	do {
		cout << "\nChọn chức năng [0/10]: "; cin >> a;
	} while (n < 0);
	
	switch(a) {
		case 1:
			cout << "1) Xuất các số từ 1 tới n, các số cách nhau 1 dấu Tab và mỗi dòng chứa 10 số." << endl;
			Labs3_SoNguyen_a(n); // 1
			break;
		case 2:
			cout << "2) Đếm số lượng các số chia hết cho 3 nhưng không chia hết cho 4 trong đoạn [1..n]." << endl;
			Labs3_SoNguyen_b(n); // 2
			break;
		case 3:
			cout << "3) Đếm số lượng chữ số của n. Ví dụ: n = 12345 thì số lượng chữ số là 5." << endl;
			Labs3_SoNguyen_c(n); // 3
			break;
		case 4:
			cout << "4) Đảo ngược số n. Ví dụ: n = 12345 thì sau khi đảo ngược, n = 54321." << endl;
			Labs3_SoNguyen_d(n); // 4
			break;
		case 5:
			cout << "5) Tính tổng các chữ số trong n. Ví dụ: n = 12345 thì tổng các chữ số là 1+2+3+4+5 = 15." << endl;
			Labs3_SoNguyen_e(n); // 5
			break;
		case 6:
			cout << "6) Cho biết chữ số đầu tiên trong n. Ví dụ: n = 12345 thì chữ số đầu tiên là 1." << endl;
			Labs3_SoNguyen_f(n); // 6
			break;
		case 7:
			cout << "7) Đổi số n sang hệ nhị phân. Ví dụ: n = 1234/10 tương ứng với 10011010010/2." << endl;
			Labs3_SoNguyen_g(n); // 7
			break;
		case 8:
			cout << "8) Kiểm tra số n có phải là số hoàn hảo (còn gọi là số hoàn chỉnh, số hoàn thiện)? \nBiết rằng, số hoàn hảo là số có tổng các ước bằng hai lần chính nó. Ví dụ: 6, 28 là \nsố hoàn chỉnh vì 6 = (1+2+3+6)/2, 28 = (1+2+4+7+14+28)/2." << endl;
			Labs3_SoNguyen_h(n); // 8
			break;
		case 9:
			cout << "9) Xuất tất cả các số hoàn chỉnh trong phạm vi [1..n]. Ví dụ: Với n = 30 thì xuất 6, 28." << endl;
			Labs3_SoNguyen_i(n); // 9
			break;
		case 10:
			cout << "10) Tìm số nguyên m lớn nhất sao cho tổng 1+2+…+m ≤ n." << endl;
			Labs3_SoNguyen_j(n); // 10
			break;
		default:
			cout << "Không có lựa chọn . . . ";
			break;
	}

	// Start Menu
        int menu = RM();
        // End Menu
        return menu;
}

double Labs4_tuyentinh(double x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

double Labs4_luythua(double co_so, int so_mu) {
    if (so_mu == 0) {
        return 1;
    } else if (so_mu > 0) {
        double ket_qua = 1.0;
        for (int i = 0; i < so_mu; ++i) {
            ket_qua *= co_so;
        }
        return ket_qua;
    } else {
        return 1.0 / Labs4_luythua(co_so, -so_mu);
    }
}

double Labs4_giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        double ket_qua = 1.0;
        for (int i = 2; i <= n; ++i) {
            ket_qua *= i;
        }
        return ket_qua;
    }
}

double Labs4_exp(double x, double do_chinh_xac) {
    double ket_qua = 1.0;
    double hang_so = 1.0;
    int i = 1;

    while (Labs4_tuyentinh(hang_so) > do_chinh_xac) {
        hang_so = hang_so * x / i;
        ket_qua += hang_so;
        i++;
    }

    return ket_qua;
}

double Labs4_sin(double x, double do_chinh_xac) {
    double ket_qua = 0.0;
    double hang_so = x;
    int i = 1;

    while (Labs4_tuyentinh(hang_so) > do_chinh_xac) {
        ket_qua += (i % 2 == 1 ? 1 : -1) * hang_so / Labs4_giaithua(2 * i - 1);
        hang_so = hang_so * x * x / ((2 * i) * (2 * i + 1));
        i++;
    }

    return ket_qua;
}

double Labs4_cos(double x, double do_chinh_xac) {
    double ket_qua = 1.0;
    double hang_so = 1.0;
    int i = 1;

    while (Labs4_tuyentinh(hang_so) > do_chinh_xac) {
        ket_qua += (i % 2 == 0 ? 1 : -1) * hang_so / Labs4_giaithua(2 * i);
        hang_so = hang_so * x * x / ((2 * i - 1) * (2 * i));
        i++;
    }

    return ket_qua;
}

int Labs4_KhaiTrienTaylor() {
	double x;
	int a;
	
	cout << "1) Tính e^x" << endl
		 << "2) Tính sin(x)" << endl
		 << "3) Tính cos(x)" << endl
		 << "[1/3]: "; cin >> a;
	
	cout << "Nhập vào x: "; cin >> x;
	
	double kq_exp = Labs4_exp(x, CX);
	double kq_sin = Labs4_sin(x, CX);
	double kq_cos = Labs4_cos(x, CX);
	
	switch(a) {
		case 1:
			cout << "e^" << x << " ≈ " << kq_exp << endl;
			break;
		case 2:
			cout << "sin(" << x << ") ≈ " << kq_sin << endl;
			break;
		case 3:
			cout << "cos(" << x << ") ≈ " << kq_cos << endl;
			break;
		default:
			cout << "Không có lựa chọn . . . ";
			break;
	}
	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}

int Labs4_SoFinbonacci_a(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

void Labs4_SoFinbonacci_b(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
	return;
}

void Labs4_SoFinbonacci_c(int n) {
    if (n >= 1) {
        cout << "0 ";
    }
    if (n >= 2) {
        cout << "1 ";
    }

    int a = 0, b = 1;
    for (int i = 2; i < n; ++i) {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
	return;
}

int Labs4_SoFinbonacci() {
	int n, a;
	cout << "1) Tìm và xuất ra số Fibonacci thứ n." << endl
		 << "2) Liệt kê các số Fibonacci nhỏ hơn hoặc bằng n." << endl
		 << "3) Liệt kê n số Fibonacci đầu tiên." << endl
		 << "[1/3]: "; cin >> a;
		 
	cout << "Nhập vào số N: "; cin >> n;
	
	switch(a) {
		case 1:
			cout << "Số Fibonacci thứ " << n << " là: " << Labs4_SoFinbonacci_a(n) << endl;
			break;
		case 2:
			cout << "\nCác số Fibonacci nhỏ hơn hoặc bằng " << n << " là:\n";
			Labs4_SoFinbonacci_b(n);
			break;
		case 3:
			cout << "\nCác số Fibonacci đầu tiên là:\n";
			Labs4_SoFinbonacci_c(n);
			break;
		default:
			cout << "Không có lựa chọn . . . ";
			break;
	}
	
	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}