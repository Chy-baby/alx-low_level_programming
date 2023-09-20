#include <stdio.h>
int add(int a, int b){
int c = a + b;
return (c);
}
int sub(int a, int b){
int c = a - b;
return (c);
}
int mul(int a, int b){
int c = a * b;
return (c);
}
int my_div(int a, int b){
if (b == 0){
	printf("Error:Division by zero!\n");
	return 0;
}
int c = a / b;
return (c);
}
int mod(int a, int b){
if (b == 0){
	printf("Error:Module by zero!\n");
	return 0;
}
int c = a % b;
return (c);
}
