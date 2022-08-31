#include <iostream>
#include <fstream>
#include <string>



namespace Lib 
{

	
	//template print function
	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}

	//Writes to textfile
	void WriteToFile(std::string filepath) 
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
	Lib::WriteToFile(Lib::filepath1);
}