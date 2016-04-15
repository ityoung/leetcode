//20ms
char* intToRoman(int num) {
    char* roma[4][10] = {
		{"","M","MM","MMM"},
		{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
		{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
    	{"","I","II","III","IV","V","VI","VII","VIII","IX"}
    };
    int i = 0, j[4] = {1000,100,10,1};
    char*r;
    r = (char*)malloc(sizeof(char)*16);
    *r = '\0';
    while(num!=0){
		strcat(r, roma[i][num/j[i]]);
    	num%=j[i++];
    }
    return r;
}
