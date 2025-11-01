#pragma once
#include "Exception.h" 

class DocGia {
	private:
		string ma, hoTen, ngaySinh, diaChi, soDienThoai, email; 
		int namSinh;                   
	public:
		DocGia() : ma(""), hoTen(""), ngaySinh(""), diaChi(""), soDienThoai(""), email("") {}
		DocGia(string ma, string ten, string ns, string dc, string sdt, string mail)
		: ma(ma), hoTen(ten), ngaySinh(ns), diaChi(dc), soDienThoai(sdt), email(mail) {}
		friend istream& operator>>(istream &in, DocGia &dg) {
			nhapChuoi(in, dg.ma, "Ma");
		    nhapChuoi(in,dg.hoTen, "Ho ten");
		    nhapChuoi(in, dg.ngaySinh, "Ngay sinh(dd/mm/yyyy)");
		    nhapChuoi(in, dg.soDienThoai, "So dien thoai");
            nhapChuoi(in, dg.email, "Email");
            nhapChuoi(in, dg.diaChi, "Dia chi");
            if (dg.ngaySinh.size() >= 10) {
		        try {
		            dg.namSinh = stoi(dg.ngaySinh.substr(6, 4));
		        } catch (...) {
		            dg.namSinh = 0;
		        }
		    } 
			else {
		        dg.namSinh = 0;
		    }
			return in;
		}
		friend ostream& operator<<(ostream &out, const DocGia &dg) {
			out << "\nMa: " << dg.ma;
			out << "\nHo ten: " << dg.hoTen;
			out << "\nNgay sinh: " << dg.ngaySinh;
			out << "\nSo dien thoai: " << dg.soDienThoai;
			out << "\nEmail: " << dg.email;
			out << "\nDia chi: " << dg.diaChi;
			return out;
		}
		bool operator>(const DocGia &dg) {
			return namSinh > dg.namSinh;
		}
		string getMa() {
			return ma;
		}
		string getHoTen() {
			return hoTen;
		}
		string getNgaySinh() {
			return ngaySinh;
		}
		string getDiaChi() {
			return diaChi;
		}
		string getSoDienThoai() {
			return soDienThoai;
		}
		string getEmail() {
			return email;
		}
		void setTen(string val) {
			hoTen = val;
		}
		void setNgaySinh(string val) {
			ngaySinh = val;
		}
		void setDiaChi(string val) {
			diaChi = val;
		}
		void setSDT(string val) {
			soDienThoai = val;
		}
		void setEmail(string val) {
			email = val;
		}
};


