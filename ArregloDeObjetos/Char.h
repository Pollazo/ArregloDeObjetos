#ifndef CHAR_H
#define CHAR_H

#include "Object.h"

class Char : public Object
{
public:
	Char(char);
	~Char();

	Tipo getTipo();
	void Imprimir();

	void setValor(char);
	char getValor();

private:
	char valor;

};

//Object:Char{'U'}

#endif // !CHAR_H

