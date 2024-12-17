#include <windows.h>
 
int main()
{
	HDC hdc = GetDC(0);
 
	int y = GetSystemMetrics(0);
    int x = GetSystemMetrics(0);
 
    int sw = GetSystemMetrics(0);
    int sh = GetSystemMetrics(0);
 
    while(true)
    {
    	BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, y, x, hdc, 0, 0, SRCCOPY);
 
    	BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, sw, sh, hdc, 0, 0, SRCCOPY);
	}
}

