#include <stdio.h>

int main(void)
{
    unsigned char status = 0xA7;

    // Bitmasken
    unsigned char FEHLER_MASK   = 1 << 7; // Bit 7
    unsigned char TEMP_MASK     = 1 << 6; // Bit 6
    unsigned char UNTERSP_MASK  = 1 << 5; // Bit 5
    unsigned char MESSWERT_MASK = 0x0F;   // Bits 0–3 (0000 1111)

    // 1. Statusbits prüfen
    int fehler        = (status & FEHLER_MASK) != 0;
    int uebertemp     = (status & TEMP_MASK) != 0;
    int unterspannung = (status & UNTERSP_MASK) != 0;

    // 2. Messwert extrahieren
    unsigned char messwert = status & MESSWERT_MASK;

    // 3. Ausgabe
    printf("Fehler: %s\n", fehler ? "JA" : "NEIN");
    printf("Übertemperatur: %s\n", uebertemp ? "JA" : "NEIN");
    printf("Unterspannung: %s\n", unterspannung ? "JA" : "NEIN");
    printf("Messwert: %d\n", messwert);

    return 0;
}
