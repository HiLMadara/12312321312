#include <stdio.h>
int myStrlen(char* s) {
	int len = 0;
	while (s[len] != 0) {
		len++;
	}
	return len;
}

int main(void)
{
	int i, j, tmp, c;
	char str[50] = "";
	fgets(str, 50, stdin);
	for (int i = 0; str[i] != '\n'; i++) {
		if ((str[i] != ' ') || (str[i] >= 'A' && str[i] <= 'Z')) {
			int lenght = myStrlen(str);
			for (i = 0, j = lenght - 1; i < j; i++, j--) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
		else {
			return 1;
		}
		
	}

	return 0;
}

