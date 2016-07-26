// Write a program that displays a rectangle of asked height
// and width made out of '*' characters. ie 3x3 would be
//			***
//			***
//			***

/* yleiset kirjastot */
#include <stdio.h> /* lukemista ja tulostusta varten */
#include <ctype.h> /* tyypin tarkistamista varten */
#include <stdlib.h> /* muuntaa merkin luvuksi */
#include <string.h> /* string pituuden laskeminen */

/* omat headerit */
#include "rectangle.h"

/* tässä tiedostossa näkyvät muuttujat */
int testi_1 = 0;
int testi_2 = 1;
int eka = 0;
int toka = 0;
char luku_1[7];
char luku_2[7];

/* ohjelman pääfunktio */
int main(void)
	{
    int i;
	printf( " Minkä kokoisen \"tähtineliön\" haluat minun piirtävän? \n" );

	printf( "\n Korkeus: " );
	testi_1 = scanf( "%s", luku_1 );
    tarkistus();
    
	printf( "\n Leveys: " );
	testi_1 = scanf( "%s", luku_2 );
    tarkistus();
    
    eka = atof( luku_1 );
    toka = atof( luku_2 );

    tee_nelio( eka, toka );

	return 0;
	}

void tarkistus( )
    {
	if ( 0 > testi_1 ) /* negatiivinen arvo indikoi virhettä, positiivinen merkkien määrä */
		{
		printf( "\n Virhe: lukeminen epäonnistui \n");
		}
    else if ( 0 == testi_2 ) /* nolla indigoi virhettä */
		{
		printf( "\n Virhe: annoit vääräntyyppisen merkin, anna numero. \n" );
		}
    }

void tee_nelio( int ensimmainen_luku, int toinen_luku )
    {
    int i;
    int j;
    char nelio[ensimmainen_luku][toinen_luku];

    /* täytä taulukko tähdillä */
    for ( i=0; i<=ensimmainen_luku; i++) /* ensimmäinen ulottuvuus */
        {
        for (j=0; j<=toinen_luku; j++) /* toinen ulottuvuus */
            {
            nelio[i][j] = '*';
            }
        }

    /* tulosta taulukko */
    for ( i=0; i<ensimmainen_luku; i++) /* ensimmäinen ulottuvuus */
        {
        for (j=0; j<toinen_luku; j++) /* toinen ulottuvuus */
            {
            printf("%c", nelio[i][j]);
            if ( j == toinen_luku-1 )
                {
                printf("\n");
                }
            }
        }
    printf("\n");
    }
