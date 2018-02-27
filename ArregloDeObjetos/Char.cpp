#include "Char.h"
#include <iostream>

Char::Char(char valor)
{
	setValor(valor);
}

Char::~Char()
{}

Tipo Char::getTipo()
{
	return Tipo::T_Char;
}

void Char::Imprimir()
{
	std::cout << "Objeto: Char {'" << getValor() << "'}" << std::endl;
}

void Char::setValor(char valor)
{
	this->valor = valor;
}

char Char::getValor()
{
	return this->valor;
}