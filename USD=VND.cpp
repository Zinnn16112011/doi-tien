#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int usd;
    const int rate = 26400; // 1 USD = 26,400 VND
    char choice;

    cout << "=== CHUONG TRINH DOI TIEN ===" << endl;

    do {
        cout << "Nhap so tien USD: ";
        cin >> usd;

        long long vnd = (long long)usd * rate;

        cout.imbue(locale("")); // t? d?ng thêm d?u ph?y
        cout << usd << " USD = " << vnd << " VND" << endl;

        cout << "Ban co muon tiep tuc? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    cout << "Chuong trinh ket thuc!" << endl;
    return 0;
}

