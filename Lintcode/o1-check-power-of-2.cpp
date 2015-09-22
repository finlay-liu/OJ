bool checkPowerOf2(int n) {
	if( (n & (n - 1)) || n <= 0)
		return false;
	else
		return true;
}