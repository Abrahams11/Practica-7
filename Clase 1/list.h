#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <stdbool.h>

typedef struct _list list;

struct _list
{
    node *head;
    int num;
};

list* creat_list ();
void delete_list(list *l);

//Funciones para agrefgar a la lista 
bool add_init(list *l, DATA data);
bool add_end (list *l, DATA data);
bool add(list *l, DATA data, int pos);

//funcion para eliminar un dato
bool remove_data(list *l, DATA data);

//funcion para eliminar por posicion
DATA delete_init(list *l);
DATA delete_end(list *l);
DATA delete_data(list*l, int pos);

//funciones para buscar
int search_data(list *l, DATA data);
DATA search_post(list *l, int pos);
node *search_node(list *l, DATA data);

//Ultimo y penultimo
node *ultimo(list *l);
node *penultimo(list *l);
node *anterior(list *l, int pos);
node *actual(list *l, int pos);

//funcion para imprimir 
void print_list (list *l);

bool is_empty(list *l);
void empty(list *l);
    
#endif