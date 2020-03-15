#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream arquivoE;
	arquivoE.open("text.txt");
		
	if(!arquivoE.is_open() )
		cout<< "Falha ao abrir o arquivo";
	else
	{
		string stringPega;
		vector<string> todasAsStringsPegas;
		
		while(!arquivoE.eof())
		{
			getline(arquivoE, stringPega);
			todasAsStringsPegas.push_back(stringPega);
		}
		
		arquivoE.close();
		
		ofstream arquivoS;
		arquivoS.open("text_bkp.txt");
		
		for(auto it = todasAsStringsPegas.begin(); it!= todasAsStringsPegas.end(); ++it)
		{
			arquivoS << *it;
			arquivoS << "\n";
		}
		
		arquivoS.close();
		
		cout<< "Copia feita com sucesso";
	}
		
	return 0;	
}