import IOModule;
import CalcModule;

int main(int argc, char** argv) {
	double x, z;
	x = IO::InputX();
	Calc::Compute(x, z);
	IO::ShowZ(z);
};