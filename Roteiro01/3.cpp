#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(){

int x, ar[6] = {0};

std::cout<<"\n Insira quantas vezes o dado vai ser jogado ";
std::cin>>x;
std::cout<<"\n";
srand (time(NULL));
int num;

for(int i = 0; i< x; i++){

    while(1){
	 num = rand() %7;


	if(num!=0){

        //std::cout<<" num "<<num;
         break;
	}

    }

    if(num==1)ar[0]++;
    if(num==2)ar[1]++;
    if(num==3)ar[2]++;
    if(num==4)ar[3]++;
    if(num==5)ar[4]++;
    if(num==6)ar[5]++;

}

for(int i=0; i<=5; i++)
std::cout<< " Porcentagem do numero "<< i+1 <<" eh de "<< (ar[i] * 100) / x << "\n";

return 0;
}
