int main() {
    char str[] = "bbbbb";
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0';j++) {
            if (str[i] == str[j]) {
                // Shift characters to the left
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);
    i=0;
    while(str[i]!='\0'){
        i++;
    }
printf("%d",i);
}
