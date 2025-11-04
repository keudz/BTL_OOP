#pragma once
#include "Sach.h"
#include "DocGia.h"

class ThuVien {
	private:
	    vector<Sach> listSach;
	    vector<DocGia> listDG;
	public:
	    // Quan ly tai lieu
	    void hienThiTatCaSach();
	    void themSach();
	    void xoaSachTheoMa();
	    void timSachTheoMa();
	    void suaThongTinSach();
	    void locSachTheoTheLoai();
	    void sapXepSachTheoNamXB();
	    void taiFileSach();
	    void luuFileSach();
	
	    // Quan ly doc gia
	    void hienThiTatCaDocGia();
	    void themDocGia();
	    void xoaDocGiaTheoMa();
	    void timDocGiaTheoMa();
	    void suaThongTinDocGia();
	    void sapXepDocGiaTheoNamSinh();
	    void taiFileDocGia(); 
	    void luuFileDocGia();

};
 
void ThuVien::themSach() {
    Sach Sach;
    string luaChon = "y";
    while(luaChon == "y" || luaChon == "Y") {
    	cin.ignore();
        cin >> Sach;
        listSach.push_back(Sach);
        cout << "\nThem thanh cong!\n";
        cout << "\nBan co muon them tiep khong (Y/N): ";
        cin >> luaChon;
        while(true) {
            if(luaChon != "y" && luaChon != "Y" && luaChon != "n" && luaChon != "N") {
                cout << "Lua chon khong hop le! Moi ban nhap lai: ";
                cin >> luaChon;
            }
            else {
                break;
            }
        }
    }
}

void ThuVien::hienThiTatCaSach() {
	cout << "------------------------------------------------------------ DANH SACH SACH ----------------------------------------------------\n";
    cout << "\n+-------------------------------------------------------------------------------------------------------------------------------+\n";
    cout << "| STT |  Ma   |               Ten               |          Tac gia          |   The loai    |       Nha XB        | Nam XB | SL |\n";
    cout << "+-------------------------------------------------------------------------------------------------------------------------------+\n";
    for(int i = 0; i < listSach.size(); i++) {
        Sach x = listSach[i];
        printf("|  %-3d| %-5s | %-31s | %-25s | %-13s | %-19s |  %-5d | %-2d |\n", i + 1,
		x.getMa().c_str(), x.getTen().c_str(), x.getTG().c_str(), x.getTL().c_str(),
		x.getNhaXB().c_str(), x.getNamXB(), x.getSL()); 
    }
    cout << "+-------------------------------------------------------------------------------------------------------------------------------+\n";
}

void ThuVien::xoaSachTheoMa() {
	cin.ignore();
    string maCanXoa = nhapChuoi("Nhap ma tai lieu can xoa: ");
    bool timThay = false;
    for(int i = 0; i < listSach.size(); i++) {
        if(toUpper(listSach[i].getMa()) == toUpper(maCanXoa)) {
            timThay = true;
            cout << "Tim thay tai lieu:\n" << listSach[i];;
            string xacNhan;
            while(true) {
                xacNhan = nhapChuoi("\n\nBan co chac muon xoa tai lieu nay (Y/N)? ");
                if(xacNhan == "Y" || xacNhan == "y") {
                    listSach.erase(listSach.begin() + i);
                    cout << "Da xoa tai lieu thanh cong!\n";
                    break;
                } else if (xacNhan == "N" || xacNhan == "n") {
                    cout << "Huy thao tac xoa.\n";
                    break;
                } else {
                    cout << "Vui long chi nhap Y hoac N.\n";
                }
            }
            break; 
        }
    }
    if(!timThay) {
    	cout << "Khong tim thay tai lieu co ma: " << maCanXoa << endl;
	}
}

void ThuVien::timSachTheoMa() {
	cin.ignore();
    string maCanTim = nhapChuoi("Nhap ma tai lieu can tim: ");
    bool timThay = false;
    cout << "\n=== KET QUA TIM KIEM THEO MA ===\n";
    for (int i = 0; i < listSach.size(); i++) {
        if (toUpper(listSach[i].getMa()) == toUpper(maCanTim)) {
            cout << listSach[i];
            timThay = true;
            break; 
        }
    }
    if (!timThay)
        cout << "Khong tim thay tai lieu co ma: " << maCanTim << endl;
}

