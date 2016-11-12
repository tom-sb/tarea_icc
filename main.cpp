#include <iostream>

using namespace std;
#include "lista.h"

int main()
{

	lista lst;
	
	lst.insert(11);
	lst.insert(2);
	lst.insert(19);
	lst.insert(4);
	//cout<<"medio"<<endl;
	lst.mostrar();

	return 0;
}
