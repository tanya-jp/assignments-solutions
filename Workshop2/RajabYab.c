#include <stdio.h>

int main() {
	int n, res, flag = 1;
    char ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0, ch5 = 0, last;
    scanf("%d", &n);
    scanf("%c", &last); // read new line feed
    for (int i = 0; i < n && flag; i++) {
        scanf("%c", &last);
        if (i >= 5) { // Shift data in ch1 to ch5
            ch1 = ch2;
            ch2 = ch3;
            ch3 = ch4;
            ch4 = ch5;
            ch5 = last;
            // Can we reverse the order of assignments?
		} else { // Initialize ch1 to ch5
			if (i == 0)
				ch1 = last;
			if (i == 1)
				ch2 = last;
			if (i == 2)
				ch3 = last;
			if (i == 3)
				ch4 = last;
			if (i == 4)
				ch5 = last;
		}
		if (i >= 4) {
			// Now check whether "rajab" exists in the text
			res = (ch1 == 'r') + (ch2 == 'a') + (ch3 == 'j') + (ch4 == 'a') + (ch5 == 'b');
			if (res == 5) {
				printf("YES");
				flag = 0;
				// return 0;
				// break;
			}
		}
    }
    if (flag) 
        printf("NO");
}
