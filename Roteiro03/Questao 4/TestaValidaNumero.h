#pragma once
#include "ValorException.h"

class TestaValidaNumero
{
	public:
		void validaNumero(int num)
		{
			if(num <=0)
			{
				ValorAbaixoException valor;
				throw valor;
			}
			else if(num >100 && num < 1000)
			{
				ValorAcimaException valor;
				throw valor;
			}
			else if(num >=1000)
			{
				ValorMuitoAcimaException valor;
				throw valor;
			}
		}
};