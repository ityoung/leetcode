int myAtoi(char* str) {
	long result = 0;
	int i, isminus = 1, length = 0, meaningless = 0;
	for(i = 0; i<strlen(str);i++){
		if('9' < str[i] || str[i]< '0'){
			if(!(length+meaningless)){
				if(str[i]=='-'||str[i]=='+'){
					if('9'<str[i+1]||str[i+1]<'0')
						return 0;
					else{
    					if(i>0&&('+'==str[i-1]||'-'==str[i-1]))
	    					return 0;
		    			else if(str[i] == '-')
			    			isminus = -1;
					}
				}
			    else if(str[i]!=' ')
				    return 0;
			}
			else
				break;
		}
		else if(result == 0&&str[i]=='0')
		    meaningless++;
		else{
			length++;
			if(length-meaningless>10)
			    return isminus==1?INT_MAX:INT_MIN;
			result = result*10 + str[i]-'0';
		}
	}
	result *= isminus;
	if(result>INT_MAX)
		return INT_MAX;
	if(result<INT_MIN)
		return INT_MIN;
	return result;
}
