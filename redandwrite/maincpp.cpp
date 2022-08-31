#include <iostream>
#include <fstream>
#include <string>



namespace Lib 
{

	

	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}


	void WriteTOFile(std::string filepath) 
	{

		std::ofstream file(filepath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();

	}

	std::string filepath1 = "minfil.txt";

}




int main()
{
	Lib::print("hej");
	Lib::WriteTOFile(Lib::filepath1);
}