#include <gb\gb.h>
#include <stdint.h>
#include <stdio.h>

#include <gb\hardware.h>

void main(void)
{

    DISPLAY_ON;
    SHOW_BKG;

    // Loop forever
    while(1) {

		// Game main loop processing goes here
        printf("hi");
		// Done processing, yield CPU and wait for start of next frame
        vsync();

    }

}
