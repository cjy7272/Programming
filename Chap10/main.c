#include <stdio.h>
#include "contact.h"

void testContact();

int main()
{
	testContact();

	return 0;
}

void testContact()
{
	Contact c1 = { "È«±æµ¿", "01027780298", MAN, 2025 };
	Contact c2 = { "È«±æµ¿", "01027780298", MAN, 2025 };
	Contact c3 = { "±è±æµ¿", "01027780298", MAN, 2025 };
	
	printContact(c1);
}
