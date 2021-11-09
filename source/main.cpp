#include <3ds.h>
#include <stdio.h>

int main(int argc, char **argv) {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

	printf("Copy Save Data from Game Card to Digital Title\nMade by ManiacOfGitHub");
	

	printf("\x1b[20;15HPress L+A to copy or push Start to exit.");

    while(aptMainLoop()) {
        gspWaitForVBlank();
        hidScanInput();

        if(hidKeysDown() & KEY_START) break;
	if(hidKeysDown() & KEY_A && hidKeysDown & KEY_L) {
		printf("\x1b[1;1HThis is where it would copy the code if I wasn't so bad at programming in C++.");
	}
        gfxFlushBuffers();
        gfxSwapBuffers();
    }

    gfxExit();
    return 0;
}
