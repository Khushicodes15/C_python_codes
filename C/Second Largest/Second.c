int getSecondLargest(int *arr, int n) {
    if (n < 2) return -1;  

    int max = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;  
}
    
    
    