void ThuVien::suaThongTinSach() {
	cin.ignore();
    string maCanSua = nhapChuoi("Nhap ma tai lieu can sua");
    bool timThay = false;
    for(int i = 0; i < listSach.size(); ++i) {
        if(toUpper(listSach[i].getMa()) == toUpper(maCanSua)) {
            cout << "\n--- Thong tin cu ---\n" << listSach[i];
            cout << "\n---------------------\n";
            cout << "Bat dau qua trinh sua thong tin:\n";
            cout << "con cac";
        }
		int luaChon;
        do {
            cout << "\n--- Sua Thong Tin ---\n";
            cout << "1. Sua Ten\n";
            cout << "2. Sua Tac gia\n";
            cout << "3. Sua The loai\n";
            cout << "4. Sua Nam xuat ban\n";
            cout << "5. Sua Nha xuat ban\n";
            cout << "6. Sua So luong\n";
            cout << "0. Hoan tat\n";
            luaChon = nhapSo("\nLua chon cua ban");
            switch(luaChon) {
                case 1: listSach[i].setTen(nhapChuoi("Ten moi")); break;
                case 2: listSach[i].setTG(nhapChuoi("Tac gia moi")); break;
                case 3: listSach[i].setTL(nhapChuoi("The loai moi")); break;
                case 4: listSach[i].setNhaXB(nhapChuoi("Nha xuat ban moi")); break;
                case 5: listSach[i].setNamXB(nhapSo("Nam xuat ban moi")); break;
                case 6: listSach[i].setSL(nhapSo("So luong moi")); break;
                case 0: break;
                default: cout << "Lua chon khong hop le!\n";
            }
        }
        while(luaChon != 0);
        cout << "\nCap nhat thanh cong!\n\n";
		cout << "--- Thong tin moi sau khi cap nhat ---\n" << listSach[i];
        timThay = true;
        break;
    }
    if(!timThay) {
        cout << "Khong tim thay tai lieu co ma: " << maCanSua << endl;
    }
}

void ThuVien::locSachTheoTheLoai() {
	cin.ignore();
    string loc = nhapChuoi("Nhap the loai tai lieu muon loc");
    bool timThay = false;
    cout << "\n--- Ket qua loc theo the loai: " << loc << " ---\n";
    for (int i = 0; i < listSach.size(); ++i) {   
        if (toUpper(listSach[i].getTL()) == toUpper(loc)) {
            cout << listSach[i];
            cout << "\n\n------------------------\n";
            timThay = true;
        }
    }
    if (!timThay) {
        cout << "Khong co tai lieu nao thuoc the loai: " << toUpper(loc) << endl;
    }
}

void ThuVien::sapXepSachTheoNamXB() {
    if(listSach.empty()) {
        cout << "Danh sach rong!\n";
        return;
    }
    else {
        for(int i = 0; i < listSach.size() - 1; i++) {
        	for(int j = i + 1; j < listSach.size(); j++) {
        		if(listSach[i] > listSach[j]) {
        			swap(listSach[i], listSach[j]);
				}
			}
		}
		cout << "Sap xep thanh cong!";
    } 
}

