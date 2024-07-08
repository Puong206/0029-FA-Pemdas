#include <iostream>
#include <vector>
using namespace std;

class MasukUniversitas {
private:
	string UangDaftar[10];
	string UangSemesterPertama[10];
	string UangBangunan[10];
	string TotalBiaya[10];
public:
	void setUangPendaftaran(int i, string value) {
		UangDaftar[i] = value;
	}
	void setSemesterPertama(int i, string value) {
		UangSemesterPertama[i] = value;
	}
	void setUangBangunan(int i, string value) {
		UangBangunan[i] = value;
	}
	void setTotalBiaya(int i, string value) {
		TotalBiaya[i] = value;
	}
	string getUangPendaftaran(int i) {
		return UangDaftar[i];
	}
	string getSemesterPertama(int i) {
		return UangSemesterPertama[i];
	}
	string getUangBangunan(int i) {
		return UangBangunan[i];
	}
	string getTotalBiaya(int i) {
		return TotalBiaya[i];
	}
};

int main() {
	MasukUniversitas MasukUniversitas;

	MasukUniversitas.setUangPendaftaran(0, "Uang Daftar");
	MasukUniversitas.setSemesterPertama(1, "Semester Pertama");
	MasukUniversitas.setUangBangunan(2, "Uang Bangunan");
	MasukUniversitas.setTotalBiaya(4, "Total Biaya");

	cout << MasukUniversitas.getUangPendaftaran(0) << endl;
	cout << MasukUniversitas.getSemesterPertama(1) << endl;
	cout << MasukUniversitas.getUangBangunan(2) << endl;
	cout << MasukUniversitas.getTotalBiaya(4) << endl;

	return 0;
}