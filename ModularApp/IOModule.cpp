module IOModule;
using namespace std;
namespace IO {
	double InputX() {
		cout << "Type X value: ";
		double ret;
		cin >> ret;
		return ret;
	};
	void ShowZ(const double z) {
		cout << "Z is " << z;
	};
};