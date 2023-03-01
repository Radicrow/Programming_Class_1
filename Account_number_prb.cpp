#include <stdio.h>

void my_num(){
	
	int acc_num;
	
	printf("Input your account value: \n");
	scanf("%d", &acc_num);
	
	int c1,d1,u1;
	
	u1 = acc_num%10;
	d1 = (acc_num/10)%10;
	c1 = acc_num/100%10;

	int inv = u1 *100 + d1 * 10 + c1;
	
	int sum = inv + acc_num;
	
	printf("A) %d + %d = %d\n", acc_num, inv, sum);
	
	int c2,d2,u2;
	
	u2 = sum%10;
	d2 = (sum/10)%10;
	c2 = (sum/100)%10;
	
	int result_2 = 1*c2 + 2*d2 + 3*u2;

	printf("B) %i\n", result_2);
	
	int u3;
	
	u3 = result_2%10;
	
	printf("C) %i\n", u3);
	}
	
	int main(void){
		
		my_num();
	}
