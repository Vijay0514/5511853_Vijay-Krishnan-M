char* timeConversion(char* s) {

int hh = (s[0] - '0') * 10 + (s[1] - '0');
    
    if (s[8] == 'P' && hh != 12) {
        hh += 12;
    }
    if (s[8] == 'A' && hh == 12) {
        hh = 0;
    }
    
    s[0] = (hh / 10) + '0';
    s[1] = (hh % 10) + '0';
    s[8] = '\0';
    
    return s;
}
