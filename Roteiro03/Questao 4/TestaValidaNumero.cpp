#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main()
{
	int entrada;
	TestaValidaNumero numero;
	
	while(1)
	{
		cout<<"\nDigite um numero: ";
		cin>>entrada;

		try
		{
			numero.validaNumero(entrada);
		}
		catch(ValorAbaixoException valor)
		{
			cout<<valor.getMsg();
		}
		catch(ValorAcimaException valor)
		{
			cout<<valor.getMsg();
		}
		catch(ValorMuitoAcimaException valor)
		{
			cout<<valor.getMsg();
		}
	}
}