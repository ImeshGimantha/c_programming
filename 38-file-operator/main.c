#include <stdio.h>

int main() {

    FILE *File = fopen("output.txt", "w");

    char text[] = "Hello MotherFather!\nWhat the hell are you doing?";

    if (File == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(File, "%s", text);

    printf("File was written successfully!\n");

    fclose(File);

    return 0;

}