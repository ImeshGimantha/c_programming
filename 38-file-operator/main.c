#include <stdio.h>

int main() {

    // write a file
    FILE *File = fopen("output.txt", "w");

    char text[] = "Hello MotherFather!\nWhat the hell are you doing?";

    if (File == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(File, "%s", text);

    printf("File was written successfully!\n");

    fclose(File);



    // read a file
    FILE *pFile = fopen("output.txt", "r");

    char buffer[1024] = {0};

    if (pFile == NULL) {
        printf("Could not open this file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;

}