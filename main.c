#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    for (int i = 0; strs[0][i]; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                strs[0][i] = '\0';  // Truncate at mismatch
                return strs[0];
            }
        }
    }
    return strs[0];
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int size = sizeof(strs) / sizeof(strs[0]);

    printf("Longest Common Prefix: \"%s\"\n", longestCommonPrefix(strs, size));
    return 0;
}
