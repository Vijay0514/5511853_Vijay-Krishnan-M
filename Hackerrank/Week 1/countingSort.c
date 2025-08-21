int* countingSort(int arr_count, int* arr, int* result_count) {

 *result_count = 100;
    int* frequency_array = calloc(100, sizeof(int));
    
    for (int i = 0; i < arr_count; i++) {
        frequency_array[arr[i]]++;
    }
    
    return frequency_array;
}
