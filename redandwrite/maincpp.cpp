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

	void ReadFromFile()
	{
		std::string fileContent;
		std::ifstream openFile("minfil.txt");
		while(std::getline(openFile, fileContent)) 
		{
			std::cout << "Filecontent: " << fileContent << "\n";
		}
		openFile.close();



	}

}




int main()
{
	Lib::print("hej");
	Lib::WriteToFile("minfil.txt");
	Lib::ReadFromFile();
}