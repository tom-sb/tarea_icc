#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo
{
	private:
		int valor;	
	public:
		Nodo *next;
		Nodo(int);
		int getval();//{return valor;}
		
};

#endif
