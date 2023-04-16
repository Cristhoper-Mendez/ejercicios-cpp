function swap(arr, i, j) {
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

function partition(arr, start, end) {
  // Elejir el elemento más a la derecha como un pivote del arreglo
  let pivot = arr[end];

  // Los elementos menores que el pivote serán empujados a la izquierda de pIndex
  // elementos mayores que el pivote serán empujados a la derecha de pIndex
  // los que sean iguales donde sea
  let pIndex = start;

  // Cada vez que encontramos un elemento menor o igual que el pivote, pIndex
  // se incrementa, y ese elemento se colocaría antes del pivote.
  for (let i = start; i < end; i++) {
    if (arr[i] <= pivot) {
      swap(arr, i, pIndex);
      pIndex++;
    }
  }

  // intercambia pIndex con pivote
  swap(arr, end, pIndex);

  return pIndex;
}

function Quicksort(arr, start, end) {
  if (start >= end) {
    return;
  }

  // reorganizar los elementos a través del pivote
  let pivot = partition(arr, start, end);

  // recurre en un subarray que contiene elementos menores que el pivote
  Quicksort(arr, start, pivot - 1);

  // se repite en el subarray que contiene más elementos que el pivote
  Quicksort(arr, pivot + 1, end);
}

let Lst = [9, -3, 5, 2, 6, 8, -6, 1, 3];

Quicksort(Lst, 0, Lst.length - 1);

console.log(`Ordenado: ${Lst.toString()}`);
