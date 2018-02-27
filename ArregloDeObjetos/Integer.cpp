#include "Integer.h"
#include <iostream>

Integer::Integer(int valor)
{
	setValor(valor);
}

Integer::~Integer()
{}

Tipo Integer::getTipo()
{
	return Tipo::T_Int;
}

void Integer::Imprimir()
{
	std::cout << "Object: Integer"  "{" << getValor() << "}" << std::endl;
}

int Integer::getValor()
{
	return this->valor;
}

void Integer::setValor(int valor)
{
	this->valor = valor;
}
