#pragma once
#include "Exception.h"

class Sach {
	private:
		string ma, ten, theLoai, tacGia, nhaXB;
		int soLuong, namXB; 
	public:
		Sach() : ma(""), ten(""), theLoai(""), tacGia(""), nhaXB(""), soLuong(0), namXB(0) {}
	    Sach(string ma, string ten, string tl, string tg, string xb, int sl, int nxb)
	    : ma(ma), ten(ten), theLoai(tl), tacGia(tg), nhaXB(xb), soLuong(sl), namXB(nxb) {}
	    friend istream& operator>>(istream &in, Sach &tl) {
	    	nhapChuoi(in, tl.ma, "Ma");
		    nhapChuoi(in, tl.ten, "Ten");
		    nhapChuoi(in, tl.tacGia, "Tac gia");
		    nhapChuoi(in, tl.theLoai, "The loai");
		    nhapChuoi(in, tl.nhaXB, "Nha xuat ban");
            nhapSo(in, tl.namXB, "Nam xuat ban");
            nhapSo(in, tl.soLuong, "So luong");
            return in;
		}
	    friend ostream& operator<<(ostream &out, const Sach &tl) {
	    	out << "\nMa: " << tl.ma;
	    	out << "\nTen: " << tl.ten;
	    	out << "\nTac gia: " << tl.tacGia;
	    	out << "\nThe loai: " << tl.theLoai;
	    	out << "\nNha xuat ban: " << tl.nhaXB;
	    	out << "\nNam xuat ban: " << tl.namXB;
	    	out << "\nSo luong: " << tl.soLuong;
	    	return out;
		}
		bool operator>(const Sach &tl) {
			return namXB > tl.namXB;
		}
		string getMa() {
			return ma;
		}
		string getTen() {
			return ten;
		}
	    string getTL() {
			return theLoai;
		}
		string getTG(){
			return tacGia;
		}
		string getNhaXB() {
			return nhaXB;
		}
		int getNamXB() {
			return namXB;
		}
		int getSL(){
			return soLuong;
		}
		void setTen(string val) {
			ten = val;
		}
		void setTL(string val) {
			theLoai = val;
		}
		void setTG(string val) {
			tacGia = val;
		}
		void setNhaXB(string val) {
			nhaXB = val;
		}
		void setNamXB(int val) {
			namXB = val;
		}
		void setSL(int val) {
			soLuong = val;
		}
};




