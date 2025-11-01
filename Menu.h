#pragma once
#include "ThuVien.h"

class Menu {
	private:
		ThuVien tv;
	public:
		void consoleTL() {
			while(true) {
				system("cls");
				char x; int choice;
			    cout << "\n------------- Quan ly sach --------------\n\n";
			    cout << "+-------------------------------------------+\n";
			    cout << "|" << "  STT  "  << "|"  << "             Chuc nang             " << "|\n";
			    cout << "+-------------------------------------------+\n";
			    cout << "|" << "   1   " << "|" << "    Hien thi tat ca sach           |\n";
			    cout << "|" << "   2   " << "|" << "    Them sach                      |\n";
			    cout << "|" << "   3   " << "|" << "    Xoa sach theo ma               |\n";
			    cout << "|" << "   4   " << "|" << "    Tim sach theo ma               |\n";
			    cout << "|" << "   5   " << "|" << "    Sua thong tin sach             |\n";
			    cout << "|" << "   6   " << "|" << "    Loc sach theo the loai         |\n";
			    cout << "|" << "   7   " << "|" << "    Nhap sach tu file              |\n";
			    cout << "|" << "   8   " << "|" << "    Xuat sach ra file              |\n";
			    cout << "|" << "   0   " << "|" << "    Quay lai menu chinh            |\n";
			    cout << "+-------------------------------------------+\n";
			    cout << "Moi ban chon: "; cin >> choice;
			    system("cls");
			    switch(choice) {
			    	case 1: tv.hienThiTatCaSach(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 2: tv.themSach(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 3: tv.xoaSachTheoMa(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 4: tv.timSachTheoMa(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 5: tv.suaThongTinSach(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 6: tv.locSachTheoTheLoai(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 7: tv.taiFileSach(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 8: tv.luuFileSach(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case 0: quanLy(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	default: cout << "Lua chon khong hop le!"; system("pause");
				}
			}
		}	   
		void consoleDG() {
			while(true) {
				system("cls");
				char x, choice;
				cout << "\n-------------- Quan ly tai lieu -------------\n\n";
			    cout << "+-------------------------------------------+\n";
			    cout << "|" << "  STT  " << "|" << "            Chuc nang              " << "|\n";
			    cout << "+-------------------------------------------+\n";
			    cout << "|" << "   1   " << "|" << "  Hien thi tat ca doc gia          |\n";
			    cout << "|" << "   2   " << "|" << "  Them doc gia                     |\n";
			    cout << "|" << "   3   " << "|" << "  Xoa doc gia theo ma              |\n";
			    cout << "|" << "   4   " << "|" << "  Tim doc gia theo ma              |\n";
			    cout << "|" << "   5   " << "|" << "  Sua thong tin doc gia            |\n";
			    cout << "|" << "   6   " << "|" << "  Nhap doc gia tu file             |\n";
			    cout << "|" << "   7   " << "|" << "  Xuat doc gia ra file             |\n";
			    cout << "|" << "   0   " << "|" << "  Quay lai menu chinh              |\n";
			    cout << "+-------------------------------------------+\n"; 
			    cout << "Moi ban chon: "; cin >> choice;
			    system("cls");
			    switch(choice) {
			    	case '1': tv.hienThiTatCaDocGia(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '2': tv.themDocGia(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '3': tv.xoaDocGiaTheoMa(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '4': tv.timDocGiaTheoMa(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '5': tv.suaThongTinDocGia(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '6': tv.taiFileDocGia(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '7': tv.luuFileDocGia(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	case '0': quanLy(); cout << "\n\nNhan phim bat ky de quay lai menu: "; cin >> x; break;
			    	default: cout << "Lua chon khong hop le!"; system("pause"); break;
				}
			}
        }	
		void quanLy() {
			while (true) {
				system("cls");
				char luaChon;
			    cout << "1. Quan ly tai lieu\n";
			    cout << "2. Quan ly thu vien\n";
			    cout << "0. Thoat\n";
			    cout << "\nMoi ban chon: ";
			    cin >> luaChon;
			    if (luaChon == '1') {
			    	system("cls");
			        consoleTL();
			    }
			    else if (luaChon == '2') {
			    	system("cls");
			        consoleDG();
			    }
			    else {
			    	system("cls");
			        cout << "Lua chon khong hop le! Moi chon lai\n\n";
			        system("pause");
			    }
			}
    	}
};

