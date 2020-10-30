#include <stdio.h>
int myStrlen(char* s) {
	int len = 0;
	while (s[len] != 0) {
		len++;
	}
	return len;
}

void printReverse(char str[])

{

    int length = myStrlen(str);
    if (str[length - 1] = '\n') {
        str[length - 1] = '\0';
    }
    int i;

    for (i = length - 1; i >= 0; i--) {

        if (str[i] == ' ') {




            str[i] = '\0';

            printf("%s ", &(str[i]) + 1);

        }
        
    }


    printf("%s", str);

}

int main()

{
    
    char b[15] = "tab idet nahui";
    char str[50] = "";
    fgets(str, 50, stdin);
    int c = myStrlen(str);
    for (int i = 0; i<=c ; i++) {
        if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z'))) {
           
                if (i = c) {
                    printReverse(str);
                }
            
        }
        else {
            str[i] = ' ';
            if (i = c) {
                printReverse(str);
           }
        }
    }
    
     
    return 0;

}