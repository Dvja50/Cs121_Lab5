#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(){
	std::ofstream outFile;
	outFile.open("data.csv");
	if (outFile.is_open()){
		outFile << "1, 2, this" << std::endl;
		outFile<< "3, 3, is" << std::endl;
		outFile<< "8, 1, a" << std::endl;
		outFile<< "2, 4, lot" << std::endl;
		outFile<< "2, 1, of"<< std::endl;
		outFile<< "4, 2, fun"<< std::endl;
		outFile.close();
	     } else{
		     std::cout << "unable to open the file" << std::endl;
	     }
	std::ifstream inFile;
	inFile.open("data.csv");
	std::string line;
	while (getline(inFile, line)){
		std::stringstream ss(line);
		int num1, num2; 
		std::string text;
		char comma;
		ss>> num1 >> comma >> num2 >> comma >> text;
		int sum = num1 + num2;
		for (int i = 0; i < sum; ++i){
			std::cout<< text << " ";
		}
		std::cout << std::endl;
	}
	inFile.close();

	return 0;
}


