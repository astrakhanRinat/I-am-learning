#include <stdio.h>

void main(void)
{
	double mass_mol_water = 3.0e-23;
	int mass_quart_water = 950;
	int water_by_quarts;

	printf("Enter water by quarts: "); 
	scanf("%d", &water_by_quarts);
	printf("The quantity of molecules in %d quarts of water is %e\n", 
			water_by_quarts, water_by_quarts * mass_quart_water / mass_mol_water);
}
