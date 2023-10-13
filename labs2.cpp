double Labs2_ChuViHinhTron(double r) {
	return (r * 2) * PI;
}

double Labs2_DienTichHinhTron(double r) {
	return (r * r) * PI;
}

int Labs2_ChuViDienTich() {
	do {
		int a;
		double r;
		cout << "\nChu vi hình tròn [1]\n"
			 << "Diện tích hình tròn [2]\n"
			 << "Lựa chọn [1/2]: ";
		cin >> a;
		if(a == 1) {
			cout << "Nhập vào (bán kính) r: ";
			cin >> r;
			cout << "Chu vi hình tròn bán kính " << r << " Là " << Labs2_ChuViHinhTron(r) << endl;
			break;
		} else if (a == 2) {
			cout << "Nhập vào (bán kính) r: ";
			cin >> r;
			cout << "Diện tích hình tròn bán kính " << r << " Là " << Labs2_DienTichHinhTron(r) << endl;
			break;
		}
	} while (true);

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int labs2_time(int itime) {
	int hour = itime / 3600;
	int second = itime % 60;
	int minute = (itime % 3600) / 60;
	cout << itime << " giây bằng " << hour << ":" << minute << ":" << second << endl;
	return 0;
}

int Labs2_time_corvert() {
	int a;
	cout << "Nhập vào số giây bạn muốn chuyển thành giờ [ex: 60]: ";
	cin >> a;
	labs2_time(a);
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double Labs2_TinhCanhBen(int a, int b, int h) {
	/*
	 * a: Đáy lớn
	 * b: Đáy bé
	 * h: Chiều cao
	 * Công thức cạnh bên: sqrt((((a - b) / 2 ) * ((a - b) / 2)) + (h * h))
	 */
	 
	double CanhBen;
	CanhBen = sqrt((((a - b) / 2 ) * ((a - b) / 2)) + (h * h));
	return CanhBen;
	
}

double Labs2_TinhChuVi(int a, int b, int h) {
	/*
	 * a: Đáy lớn
	 * b: Đáy bé
	 * h: Chiều cao
	 * CanhBen: Cạnh Bên
	 * Công Thức Chu Vi: a + b + 2 * CanhBen
	 */
	double CanhBen;
	CanhBen = Labs2_TinhCanhBen(a, b, h);
	
	double ChuVi;
	ChuVi = a + b + 2 * CanhBen;
	
	return CanhBen;
}

double Labs2_TinhDienTich(int a, int b, int h) {
	/*
	 * a: Đáy lớn
	 * b: Đáy bé
	 * h: Chiều cao
	 * CanhBen: Cạnh Bên
	 * Công Thức Diện Tích: ((a + b) * h) / 2
	 */
	return ((a + b) * h) / 2;
}

int Labs2_HinhThang() {
	int a, b, c;
	cout << "\nNhập vào đáy lớn (a): "; cin >> a;
	cout << "\nNhập vào đáy bé (b): "; cin >> b;
	cout << "\nNhập vào chiều cao (c): "; cin >> c;
	
	cout << "\nĐộ dài của cạnh bên là: " << Labs2_TinhCanhBen(a, b, c) << endl;
	cout << "Chu vi của hình thang đã nhập là: " << Labs2_TinhChuVi(a, b, c) << endl;
	cout << "Diện tích của hình thang đã nhập là: " << Labs2_TinhDienTich(a, b, c) << endl;
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double Labs2_TheTichTruTron(double r, double h) {
	// v = 4*PI*(r*r)*h;
	double v;
	v = 4 * PI * (r * r) * h;
	return v;
}

double Labs2_DienTichXungQuanh(double r, double h) {
	// sxq = 2 * PI * r * h;
	double sxq;
	sxq = 2 * PI * r * h;
	return sxq;
}

double Labs2_DienTichToanPhan(double r, double h) {
	// stp = (2 * PI * r * h) + (2 * PI *(r*r));
	double stp;
	stp = (2 * PI * r * h) + (2 * PI *(r*r));
	return stp;
}

double Labs2_HinhTruTron() {
	double h, r;
	cout << "\nNhập vào h (chiều cao): "; cin >> h;
	cout << "Nhập vào r (bán kính đáy): "; cin >> r;
	
	cout << "\nThể tích hình trụ tròn: " << Labs2_TheTichTruTron(r, h)
		 << "\nDiện tích xung quanh: " << Labs2_DienTichXungQuanh(r, h)
		 << "\nDiện tích toàn phần: " << Labs2_DienTichToanPhan(r, h)
		 << endl;
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double HinhCau_TheTich_DienTich(double r, double &thetich, double &dientich) {
	dientich = (4 / 3) * PI * (r * r);
	thetich = 4 * PI * (r * r);
	return 0;
}

double Labs2_HinhCau() {
	double thetich, dientich, r;
	
	cout << "\nNhập vào r (bán kính hình cầu): "; cin >> r;

	HinhCau_TheTich_DienTich(r, thetich, dientich);

	cout << "\nThể tích khối cầu: " << thetich;
	cout << "\nDiện tích mặt cầu: " << dientich << endl;
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double TinhChiSo_BMI(double w, double h) {
	double bmi = w / (h * h);
	return bmi;
}

double Labs2_ChiSoCoThe() {
	double w, h;
	
	cout << "\nNhập vào chiều cao (đơn vị mét): "; cin >> h;
	cout << "\nNhập vào cân nặng (đơn vị kg): "; cin >> w;

	cout << endl << "Chỉ số BMI của bạn với cân nặng " << w << "Kg và chiều cao " << h << "m là " << TinhChiSo_BMI(w, h) << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double KhoanCach(double xa, double xb, double ya, double yb) {
	double d;
	d = sqrt(((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya)));
	return d;
}

double Labs2_KhoanCach() {
	double xa, xb, ya, yb;
	cout << "\nNhập vào giá trị x(a): "; cin >> xa;
	cout << "\nNhập vào giá trị y(a): "; cin >> ya;
	cout << "\nNhập vào giá trị x(b): "; cin >> xb;
	cout << "\nNhập vào giá trị y(b): "; cin >> yb;
	
	cout << "Khoảng cách d của điểm A(" << xa << ":" << ya << ") và điểm B(" << xb << ":" << yb << ") là: " << KhoanCach(xa, xb, ya, yb) << endl; 

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double DoLanhCuaGio(double t, double v) {
	double w;
	
	w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * v * 0.16;
	return w;
}

double Labs2_DoLanhCuaGio() {
	double t, v;
	
	cout << "\nLưu ý: nhiệt độ phải lớn hơn -51 độ và bé hơn 51 độ\n       vận tốc gió phải lớn hơn 2 và nhỏ hơn 121\n\n";
	
	cout << "\nNhập vào nhiệt độ (đơn vị: Fahrenheit): "; cin >> t;
	cout << "Nhập vào vận tốc gió (đơn vị: dặm/giờ): "; cin >> v;
	for ( ; ; ) { if ((t < -51) && (t > 51)) { cout << "\nNhập vào nhiệt độ (đơn vị: Fahrenheit): "; cin >> t; } else { break; } }
	for ( ; ; ) { if ((v < 2) && (v > 121)) {cout << "Nhập vào vận tốc gió (đơn vị: dặm/giờ): "; cin >> v; } else { break; } }

	cout << "\nĐộ lạnh của gió với nhiệt độ " << t << "°F và vận tốc gió " << v << " Dặm/Giờ là: " << DoLanhCuaGio(t, v);

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

double ChuyenDoiHeToaDo(double phi, double delta, double h, double &docao, double &phuongvi) {
	docao = asin(sin(phi) * sin(delta) + cos(phi) * cos(delta) * cos(h));
	phuongvi = acos((cos(phi) * sin(delta) - sin(phi) * cos(delta) * cos(h)) / cos(docao));
	return 0;
}

double Labs2_ChuyenDoiHeToaDo() {
	double docao, phuongvi, phi, delta, h;
	
	cout << "\nNhập vào φ: "; cin >> phi;
	cout << "\nNhập vào δ: "; cin >> delta;

	ChuyenDoiHeToaDo(phi, delta, h, docao, phuongvi);

	cout << "\nĐộ cao: " << docao << endl;
	cout << "\nPhương vị: " << phuongvi << endl;
	
	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int ThuTrongTuan(int d, int m, int y) {
	int t = y - (14 - m) / 12;
	int x = t + t / 4 - t / 100 + t / 400;
	int k = m + 12 * ((14 -m) / 12) - 2;
	int w = (d + x + (31 * k) / 12) % 7;
	
	return w;
}

int Labs2_ThuTrongTuan() {
	int d, m, y;
	
	cout << "\nNhập vào ngày: "; cin >> d;
	cout << "Nhập vào tháng: "; cin >> m;
	cout << "Nhập vào năm: "; cin >> y;
	
	cout << "\nDựa vào ngày " << d << " Tháng " << m << " Năm " << y << " Có thể tính được đó là tuần " << ThuTrongTuan(d, m, y) << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}

int ChuyenDoiHeMau(int r, int g, int b, int &c, int &m, int &y, int &k) {
	int temp = max({r, g, b});
	k = 1 - temp / 255;
	c = (1 - r / 255 - k) / (1 - k);
	m = (1 - g / 255 - k) / (1 - k);
	y = (1 - b / 255 - k) / (1 - k);
	
	return 0;
}

int Labs2_ChuyenDoiHeMau() {
	int r, g, b, c, m, y, k;
	cout << "\nHệ màu RGB với 3 giá trị R, G, B luôn lớn -1 và nhỏ hơn 256" << endl;
	for ( ; ; ) {
		cout << "Nhập vào R: "; cin >> r;
		cout << "Nhập vào G: "; cin >> g;
		cout << "Nhập vào B: "; cin >> b;
		
		if (((r > -1) && (r < 256)) && ((b > -1) && (b < 256)) && ((g > -1) && (g < 256))) {
			break;
		}
	}
	
	ChuyenDoiHeMau(r, g, b, c, m, y, k);
	
	cout << "\nSau khi chuyển đổi hệ màu RGB: " << r << ", " << g << ", " << b << endl;
	cout << "Ta có hệ màu CMYK với giá trị: " << c << ", " << m << ", " << y << ", " << k << endl;

	// Start Menu
	int menu = RM();
	// End Menu
	return menu;
}