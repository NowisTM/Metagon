// Folgender ifdef-Block ist die Standardmethode zum Erstellen von Makros, die das Exportieren 
// aus einer DLL vereinfachen. Alle Dateien in dieser DLL werden mit dem SYSTEM_EXPORTS-Symbol
// (in der Befehlszeile definiert) kompiliert. Dieses Symbol darf für kein Projekt definiert werden,
// das diese DLL verwendet. Alle anderen Projekte, deren Quelldateien diese Datei beinhalten, erkennen 
// SYSTEM_API-Funktionen als aus einer DLL importiert, während die DLL
// mit diesem Makro definierte Symbole als exportiert ansieht.
#ifdef SYSTEM_EXPORTS
#define SYSTEM_API __declspec(dllexport)
#else
#define SYSTEM_API __declspec(dllimport)
#endif

// Diese Klasse wird aus System.dll exportiert.
class SYSTEM_API CSystem {
public:
	CSystem(void);
	// TODO: Hier die Methoden hinzufügen.
};

extern SYSTEM_API int nSystem;

SYSTEM_API int fnSystem(void);
