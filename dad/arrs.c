
#include <stdio.h>

int strlen_mine(char *s) {
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return n;

}

int main() {
	char s[10] = "hello";

	int x = strlen_mine(s);
	printf("Strlen: %d\n", x);

	return 0;
}
