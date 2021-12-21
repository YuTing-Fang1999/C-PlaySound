#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	bool played = PlaySound(TEXT("people-stadium-cheer1.wav"), NULL, SND_SYNC);
	printf("played = %d\n", played);
	return 0;
}
