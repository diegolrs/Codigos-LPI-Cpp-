#ifndef _FATURA_H_
#define _FATURA_H_

#include <string>

class Invoice{

public:
int getNumero();
int getQuantidade();
std::string getDescricao();
float getPreco();

void setNumero(int n);
void setQuant(int n);
void setDescricao(std::string d);
void setPreco(float p);

Invoice(int n, int q, std::string d, float p);

private:
int numero, quantidade;
std::string descricao;
float preco;

};

#endif // _FATURA_H_
