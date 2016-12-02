#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>//will get rid of .setf operator
#include <sstream>//string streams


int main(int argc, char **argv)
{
	

	std::vector<std::vector<double> > matrix;
	double v1, v2, v3, v4;
	std::stringsstream ss;
	std::string input;
	std::string filename = "file.txt";
	std::ofstream ofs(filename.c_str(), std::ios::app);
	std::ifstream ifs("input.txt");
	//ofs.open("file.txt", std::ios::app);

	std::cout << "hello world" <<std::endl;
	ofs <<"Hello file, line 2"<<std::endl;
	
	//for  (int i = 0; i = 0; i++) {
	//	std::vector<int> v;
	//	for (int j = 0; j < 4; j++) {
	//
	//		ifs>>input;
	//		v.push_back(input);
	//	}
	//	matrix.push_back(v);
	//}
	
	while (ifs >> v1 >> v2 >> v3 >> v4) {
		std::vector<int> v;
		v.push_back(v1);
		v.push_back(v2);
		v.push_back(v3);
		v.push_back(v4);
		matrix.push_back(v);
	}
	//flag based way of doing this
	std::cout.unsetf(std::ios::dec);
	std::cout.setf(std::ios::hex);
	std::cout.setf(std::ios::showbase);
	std::cout.setf(stD::ios::showpos);
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.setf(std::ios::left);
	std::cout.precision(2);
	std::cout.width(20);

	for(int i = 0; i < a4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << matrix [i][j] << " ";
			std::cout << std::setw(20) << std::setprecision(5) << matrix[i][j];
		}
		std::cout<<std::endl;
	}
	
	//char c = ifs.get();
	//ofs.put(c);

	std::cout.unsetf(std::ios::showpos);
	std::cout.unsetf(std::ios::fixed);
	std::cout.unsetf(std::ios::showpoint);
	std::cout.unsetf(std::ios::left);

	std::stringstream ss;
	double out;

	std::string prefex = "DCIM";
	int start = 0;

	//build 12.72
	ss << '-' << 1 << 2 << '.' << 7 << 2;
	ss >> out;

	std::cout << "out= " << out << std::endl;
	
	ifs.close();
	ifs.open("input.txt");
	std::getline(ifs, input);

	ss<<input;

	while (std::getline(ifs, input)) {
		std::stringstream ss2;
		ss2 <<input;
		while ( ss >> v1) {
			v.push_back(v1);
		}

		matrix.push_back(v);

	return 0;
}
