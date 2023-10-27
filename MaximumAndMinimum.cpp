 #include <iostream>
    using namespace std;

    void MaximumandMinimum(int *, int);
    void exchange(int, int);
    int main(){
        const int size = 6;
        int arr[size] = {1, 2, 3, 4, 5, 6};
        cout << "Before array exchange: ";
        for (int i = 0; i <size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        MaximumandMinimum(arr, size);
        cout << "After array exchange: ";
        for (int i =0; i < size; i++){
            cout << arr[i] << " ";
        }
        return 0;

    }
    void exchange(int *a, int *b){
        int temp = *a;
            *a = *b;
            *b = temp;
    }
    void MaximumandMinimum(int *arr, int size){
    int *MaxValue = arr;
    int *MinValue = arr;
    for (int i =0; i < size; i++){
        if (arr[i] > *MaxValue){
            MaxValue = &arr[i];
        }
        if (arr[i] < *MinValue){
            MinValue = &arr[i];
        }
    }
    exchange(MaxValue, MinValue);
    }
