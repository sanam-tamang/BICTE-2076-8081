#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include<time.h>

#define myY 12
#define myX 24

char map[myY][myX], key;
int alive = 1, x, y, gameSpeed = 200, score = 0, dirX, dirY, oldBodyCor[myY*myX][2], body[myY*myX][2], numOfBody = 0;

void genMap();
void draw();
void move();
void genPlayer();
void genEnemy();
void hideCursor();
void kInp();
void genDefDir();
void goToXY(int column, int line);
void grow();
void freeMove();
void reset();

int main() {
    hideCursor();
    do {
        system("cls");
        genMap();
        genPlayer();
        genDefDir();
        genEnemy();
        while (alive) {
            Sleep(gameSpeed);
            kInp();
            move();
            draw();
        }
        system("cls");
        while (1) {
            goToXY(0, 0);
            printf("YOU DIED");
            printf("\nFINAL SCORE : %d", score);
            printf("\nDo you want to try again?[y/n]");
            key = _getch();
            if (key == 'y') {
                alive = 1;
                reset();
                break;
            } else if (key == 'n') {
                EXIT_SUCCESS;
                break;
            }
        }
    } while (alive);
}

void genMap() {
    int x, y;
    for (y = 0; y < myY; ++y) {
        for (x = 0; x < myX; ++x) {
            if (y == 0 || y == myY - 1) {
                map[y][x] = '#';
            } else if (x == 0 || x == myX - 1) {
                map[y][x] = '#';
            } else {
                map[y][x] = ' ';
            }
        }
    }
}
void grow() {
    if (numOfBody == 0) {
        ++numOfBody;
        map[body[0][0] - dirY][body[0][1] - dirX] = '*';
        body[1][0] = body[0][0] - dirY;
        body[1][1] = body[0][1] - dirX;
        return;
    }
    for (int i = 0; i <= numOfBody; ++i) {
        if (i == numOfBody) {
            body[i + 1][0] = oldBodyCor[i][0];
            body[i + 1][1] = oldBodyCor[i][1];
            map[body[i + 1][0]][body[i + 1][1]] = '*';
            ++numOfBody;
            return;
        }
    }
    return;
}
void genDefDir() {
    srand(time(NULL));
    for (y = 0; y < myY; ++y) {
        for (x = 0; x < myX; ++x) {
            switch (map[y][x]) {
            case '@':
                if (y <= (myY / 2) - 1 && x <= (myX / 2) - 1) {
                    if ((rand() % 2) == 0) {
                        dirX = 1;
                        dirY = 0;
                        return;
                    } else {
                        dirX = 0;
                        dirY = 1;
                        return;
                    }
                } else if (y <= (myY / 2) - 1 && x > (myX / 2) - 1) {
                    if ((rand() % 2) == 0) {
                        dirX = -1;
                        dirY = 0;
                        return;
                    } else {
                        dirX = 0;
                        dirY = 1;
                        return;
                    }
                } else if (y > (myY / 2) - 1 && x <= (myX / 2) - 1) {
                    if ((rand() % 2) == 0) {
                        dirX = 1;
                        dirY = 0;
                        return;
                    } else {
                        dirX = 0;
                        dirY = -1;
                        return;
                    }
                } else if (y > (myY / 2) - 1 && x > (myX / 2) - 1) {
                    if ((rand() % 2) == 0) {
                        dirX = -1;
                        dirY = 0;
                        return;
                    } else {
                        dirX = 0;
                        dirY = -1;
                        return;
                    }
                }
            }
        }
    }
}
void kInp() {
    if (_kbhit()) {
        key = _getch();
    }
    if (key == 'w') {
        dirX = 0;
        dirY = -1;
    } else if (key == 's') {
        dirX = 0;
        dirY = 1;
    } else if (key == 'a') {
        dirX = -1;
        dirY = 0;
    } else if (key == 'd') {
        dirX = 1;
        dirY = 0;
    }
}
void genPlayer() {
    srand(time(NULL));
    int x = rand() % (myX - 2) + 1;
    int y = rand() % (myY - 2) + 1;
    map[y][x] = '@';
    body[0][0] = y;
    body[0][1] = x;
}
void genEnemy() {
    srand(time(NULL));
    while (1) {
        int x = rand() % (myX - 3) + 1;
        int y = rand() % (myY - 3) + 1;
        if (map[y][x] != '@' && map[y][x] != '*') {
            map[y][x] = '&';
            return;
        }
    }

}
void draw() {
    for (y = 0; y < myY; ++y) {
        goToXY(myX / 2, y);
        for (x = 0; x < myX; ++x) {
            printf("%c", map[y][x]);
        }
        printf("\n");
    }
    goToXY(0, 0);
    printf("Score : %d", score);
}
void move() {
    for (y = 0; y < myY; ++y) {
        for (x = 0; x < myX; ++x) {
            switch (map[y][x]) {
            case '@':
                if (map[y + dirY][x + dirX] == ' ') {
                    freeMove();
                    return;
                } else if (map[y + dirY][x + dirX] == '&') {
                    map[y + dirY][x + dirX] = ' ';
                    score += 10;
                    freeMove();
                    grow();
                    genEnemy();
                    return;
                } else if (map[y + dirY][x + dirX] == '#' || map[y + dirY][x + dirX] == '*') {
                    alive = 0;
                }
            }
        }
    }
}
void freeMove() {
    char headY = y;
    char headX = x;
    char temp = map[y][x];
    map[y][x] = map[y + dirY][x + dirX];
    map[y + dirY][x + dirX] = temp;
    body[0][0] = y + dirY;
    body[0][1] = x + dirX;
    for (int i = 1; i <= numOfBody; ++i) {
        if (i == 1) {
            oldBodyCor[i][0] = body[i][0];
            oldBodyCor[i][1] = body[i][1];
            char temp = map[body[i][0]][body[i][1]];
            map[body[i][0]][body[i][1]] = map[headY][headX];
            map[headY][headX] = temp;
            body[i][0] = headY;
            body[i][1] = headX;
            continue;
        }
        oldBodyCor[i][0] = body[i][0];
        oldBodyCor[i][1] = body[i][1];
        char temp = map[body[i][0]][body[i][1]];
        map[body[i][0]][body[i][1]] = map[oldBodyCor[i - 1][0]][oldBodyCor[i - 1][1]];
        map[oldBodyCor[i - 1][0]][oldBodyCor[i - 1][1]] = temp;
        body[i][0] = oldBodyCor[i - 1][0];
        body[i][1] = oldBodyCor[i - 1][1];
    }
    return;
}
void reset() {
    score = 0;
    for (int i = 0; i <= numOfBody; ++i) {
        body[i][0] = 0;
        body[i][0] = 0;
    }
    numOfBody = 0;
}
void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}
void goToXY(int column, int line) {
    // Create a COORD structure and fill in its members.
    // This specifies the new position of the cursor that we will set.
    COORD coord;
    coord.X = column;
    coord.Y = line;

    // Obtain a handle to the console screen buffer.
    // (You're just using the standard console, so you can use STD_OUTPUT_HANDLE
    // in conjunction with the GetStdHandle() to retrieve the handle.)
    // Note that because it is a standard handle, we don't need to close it.
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Finally, call the SetConsoleCursorPosition function.
    if (!SetConsoleCursorPosition(hConsole, coord)) {
        // Uh-oh! The function call failed, so you need to handle the error.
        // You can call GetLastError() to get a more specific error code.
        // ...
    }
}
