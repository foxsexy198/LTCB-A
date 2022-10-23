int max3(int a, int b, int c){

	if(a>b && a>c)
		return a;
	else{
		if(b>c)
			return b;
		else 
			return c;
	}
}
int main(){
	int a, b, c;	
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", max3(a, b, c));
	return 0;
}