void ThuVien::taiFileSach() {
    string tenFile;
    cout << "Nhap ten file can doc: ";
    cin.ignore();
    getline(cin, tenFile);
    ifstream fin(tenFile);
    if(!fin.is_open()) {
    	cout << "File khong ton tai!";
    	return;
	}
    string x;
    
    cout << "Ban co muon nhap file (Y/N): ";
    getline(cin, x);
    if (x != "y" && x != "Y") {
        cout << "Huy thao tac nap file!\n";
        fin.close();
        return;
    }
    string line;
    while (getline(fin, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string ma, ten, theLoai, tacGia, nhaXB, namXB, soLuong;
        getline(ss, ma, ',');
        getline(ss, ten, ',');
        getline(ss, theLoai, ',');
        getline(ss, tacGia, ',');
        getline(ss, nhaXB, ',');
        getline(ss, namXB, ',');
        getline(ss, soLuong, ',');
        Sach s(ma, ten, theLoai, tacGia, nhaXB, stoi(soLuong), stoi(namXB));
        listSach.push_back(s);
    }
    fin.close();
    cout << "\n\nDa them thanh cong sach tu file " << tenFile << "!\n";
}

void ThuVien::luuFileSach() {
    ofstream fout("sachbk.txt");
    for(int i = 0; i < listSach.size(); i++) {
        fout << listSach[i].getMa() << ", "
             << listSach[i].getTen() << ", "
             << listSach[i].getTL() << ", "
             << listSach[i].getTG() << ", "
             << listSach[i].getNhaXB() << ", "
             << listSach[i].getNamXB() << ", "
             << listSach[i].getSL() << "\n";
    }
    fout.close();
    cout << "Da xuat danh sach sach ra file sachbk.txt thanh cong!\n";
}


void ThuVien::hienThiTatCaDocGia(){
    cout<<"\n------------------------------------------- DANH SACH DOC GIA -------------------------------------------- \n";
    if (listDG.empty()) {
        cout << "Hien chua co doc gia nao trong thu vien!\n";
    } 
	else {
        cout << "\n+--------------------------------------------------------------------------------------------------------+\n";
  	  	cout << "| STT |   Ma  |        Ten        |  Ngay sinh  |    Dia chi   | So dien thoai |          Email          |\n";
   	 	cout << "+--------------------------------------------------------------------------------------------------------+\n";
        for(int i=0;i<listDG.size();i++){
        	DocGia x = listDG[i];
        	string ma = x.getMa();
        	string ht = x.getHoTen();
        	string ns = x.getNgaySinh();
        	string dc = x.getDiaChi();
        	string sdt = x.getSoDienThoai();
        	string em = x.getEmail();
            printf("|  %-3d| %-5s | %-17s | %-11s | %-12s |  %-10s   | %-23s |\n", i + 1,
			ma.c_str(), ht.c_str(), ns.c_str(), dc.c_str(), sdt.c_str(), em.c_str());
        }
        cout << "+--------------------------------------------------------------------------------------------------------+\n";
    }
}

void ThuVien::themDocGia(){
	cin.ignore();
    DocGia dg;
    string luaChon = "y";
    while(luaChon=="y"||luaChon=="Y"){
        cout<<"\nNhap thong tin doc gia:\n";
        cin >> dg;
        listDG.push_back(dg);
        cout<<"Them thanh cong!\n";
        cout << "\nBan co muon them tiep khong (Y/N):";
        cin >> luaChon;
        while(true) {
            if(luaChon != "y" && luaChon != "Y" && luaChon != "n" && luaChon != "N") {
                cout << "Lua chon khong hop le! Moi ban nhap lai (Y/N): ";
                cin >> luaChon;
            }
            else {
            	break;
			}
        }
    }
}

void ThuVien::xoaDocGiaTheoMa(){
	cin.ignore();
    string ma = nhapChuoi("\nNhap ma doc gia can xoa");
    bool timthay=false;
    for(int i=0;i<listDG.size();i++){
        if(toUpper(listDG[i].getMa()) == toUpper(ma)){
            cout<<"\nThong tin doc gia can xoa:\n" << listDG[i];
            string xacnhan;
            while(true) {
                xacnhan = nhapChuoi("\n\nBan co chac chan muon xoa doc gia nay? (Y/N)");
                if(xacnhan=="y"||xacnhan=="Y"){
                    listDG.erase(listDG.begin() + i);
                    cout<<"Xoa doc gia thanh cong!\n";
                    break;
                }
                else if (xacnhan=="n"||xacnhan=="N") {
                    cout<<"Huy thao tac xoa.\n";
                    break;
                } else {
                    cout << "Vui long chi nhap Y hoac N.\n";
                }
            }
            timthay=true;
            break;
        }
    }
    if(!timthay){
        cout<<"Khong tim thay doc gia co ma can xoa:"<<ma<<endl;
    }
}

void ThuVien::timDocGiaTheoMa() {
	cin.ignore();
    string ma = nhapChuoi("\nNhap ma doc gia can tim"); 
    bool timThay = false;
    for (int i = 0; i < listDG.size(); ++i) {
        if (toUpper(listDG[i].getMa()) == toUpper(ma)) {
            cout << "--- Tim thay doc gia ---\n" << listDG[i];
            timThay = true;
            break;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay doc gia co ma: " << ma << endl;
    }
}

void ThuVien::suaThongTinDocGia() {
	cin.ignore();
    string maCanSua = nhapChuoi("\nNhap ma doc gia can sua");
    bool timThay = false;
    for (int i = 0; i < listDG.size(); ++i) {
        if (toUpper(listDG[i].getMa()) == toUpper(maCanSua)) {
            cout << "\nThong tin cu:\n" << listDG[i];
        int luaChon;
        do {
            cout << "\n\n--- Sua Thong Tin  ---\n";
            cout << "1. Sua Ten\n";
            cout << "2. Sua Ngay sinh (dd/mm/yyyy)\n";
            cout << "3. Sua Dia chi\n";
            cout << "4. Sua So dien thoai\n";
            cout << "5. Sua Email\n";
            cout << "0. Hoan tat\n";
            luaChon = nhapSo("\nLua chon cua ban");
            switch(luaChon) {
                case 1: listDG[i].setTen(nhapChuoi("Ten moi")); break;
                case 2: listDG[i].setNgaySinh(nhapChuoi("Ngay sinh moi")); break;
                case 3: listDG[i].setDiaChi(nhapChuoi("Dia chi moi")); break;
                case 4: listDG[i].setSDT(nhapChuoi("So dien thoai moi")); break;
                case 5: listDG[i].setEmail(nhapChuoi("Email moi")); break;
                case 0: break;
                default: cout << "Lua chon khong hop le!\n";
            }
        }
        while(luaChon != 0);
        cout << "\nCap nhat thon tin thanh cong!\n";
		cout << "--- Thong tin moi sau khi cap nhat ---\n" << listDG[i];
        timThay = true;
        break;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay doc gia co ma: " << maCanSua << " de sua.\n";
    }
}
void ThuVien::sapXepDocGiaTheoNamSinh() {
	if(listSach.empty()) {
        cout << "Danh sach rong!\n";
        return;
    }
    else {
        for(int i = 0; i < listDG.size() - 1; i++) {
        	for(int j = i + 1; j < listDG.size(); j++) {
        		if(listDG[i] > listDG[j]) {
        			swap(listDG[i], listDG[j]);
				}
			}
		}
		cout << "Sap xep thanh cong!";
    } 
}
void ThuVien::taiFileDocGia() {
	string tenFile;
    cout << "Nhap ten file can doc: ";
    cin.ignore();
    getline(cin, tenFile);
    ifstream fin("docgia.txt");
    if (!fin.is_open()) {
        cout << "File khong ton tai!\n";
        return;
    }
    string x;
    cout << "Ban co muon nhap file (Y/N): ";
    getline(cin, x);
    if (x != "y" && x != "Y") {
        cout << "Huy thao tac nap file!\n";
        fin.close();
        return;
    }
    string line;
    while (getline(fin, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string ma, hoTen, ngaySinh, diaChi, soDienThoai, email;
        getline(ss, ma, ',');
        getline(ss, hoTen, ',');
        getline(ss, ngaySinh, ',');
        getline(ss, diaChi, ',');
        getline(ss, soDienThoai, ',');
        getline(ss, email, ',');
        DocGia dg(ma, hoTen, ngaySinh, diaChi, soDienThoai, email);
        listDG.push_back(dg);
    }
    fin.close();
    cout << "\nDa them thanh cong doc gia tu file " << tenFile << "!\n";
}

void ThuVien::luuFileDocGia() {
    ofstream fout("docgiabk.txt");
    for (int i = 0; i < listDG.size(); i++) {
        fout << listDG[i].getMa() << ", "
             << listDG[i].getHoTen() << ", "
             << listDG[i].getNgaySinh() << ", "
             << listDG[i].getDiaChi() << ", "
             << listDG[i].getSoDienThoai() << ", "
             << listDG[i].getEmail() << "\n";
    }
    fout.close();
    cout << "\nDa xuat danh sach doc gia ra file docgia.txt thanh cong!\n";
}
