# Playing Sound Files in C++ using Visual Studio  
tutorial : https://www.youtube.com/watch?v=9WeDQHi6sJs  

### code
```
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	bool played = PlaySound(TEXT("people-stadium-cheer1.wav"), NULL, SND_SYNC);
	printf("played = %d\n", played);
	return 0;
}
```

### vs2019 setup

屬性>連結器>輸入>其他相依姓: `Winmm.lib`

