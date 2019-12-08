#include <iostream>

int main(){

	int x, maior;

	std::cout<< " Digite um numero: ";
	std::cin>>x;
	maior = x;

	if(x==0){
		std::cout<< "\n O maior numero eh "<< maior;
		return 0;
	}else{

	do{
		std::cout<< " Digite um numero: ";
		std::cin>>x;	
		if(x>maior)
		maior = x;

		}while(x!=0);

		std::cout<< "\n O maior numero eh "<< maior;
	}

	return 0;
}
