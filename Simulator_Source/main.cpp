#include "Model.h"
#include "Controller.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	gtk_init(&argc, &argv);

	if(argc != 3)
	{	cout << "ERRO: numero de argumentos invalido" << endl << "Uso: sim arq.mif charmap.mif" << endl;
		return 1;
	}
	else
	{	int i = 0;
		while(argv[1][i] != '.' && argv[1][i] != '\0')
			i++;
		if(argv[1][i+1] != 'm' || argv[1][i+2] != 'i' || argv[1][i+3] != 'f')
		{	cout << "nao eh mif" << endl;
			return 1;
		}

		i = 0;
		while(argv[2][i] != '.' && argv[2][i] != '\0')
			i++;
		if(argv[2][i+1] != 'm' || argv[2][i+2] != 'i' || argv[2][i+3] != 'f')
		{	cout << "nao eh mif" << endl;
			return 1;
		}
	}

	Model *m = new Model(argv[1], argv[2]);
	Controller *c = new Controller(m);

	gtk_main();

//	delete m;
//	delete c;

	return 0;
}

