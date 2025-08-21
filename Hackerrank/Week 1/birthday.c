int birthday(int s_count, int* s, int d, int m) {
    if (s_count < m) {
        return 0;
    }
    
    int ways = 0;
    long current_sum = 0;
    
    for (int i = 0; i < m; i++) {
        current_sum += s[i];
    }
    
    if (current_sum == d) {
        ways++;
    }
    
    for (int i = m; i < s_count; i++) {
        current_sum = current_sum - s[i - m] + s[i];
        if (current_sum == d) {
            ways++;
        }
    }
    
    return ways;

}