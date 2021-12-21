#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	bool played = PlaySound(TEXT("BGM.wav"), NULL, SND_SYNC);
	printf("played = %d\n", played);
	return 0;
}