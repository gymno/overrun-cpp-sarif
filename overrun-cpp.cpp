#include <cstdio>
#include <cstdlib>

void func (int a) {
	int* b;
	int size = 4;
	b = (int*)malloc(sizeof(int) * size);
	
	if (a < 5)
	  b[1+a] = 100;

	return;
}

int main () {
	int a = 4;
	func(a);
	return 0;
}
