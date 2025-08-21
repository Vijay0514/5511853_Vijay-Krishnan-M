long sumXor(long n) {
    int zero_bits = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            zero_bits++;
        }
        n >>= 1;
    }
    if (zero_bits == 0) {
        return 1;
    }
    return 1L << zero_bits;

}