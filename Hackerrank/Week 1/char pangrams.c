char* pangrams(char* s) {
     bool found[26] = {false};
    
    for (int i = 0; s[i] != '\0'; i++) {
        char lower_char = tolower(s[i]);
        if (lower_char >= 'a' && lower_char <= 'z') {
            found[lower_char - 'a'] = true;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (!found[i]) {
            return "not pangram";
        }
    }
    
    return "pangram";

}
