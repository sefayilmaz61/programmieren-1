#include <stdio.h>

int main(void) {
   
    FILE *f = fopen("C:/Users/sefaa/programmieren1/courses/coding-in-C/Lab_6/input.txt", "r");

    
    if (f == NULL) 
    {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }

    int c = fgetc(f);
    printf("Dateiinhalt 1 Zeichen: %c\n", c);

    char s[100];
    fgets(s, 100, f);
    printf("Dateiinhalt 1 Zeile: %s", s);
    
    char p[100];
    fscanf(f, "%s", p);
    printf("Dateiinhalt 1 Wort: %s\n", p);

    FILE *f2 = fopen("C:/Users/sefaa/programmieren1/courses/coding-in-C/Lab_6/input.txt", "w");

    if (f2 == NULL) 
    {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }
    
    
    fputc('Y', f2);
    fputs("Hallo Welt!\n", f2);
    fprintf(f2, "Trabzon61 kara\n");
    fclose(f);  

    

    fclose(f2);


}