#pragma once


/* definimos la estructura personas, que son nodos*/
struct persona;
typedef struct persona Persona;

struct persona
{
	int id;
	int tipo;
	Persona* siguiente;
};

struct puerta;
typedef struct puerta Puerta;

struct puerta
{
	int n;
	Persona* primera;
	Persona* ultima;
	Puerta* siguiente;
};


struct terminal;
typedef struct terminal Terminal;

struct terminal
{
	int n;
	Puerta* primera;
	Puerta* ultima;
};

Terminal* terminal_init(int n, int n_puertas);

void destruir_terminal(Terminal* ter);
void ingreso(int terminal, int id, int tipo);
void abordaje(int terminal, int puerta);
void cierre(int terminal, int puerta);
void clausura(int terminal1, int terminal2);
void laser(int terminal, int puerta, int indice);

void recorrer_puertas(Terminal* ter);
