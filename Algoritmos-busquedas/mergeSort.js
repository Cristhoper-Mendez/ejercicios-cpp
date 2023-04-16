function merge(left, right) {
  let sortedArr = []; // Elementos ordenados
  while (left.length && right.length) {
    // Insertar el elemento mas pequeño al array ordenado
    if (left[0] < right[0]) {
      sortedArr.push(left.shift());
    } else {
      sortedArr.push(right.shift());
    }
  }

  return [...sortedArr, ...left, ...right];
}

function mergeSort(arr) {
  if (arr.length <= 1) return arr;
  let mid = Math.floor(arr.length / 2);

  let left = mergeSort(arr.slice(0, mid));
  let right = mergeSort(arr.slice(mid));
  return merge(left, right);
}

let Lst = [5, 3, 4, 2, 1, 6];

console.log(`Desordenado: ${Lst.toString()}`);

Lst = mergeSort(Lst);

console.log(`Ordenado: ${Lst.toString()}`);
