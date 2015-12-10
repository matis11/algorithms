#include <windows.h>
int main(int argc, char * argv[])
{
   HWND Wind;
   while(1)
   {
        Wind = GetForegroundWindow();
        ShowWindow(Wind, false);
   }
}
