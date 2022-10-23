int is_leap_year(int n){
	return (((n%4==0)&& (n%100!=0)) || n%400==0);
}
int main(){
	int n;
	scanf("%d", &n);
	if(is_leap_year(n))
		printf("%d is a leap year.", n);
	else
		printf("%d is not a leap year.", n);
	return 0;
}
