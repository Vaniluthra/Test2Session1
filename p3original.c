#include<stdio.h>

int input_number(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}

int is_prime(int n){
	//it is prime if its divisible by only 1 and 0
	for(int i = 2; i < n; i++){
		if(n % i != 0){
			return 0;
		}
	}
	return 1;
}

void output(int n, int isprime){
	if(isprime){
		printf("%d is a prime number\n", n);
	}else{
		printf("%d is not a prime number\n", n);
	}
}
int main(){
	int n, isprime;
	n = input_number();
	isprime = is_prime(n);
	output(n, isprime);
	return 0;
}
