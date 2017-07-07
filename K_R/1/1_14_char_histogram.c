#include <stdio.h>

#define MAX 5	// Maximum length of a word

// Horizontal histogram of word lengths
main() {
	int nchars[MAX], i, x, c;
	
	for (i = 0; i < MAX; ++i) {
		nchars[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		switch (c) 
		{
			case 'a':
				nchars[0] += 1;
				break;
			case 'b':
				nchars[1] += 1;
				break;
			case 'c':
				nchars[2] += 1;
				break;
			case 'd':
				nchars[3] += 1;
				break;
			case 'e':
				nchars[4] += 1;
				break;
			default:
				break;
		}
	}
	
	for (i = 0; i < MAX; ++i) {
		printf("%2d ", i);
		for (x = 0; x < nchars[i]; ++x) {
			printf("|");
		}
		printf("\n");
	}
}