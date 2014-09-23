#include <iostream>

using namespace std;

int x = 2;
int y = 3;



int doSomething(int x, int y) {
	int temp = x;
	x = y + 10;
	y = temp * 10;
	temp = *x + *y / -*x;
	return temp;
}