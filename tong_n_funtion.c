long long sum(int n){
    long long s;
    if(n==0){
        s=0;
    }
    if(n>0){
        s=(n*(n+1))/2;
    }
    return s;
}
int main(){
	int n;
	scanf("%d", &n);
	long long s=sum(n);
	printf("%llld", s);
	return 0;
}
