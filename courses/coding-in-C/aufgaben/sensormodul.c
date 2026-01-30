#include <stdio.h>

int main(void)
{
    unsigned char status = 0xA7;

    unsigned char FEHLER_MASK   = 1 << 7;
    unsigned char TEMP_MASK     = 1 << 6;
    unsigned char UNTERSP_MASK  = 1 << 5;
    unsigned char MESSWERT_MASK = 0x0F;


    int fehler        = (status & FEHLER_MASK) != 0;
    int uebertemp     = (status & TEMP_MASK) != 0;
    int unterspannung = (status & UNTERSP_MASK) != 0;


    unsigned char messwert = status & MESSWERT_MASK;

    
    printf("Fehler: %s\n", fehler ? "JA" : "NEIN");
    printf("Übertemperatur: %s\n", uebertemp ? "JA" : "NEIN");
    printf("Unterspannung: %s\n", unterspannung ? "JA" : "NEIN");
    printf("Messwert: %d\n", messwert);

    return 0;
}
