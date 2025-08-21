long long countSetBits(long long n) {
    long long count = 0;
    while (n > 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}
char* counterGame(long n) {
     if (n == 1) {
        return "Richard";
    }

    long long setBits = countSetBits(n);
    long long trailingZeros = 0;
    long long temp = n;
    while ((temp & 1) == 0 && temp != 0) {
        trailingZeros++;
        temp >>= 1;
    }

    if ((setBits + trailingZeros -1) % 2 == 0) {
        return "Richard";
    } else {
        return "Louise";
    }

}