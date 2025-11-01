#pragma once
#include<bits/stdc++.h>
using namespace std;

string toUpper(string s) {
    for(char &c : s) {
    	c = toupper(c);
	}
    return s;
}

void nhapChuoi(istream &in, string &data, string alert) {
    do {
        cout << alert << ": ";
        getline(in, data);
        if(data.empty()) {
            cout << "Loi: " << toUpper(alert) << " khong duoc de trong! Moi nhap lai!\n";
        }
    } while(data.empty());
}

string nhapChuoi(string alert) {
    string data;
    do {
        cout << alert << ": ";
        getline(cin, data);
        if (data.empty()) {
            cout << "Loi: " << toUpper(alert) << " khong duoc de trong! Moi nhap lai!\n";
        }
    } while (data.empty());
    return data;
}


void nhapSo(istream &in, int &data, string alert) {
    string chuoi;
    while (true) {
        cout << alert << ": ";
        getline(in, chuoi);
        if (chuoi.empty()) {
            cout << "Loi: " << toUpper(alert) << " khong duoc de trong! Moi nhap lai!\n";
            continue;
        }
        int d = 1;
        for (int i = 0; i < chuoi.size(); i++) {
        	if(i == 0 && chuoi[i] == '-') {
        		continue;
			}
            if(!isdigit(chuoi[i])) {
                d = 0;
                break;
            }
        }
        if(d == 0) {
            cout << "Loi: khong phai la so! Moi nhap lai!\n";
            continue;
        }
        data = stoi(chuoi);
        if(data < 0) {
            cout << "Loi: " << toUpper(alert) << " phai lon hon 0! Moi nhap lai!\n";
            continue;
        }
        break;
    }
}

int nhapSo(string alert) {
    string chuoi;
    int data;
    while(true) {
        cout << alert << ": ";
        getline(cin, chuoi);
        if (chuoi.empty()) {
            cout << "Loi: " << toUpper(alert) << " khong duoc de trong! Moi nhap lai!\n";
            continue;
        }
        int d = 1;
        for (int i = 0; i < chuoi.size(); i++) {
        	if(i == 0 && chuoi[i] == '-') {
        		continue;
			}
            if(!isdigit(chuoi[i])) {
                d = 0;
                break;
            }
        }
        if(d == 0) {
            cout << "Loi: khong phai la so! Moi nhap lai!\n";
            continue;
        }
        data = stoi(chuoi);
        if(data < 0) {
            cout << "Loi: " << toUpper(alert) << " phai lon hon 0! Moi nhap lai!\n";
            continue;
        }
        break;
    }
    return data;
}

