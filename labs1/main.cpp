int test1_labs1() {
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

int test2_cout() {
	cout << "\nHình (a):" << endl;
	cout << "* * * * *\n * * * * *\n* * * * *\n * * * * *\n* * * * *\n";
	
	cout << "\nHình (b):" << endl;
	cout << "* * * * *\n*       *\n*       *\n*       *\n* * * * *\n";
	
	cout << "\nHình (c):" << endl;
	cout << "* * * * *\n * * * * \n  * * *  \n   * *   \n    *     \n\n";
	
	return 0;
}

int test2_for() {
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

int test2_labs1() {
	int a;
	for ( ; ; ) {
		cout << "* Dùng cout [1]\n* Dùng for [2]\n[1/2]: "; cin >> a; 
		if (a == 1) { 
			test2_cout();
			break;
		} else if ( a == 2 ) {
			test2_for();
			break;
		}
	}
	
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}