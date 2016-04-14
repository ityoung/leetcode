bool isMatch(char* s, char* p) {
	if(*p == '\0')              //'.' and '*' only exist in p
		return *s == '\0';
	if(*(p+1)=='*'){
		while((*s !='\0'&&*p =='.')||*s==*p){       //solve string like aaaaaa with a*
			if(isMatch(s,p+2))
				return true;
			s++;
		}
		return isMatch(s,p+2);
	}
	else if((*s !='\0'&&*p =='.')||*s==*p)
		return isMatch(s+1, p+1);
	else
	    return false;
}
