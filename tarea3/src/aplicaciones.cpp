#include "../include/aplicaciones.h"

TPilaJugador menoresQueElResto(TJugadoresLDE lista) {
    // ir de atras a adelante es mas facil
    return NULL;
}

bool sumaPares(nat k, TConjuntoIds c){
  if (k >= 2*c->maximo || k <= 0 || c->cardinal < 2){
    return false;
  }
  // entonces es posible
  if (k < c->maximo){
    nat i = 1;
    while (i < (k - 1)/2){
      if (perteneceTConjuntoIds(i) && perteneceTConjuntoIds(k-i)){

      }
      i++;
    }
  } else {
    nat i = c->maxmio;
  }
}
