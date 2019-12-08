#include <iostream>
#include <time.h>

int main(){

	int x;

	srand (time(NULL));
	int num = rand()%100;
	if(num==0)
		num = 1;

	while(1){
	std::cout<<"\n\n Adivinhe o numero entre 1 e 100: ";
	std::cin>>x;

	if(num == x){
	  std::cout<<"\n\n Parabens. Voce adivinhou o numero";
	  break;
	  }else{

		if(x < num)
			std::cout<< " Muito baixo. Tente novamente ";
		else 
			if(x > num)
			std::cout<< " Muito alto. Tente novamente ";

		}

	}

	return 0;
}
