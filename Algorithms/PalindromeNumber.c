bool isPalindrome(int x) {
    int h,l;
    long t=1;
    if(x<0)
    	return false;
   	else if(x < 10)
   		return true;
    while(x/(t*10)>0)
		t*=10;
	while(x){
	    h = x/t;
	    l = x%10;
	    if(h != l)
	        return false;
	    x -= h*t;
	    x /= 10;
	    t /= 100;
	}
	return true;
}
