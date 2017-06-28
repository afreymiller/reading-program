#include <stdio.h>

void strInput(char str[], int nchars) {
  int i = 0;
  int ch;
  while((ch = getchar()) != '\n' && ch != EOF ) {
    if (i < nchars) {
       str[i++] = ch;
    }
  }
  str[i] = '\0';
}

int main(void) {
  int nchars = chPrompt(nchars);
  char str[nchars + 1];  // + 1
  strInput(str, nchars);

  //Troubleshooting
  printf("%s\n", str);

  return 0;
}

int chPrompt(int nchars) {
  printf("How many chars do you need to input? >");
  if (scanf("%i", &nchars) != 1) {
    printf("Unable to read #\n"); 
  }

  // Consume remaining text in the line
  int ch;
  while((ch = getchar()) != '\n' && ch != EOF );

  return nchars;
}