/**********************************************************************************************
 *
 * Ejemplo Organización de memoria
 *
 **********************************************************************************************/

#include <iostream>

/* Variables globales */
int32_t Cglobal= 0x11223344;
int32_t Dglobal= 0x11223344;


void fTest()
{
	int32_t Alocal = 0xaabbccdd;
	int32_t Blocal= 0x11223344;

	
	int32_t* pA;
	int32_t* pB;
	int32_t* pC, *pD;

	
	pA = &Alocal;
	pB = &Blocal;
	pC = &Cglobal;
	pD = &Dglobal;

	std::cout << "==== ftset() =====\n";
	std::cout << "pA = " << pA << "\n";
	std::cout << "pB = " << pB<< "\n";
	std::cout << "pC = " << pC << "\n";
	std::cout << "pD = " << pD << "\n";
	 
}

int main(int argc, char* argv[])
{
	int32_t Alocal = 0xaabbccdd;
	int32_t Blocal= 0x11223344;

	int32_t* pA;
	int32_t* pB;
	int32_t* pC, *pD;

	
	pA = &Alocal;
	pB = &Blocal;
	pC = &Cglobal;
	pD = &Dglobal;

	std::cout << "==== main() =====\n";
	std::cout << "pA = " << pA << "\n";
	std::cout << "pB = " << pB<< "\n";
	std::cout << "pC = " << pC << "\n";
	std::cout << "pD = " << pD << "\n";
	/*
	 * 1) p_fTest es un puntero a la función fTest() 
	 *   Determinar el tipo de datos de p_fTest
	 */
	void (*p_fTest)();
	
	/*
	 * 2) Una vez declarado en forma correcta, averigüe
	 *    cómo acceder correctamente a la dirección de memoria
	 *    de la función fTest()
	 *    Conceptualmente, se debería realizar la siguiente asignación	
	 *        p_fTest <- &fTest();
	*/
	p_fTest = &fTest;
	
	// Esta línea debe mostrar la dirección de memoria de
	// la función p_fTest. Visualmente, debe comprobar que
	// se localiza en la zona baja de memoria.
	std::cout << "&fTest() = " << p_fTest << "\n";
	
	fTest();

	return EXIT_SUCCESS;
}



