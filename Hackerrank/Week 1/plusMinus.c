void plusMinus(int arr_count, int* arr) {
   
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    double positive_ratio = (double)positive / arr_count;
    double negative_ratio = (double)negative / arr_count;
    double zero_ratio = (double)zero / arr_count;
    
    printf("%.6f\n", positive_ratio);
    printf("%.6f\n", negative_ratio);
    printf("%.6f\n", zero_ratio);
}