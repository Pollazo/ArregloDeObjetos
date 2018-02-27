#include "String.h"
#include <iostream>

String::String(std::string valor)
{
	setValor(valor);
}

String::~String()
{}

Tipo String::getTipo()
{
	return Tipo::T_String;
}

void String::Imprimir()
{
	std::cout << "Object: String {\"" << getValor() << "\"}" << std::endl;
}

void String::setValor(std::string valor)
{
	this->valor = valor;
}

std::string String::getValor()
{
	return this->valor;
}