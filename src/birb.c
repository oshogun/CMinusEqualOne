// NO LOOK AT SAUCE!!!
#include "Birb.h"

// This is evil code
int main()
{
	Birb* someobjects[50];
	for (int i = 0; i < 50; ++i) {
		if (i % 2 == 0) {
			someobjects[i] = (Birb*) newBirb(i);
		} else {
			someobjects[i] = (Birb*) newParrot(i);
		}
	}

	for (int i = 0; i < 50; ++i) {
		if (someobjects[i] -> instanceof == BIRB) {
			printf("Am birb\n");
		} else if (someobjects[i] -> instanceof == PARROT) {
			printf("Am parrot\n");
		}
	}

}	