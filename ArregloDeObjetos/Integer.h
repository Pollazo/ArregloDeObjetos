#ifndef INTEGER_H
#define INTEGER_H

#include "Object.h"

class Integer : public Object
{
public:
	Integer(int);
	~Integer();

	Tipo getTipo();
	void Imprimir();

	void setValor(int);
	int getValor();

private:
	int valor;

};

//Object:Integer{100}

#endif // !INTEGER_H

