let lista = [1, 2, 3, 4, 5, 6, 7, 8, 9];

function buscar(lista, val){
    let result = -1

    for (let i = 0; i < lista.length; i++) {
        const element = lista[i];
        
        if(element == val){
            result = i;
            break;
        }
    }

    return result
}

console.log(`La posicion del elemento es: ${buscar(lista, 4)}`)