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
	cout << "Nhập vào x: "; cin >> x;
	
	double kq_exp = Labs4_exp(x, CX);
	double kq_sin = Labs4_sin(x, CX);
	double kq_cos = Labs4_cos(x, CX);
	
	cout << "e^" << x << " ≈ " << kq_exp << endl;
	cout << "sin(" << x << ") ≈ " << kq_sin << endl;
	cout << "cos(" << x << ") ≈ " << kq_cos << endl;

	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}

int Labs4_soFibonacciN(int n) {
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

void labs4_lietKeFibonacciDenN(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
	return;
}

void labs4_lietKeNFibonacciDau(int n) {
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
	int n;
	cout << "Nhập vào số N: "; cin >> n;
	cout << "Số Fibonacci thứ " << n << " là: " << Labs4_soFibonacciN(n) << endl;
	cout << "\nCác số Fibonacci nhỏ hơn hoặc bằng " << n << " là:\n";
    labs4_lietKeFibonacciDenN(n);
	cout << "\n\nNhập số lượng số Fibonacci muốn hiển thị: ";
    cin >> n;
    cout << "\nCác số Fibonacci đầu tiên là:\n";
    labs4_lietKeNFibonacciDau(n);

	// Start Menu
    int menu = RM();
    // End Menu
    return menu;
}