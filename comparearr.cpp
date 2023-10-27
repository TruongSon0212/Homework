#include <iostream>
using namespace std;

bool arrCmp(int *, int *, int);
int main(){
    const int size = 4;
    int arr1[size] = {1, 2, 3, 4};
    int arr2[size] = {1, 2, 3, 4};

    bool result = arrCmp(arr1, arr2, size);
    cout << "Compare arr1 and arr2: " << boolalpha << result << endl;
    return 0;
}
bool arrCmp(int *arr1, int *arr2, int size){
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (int i =0; i < size; i++){
        if(*ptr1 != *ptr2){
            return false;
        }
        ptr1++;
        ptr2++;
    }
    return true;
}