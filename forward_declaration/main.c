#include "animal.h"
#include "dog.h"

int main() {
	struct animal a = {1, 3};
	struct dog d = {&a, 50, 20};
	return 0;
}

