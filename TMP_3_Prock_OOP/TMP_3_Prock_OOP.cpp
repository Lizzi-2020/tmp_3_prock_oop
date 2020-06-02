#include <iostream>
#include <fstream>
using namespace std;
#include "container.h"

int main(int argc, char* argv[]) {
	cout << argc << endl;
	setlocale(LC_CTYPE, "rus");
	if (argc != 3)
	{
		cout << "Wrong command line arguments\n";
		system("pause");
		return 1;
	}
	std::cout << "Hello World!\n";
	ifstream ifst("in.txt");
	ofstream ofst("out.txt");
	cout << "Start" << endl;
	container c;
	c.In(ifst);
	c.Sort();
	c.Out(ofst);
	c.OutTruck(ofst);
	ifst.close();
	ofst.close();
	c.Clear();
	//system("pause");
	//This is for false commit!!!
	return 0;
}
