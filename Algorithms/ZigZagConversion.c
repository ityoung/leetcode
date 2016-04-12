//O(N)
char* convert(char* s, int numRows) {
    int len = strlen(s), i = 1, t_index = 0, index1 = 0, index2;
    char *t;
    if(numRows<2)
  		return s;
    t = (char*)malloc(sizeof(char)*(len+1));
    while(index1<len){
    	t[t_index++] = s[index1];
    	index1+=2*numRows -2;
    }
    for(i = 1; i<numRows-1; i++){
		index1 = i, index2 = 2*numRows - i-2;
    	while(1){
	    	if(index1<len){
	    		t[t_index++] = s[index1];
	    		index1 += 2*numRows -2;
	    	}
	    	else
	    		break;
    		if(index2<len){
		    	t[t_index++] = s[index2];
		    	index2 += 2*numRows - 2;
		    }
		    else
		    	break;
	    }
    }
    index1 = i;
    while(index1<len){
    	t[t_index++] = s[index1];
    	index1+=2*numRows -2;
    }
    t[len] = '\0';
    return t;
}
