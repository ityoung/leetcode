int myAtoi(char* str) {
	long result = 0;
	int i, isminus = 1, length = 0, meaningless = 0;
	for(i = 0; i<strlen(str);i++){
		if('9' < str[i] || str[i]< '0'){		//while str[i] is not a digit
			if(!(length+meaningless)){		//if there is no digit before this character(str[i])
				if(str[i]=='-'||str[i]=='+'){	
					if('9'<str[i+1]||str[i+1]<'0')		//if '+'/'-' comes before non-digit
						return 0;
		    			if(str[i] == '-')	//if '+'/'-' comes before digit and there is no digit before
			    			isminus = -1;	//the '+'/'-' is represant minus or not
				}
				else if(str[i]!=' ')		//if there is no digit before, and str[i] is not '-','+',' '
					return 0;		//then means the str is not to match, return 0
			}
			else					//if there are digits before and now is a non-digit character
				break;				//break to end the loop, no matter the latter whether exits digit.
		}
		else if(result == 0&&str[i]=='0')		//to count '0' before non-zero digit
		    meaningless++;				//inorder to tell there has digit when loop
		else{
			length++;				//to count from the first non-zero digit to last valid digit
			if(length-meaningless>10)		//INT_MAX and INT_MIN's length is 10, prevent overflow
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
