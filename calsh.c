#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
char c1[] = "plus";
char c2[] = "minus";
char c3[] = "varpr";
char c4[] = "help";
char c5[] = "inc";
char c6[] = "dec";
char c7[] = "mltpl";
char c8[] = "divide";
char c9[] = "version";
char c10[] = "power";
char c11[] = "exit";
char command[256];
int one, two;
int res;
printf("calsh is ready\n");
printf(">> ");
while(1) {

gets (command);
if(strcmp(c1, command)==0) {
scanf("%d", &one);
scanf("%d", &two);
res = one + two;
printf("Ok\n");

} //c1
else if(strcmp(c2, command)==0){
scanf("%d", &one);
scanf("%d", &two);
res = one - two;
printf("Ok\n");
	printf(">> ");
}//c2
else if(strcmp(c3, command)==0){
printf("%d\n", res);
printf(">> ");
}//c3
else if(strcmp(c4, command)==0){

printf("plus - n + n1\n minus - n - n1\n varpr - print result\n help - this message\n inc, dec - increment and decrement result\n mltpl - n * n1\n divide - n/n1\n version - print version\n power - n^n1.\n exit - exit \n >> ");
}//c4
else if(strcmp(c5, command)==0){
++res;
printf("Ok\n");
	printf(">> ");
}//c5
else if(strcmp(c6, command)==0){
--res;
printf("Ok\n");
	printf(">> ");
}//c6
else if(strcmp(c7, command)==0){
scanf("%d", &one);
scanf("%d", &two);
res = one * two;
printf("Ok\n");
	printf(">> ");
}//c7
else if(strcmp(c8, command)==0){
scanf("%d", &one);
scanf("%d", &two);
res = one / two;
printf("Ok\n");
	printf(">> ");
}//c8
else if(strcmp(c9, command)==0){
printf("calsh ver 0.01 09.08.2019");
}//c9
else if(strcmp(c10, command)==0){
scanf("%d", &one);
scanf("%d", &two);
res = pow(one, two);
printf("Ok\n");
	printf(">> ");
}//c10
	else if(strcmp(c11, command)==0)
		break;
else {
	printf("not found\n");
	printf(">> ");
	
}
	} //while
	return 0;
} //main