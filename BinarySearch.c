#define NotFound -1
typedef int ElementType;
typedef int Position;
typedef ElementType* Array;

//Return the number of the wanted, if not found then return NotFound.
//Elements in "Array" increase by degrees.

Position BinarySearch( Array L, int size, ElementType X ) {
    Position i = 0, j = size, p = (i + j) / 2;
    int found = 0;
    while(i <= j){
        p = i + (j - i) / 2;
        if (L[p] == X){
            found = 1;
            break;
        }
        if (L[p] < X) {
            i = p + 1;
        } else {
            j = p -1;
        }
    }
    return found == 1 ? p : NotFound;
}