#include <iostream>
#include <Windows.h>
#include <mmsystem.h>


using namespace std;

#include <common/sound.h>


Sound::Sound(const char* soundpath) {
	PlaySound(soundpath, NULL, SND_ASYNC | SND_FILENAME);
}