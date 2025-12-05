//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int lengthOfLongestSubstring(const char *s) {
    int last[256];
    // initialize to -1
    for (int i = 0; i < 256; ++i) last[i] = -1;

    int best = 0, start = 0; // current window start index
    for (int i = 0; s[i] != '\0'; ++i) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            // character repeated inside current window -> move start
            start = last[c] + 1;
        }
        last[c] = i;                       // update last seen position
        int len = i - start + 1;           // window length
        if (len > best) best = len;
    }
    return best;
}

int main(void) {
    char buf[200005];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;

    // strip trailing newline
    size_t n = strlen(buf);
    if (n && buf[n-1] == '\n') buf[--n] = '\0';

    // Try to extract the actual string:
    // 1) If quoted, take content between first and last quote.
    // 2) Else if 's =' form, take what's after '=' trimmed.
    // 3) Else, use the whole line.
    char s[200005] = {0};

    char *firstQuote = strchr(buf, '"');
    char *lastQuote  = firstQuote ? strrchr(firstQuote + 1, '"') : NULL;
    if (firstQuote && lastQuote && firstQuote < lastQuote) {
        size_t len = (size_t)(lastQuote - firstQuote - 1);
        if (len >= sizeof(s)) len = sizeof(s) - 1;
        memcpy(s, firstQuote + 1, len);
        s[len] = '\0';
    } else {
        char *p = buf;
        char *eq = strchr(buf, '=');
        if (eq) p = eq + 1; // after '='
        // trim leading spaces
        while (*p && isspace((unsigned char)*p)) p++;
        // copy remaining
        strncpy(s, p, sizeof(s) - 1);
        s[sizeof(s) - 1] = '\0';
        // trim trailing spaces
        size_t m = strlen(s);
        while (m && isspace((unsigned char)s[m-1])) s[--m] = '\0';
    }

    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}
