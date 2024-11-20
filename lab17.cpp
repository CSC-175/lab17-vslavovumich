// Definition of findHigh function goes here
template <typename A, typename B>
void findHigh(A arr[], int size, int &index, B &highnum) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > highnum) {
            index = i;
            highnum = arr[i];
        }
    }
}