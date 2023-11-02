#include <stdio.h>
#include <string.h>

int main() {
    // Definer den korrekte n�gle
    char correct_key[] = "Dch68dbhkoldfodHH";

    char input_key[100]; // Brugerens indtastede n�gle

    // Bed brugeren om at indtaste n�glen
    printf("Indtast n�glen for at f� adgang til filen 'william_bilgav_story.txt': ");
    scanf("%s", input_key);

    // Sammenlign indtastet n�gle med den korrekte n�gle
    if (strcmp(input_key, correct_key) == 0) {
        // �bn filen, n�r n�glen er korrekt
        FILE *file = fopen("william_bilgav_story.txt", "r");
        if (file == NULL) {
            perror("Kunne ikke �bne filen");
            return 1;
        }

        // L�s og udskriv filens indhold
        char line[10000];
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }

        // Luk filen
        fclose(file);
    } else {
        printf("Forkert n�gle. Adgang n�gtet.\n");
    }

    return 0;
}
