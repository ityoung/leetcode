//24ms
char* intToRoman(int num) {
	char* roma[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}, i;
    char*r;
    r = (char*)malloc(sizeof(char)*16);
    *r = '\0';
   	for(i = 0;i<13;i++){
		while(num-val[i]>=0){
			strcat(r, roma[i]);
	    	num-=val[i];
		}
	}
	return r;
}
