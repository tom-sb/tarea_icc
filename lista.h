#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"

class lista
{
	private:
		Nodo *head;
		Nodo *tail;
	public:
		lista();
		void insert(int);
		void mostrar();
		bool vacio();
		//friend class Nodo;
};

#endif
