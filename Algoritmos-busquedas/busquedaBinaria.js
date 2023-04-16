let lista = [1, 2, 3, 4, 5, 6, 7, 8, 9];

function busquedaBinaria(value, lista) {
  let primero = 0;
  let ultimo = lista.length - 1;
  let posicion = -1; // Indica la posicion del elemento
  let encontrado = false; // Sirve para saber si el elemento existe en la lista
  let medio; // Es el indice del elemento en el medio del la lista
  while (encontrado === false && primero <= ultimo) {
    medio = Math.floor((primero + ultimo) / 2);
    if (lista[medio] == value) {
      encontrado = true;
      posicion = medio;
    } else if (lista[medio] > value) {
      ultimo = medio - 1;
    } else {
      primero = medio + 1;
    }
  }
  return posicion;
}

console.log(`Elemento en posicion: ${busquedaBinaria(2, lista)}`);
