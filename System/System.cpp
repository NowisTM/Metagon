// System.cpp : Definiert die exportierten Funktionen f�r die DLL-Anwendung.
//

#include "stdafx.h"
#include "System.h"


// Dies ist das Beispiel einer exportierten Variable.
SYSTEM_API int nSystem=0;

// Dies ist das Beispiel einer exportierten Funktion.
SYSTEM_API int fnSystem(void)
{
	return 42;
}

// Dies ist der Konstruktor einer Klasse, die exportiert wurde.
// Siehe System.h f�r die Klassendefinition.
CSystem::CSystem()
{
	return;
}
