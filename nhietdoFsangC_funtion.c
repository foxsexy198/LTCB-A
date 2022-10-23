float nhietdoF(int f){
	return (f-32)/1.8;
}
int main(){
	int f;
	scanf("%d", &f);
	printf("%d do F = %.2f do C",f, nhietdoF(f));
	return 0;
}
