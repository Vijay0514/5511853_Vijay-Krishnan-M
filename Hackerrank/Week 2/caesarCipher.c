char* caesarCipher(char* s, int k) {
     k %= 26;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            char base = islower(s[i]) ? 'a' : 'A';
            s[i] = base + (s[i] - base + k) % 26;
        }
    }
    return s;

}