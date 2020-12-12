#include <stdio.h>

int main() {
	int n, min, res, d1, d2, d3, d4, d5;
    char ch1, ch2, ch3, ch4, ch5, last; // Stores 5 consequent characters
    scanf("%d", &n);
    scanf("%c", &last);
    for (int i = 0; i < n; i++) {
        scanf("%c", &last);
        if (i >= 5) { // Shift data in ch1 to ch5
            ch1 = ch2;
            ch2 = ch3;
            ch3 = ch4;
            ch4 = ch5;
            ch5 = last;
            // Can we reverse the order of assignments? First ch5 = last, then ch4 and so on
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
            // Note the semicolons at the end of lines. What happens if we omit them?
        }
        if (i >= 4) { // Now calculate the minimum operations to obtain a "rajab"
            res = 0;
            
            d1 = (d1 = ch1 - 'r') > 0 ? d1 : -d1;
            res += d1 < 13 ? d1 : 26 - d1;

            d2 = (d2 = ch2 - 'a') > 0 ? d2 : -d2;
            res += d2 < 13 ? d2 : 26 - d2;

            d3 = (d3 = ch3 - 'j') > 0 ? d3 : -d3;
            res += d3 < 13 ? d3 : 26 - d3;

            d4 = (d4 = ch4 - 'a') > 0 ? d4 : -d4;
            res += d4 < 13 ? d4 : 26 - d4;

            d5 = (d5 = ch5 - 'b') > 0 ? d5 : -d5;
            res += d5 < 13 ? d5 : 26 - d5;

            if (i == 4)
                min = res;
            if (res < min)
                min = res;
        }
    }
    printf("%d", min);
}
