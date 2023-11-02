#include <stdio.h>
#include <string.h>

int main() {
    // Definer den korrekte nøgle
    char correct_key[] = "Dch68dbhkoldfodHH";

    char input_key[100]; // Brugerens indtastede nøgle

    // Bed brugeren om at indtaste nøglen
    printf("Indtast nøglen for at få adgang til filen 'william_bilgav_story.txt': ");
    scanf("%s", input_key);

    // Sammenlign indtastet nøgle med den korrekte nøgle
    if (strcmp(input_key, correct_key) == 0) {
        // Åbn filen, når nøglen er korrekt
        FILE *file = fopen("william_bilgav_story.txt", "r");
        if (file == NULL) {
            perror("Kunne ikke åbne filen");
            return 1;
        }

        // Læs og udskriv filens indhold
        char line[10000];
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }

        // Luk filen
        fclose(file);
    } else {
        printf("Forkert nøgle. Adgang nægtet.\n");
    }

    return 0;
}
