#include<stdio.h>
#include<stdlib.h>
#include "clist.h"

int main(){
    clist *l;
    l = create_list();
    add_init(l, 1);
    add_init(l,2);
    add_init(l, 3);
    print_list(l);
    return 0;
}