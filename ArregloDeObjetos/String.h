#ifndef STRING_H
#define STRING_H

#include "Object.h"
#include <string>

class String : public Object
{
public:
	String(std::string);
	~String();

	Tipo getTipo();
	void Imprimir();

	void setValor(std::string);
	std::string getValor();

private:
	std::string valor;
};

//Object:String{"Hola}


#endif // !STRING_H

