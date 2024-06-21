#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int minute, dizaine_minute, unite_minute;
	int heure, dizaine_heure, unite_heure;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			dizaine_heure = heure / 10;
			unite_heure = heure - (dizaine_heure * 10);
			dizaine_minute = minute / 10;
			unite_minute = minute - (dizaine_minute * 10);

			_putchar(dizaine_heure + '0');
			_putchar(unite_heure + '0');
			_putchar(':');
			_putchar(dizaine_minute + '0');
			_putchar(unite_minute + '0');
			_putchar('\n');
		}
	}
}

