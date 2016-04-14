int reverse(int x) {
    long h = 0;
	int r = x;
    do{
    	h = h*10 + r%10;
    	r /= 10;
    }while(r);
    if (h > INT_MAX || h < INT_MIN) {
        return 0;
    }
    return h;
}
