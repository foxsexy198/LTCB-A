float nhietdoC(int c){
	return c*1.8+32;
}
int main(){
	int c;
	scanf("%d", &c);
	printf("%d do C = %.1f do F", c, nhietdoC(c));
	return 0;
}
