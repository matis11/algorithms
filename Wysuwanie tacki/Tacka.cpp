#include<iostream>
#include<mmsystem.h>
#include<winmm.lib>
#include <windows.h>

int main(){

	mciSendString("Set CDAudio Door Open wait", 0, 0, 0); //otwieranie
// mciSendString("Set CDAudio Door Closed wait", 0, 0, 0); //zamykanie

}
