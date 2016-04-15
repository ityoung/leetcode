//28ms
char* intToRoman(int num) {
    char* units[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    char* tens[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char* hundreds[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char* thousands[10] = {"","M","MM","MMM"};
    char*r;
    r = (char*)malloc(sizeof(char)*16);
    if(num>999){
        strcat(r, thousands[num/1000]);
        num%=1000;
    }
    if(num>99){
        strcat(r, hundreds[num/100]);
        num%=100;
    }
    if(num>9){
        strcat(r, tens[num/10]);
        num%=10;
    }
    if(num>0){
        strcat(r, units[num]);
    }
    return r;
}
