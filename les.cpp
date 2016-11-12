#include "lista.h"
#include "nodo.h"
#include <stddef.h>
#include <iostream>

using namespace std;


Nodo::Nodo(int _valor)
{
	this->valor=_valor;
	this->next=NULL;
}

int Nodo::getval()
{
	return valor;
}

lista::lista()
{
	this->head=NULL;
	this->tail=NULL;

}

bool lista::vacio()
{
	return (this->head==NULL);

}

void lista::insert(int _valor)
{

	Nodo *nuevo =new Nodo(_valor);

	if (vacio()==true)
	{

		this->head=nuevo;
		this->tail=nuevo;
		
	}	
	else
	{

		this->tail->next=nuevo;
		this->tail=nuevo;
	}

}


void lista::mostrar()
{
	
	if(vacio()==true)
	{
		cout<<"no hay nada";
	}
	else
	{
		Nodo *temp =this->head;
		int i=1;
		while(temp!=NULL)
		{
			cout<<temp->getval()<<" ----> ";
			temp=temp->next;
			i++;
		}
	}
}

