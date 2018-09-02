// NO LOOK AT SAUCE!!!
#include "Birb.h"

// This is evil code
int main()
{

	auto(birb, (Birb*)newBirb(12));
	auto(parrot, (Birb*)newParrot(24));

	// This is totally inheritance guys
	callMethod(birb, printAge);
	callMethod(parrot,printAge);

	birb->printAge(parrot); // this works, and it shouldn't
	parrot->printAge(birb); // this works, and it shouldn't
}	