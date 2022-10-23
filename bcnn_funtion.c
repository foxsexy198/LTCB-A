void reduce(int a, int b){
	int tmp1=a, tmp2=b;
	int ucln=0;
	int r;
	while(b!=0){
	    r=a%b;
	    a=b;
	    b=r;
	    ucln=a;
	}
	int tu=tmp1/ucln;
	int mau=tmp2/ucln;
	printf("%d/%d = %d/%d", tmp1, tmp2, tu, mau);
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	reduce(a,b);
	return 0;
}
