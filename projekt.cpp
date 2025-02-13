#include <iostream>
#include <time.h>

using namespace std;

void SleepForNumberOfSeconds(const int & numberofSeconds);

int main() {
    char maze[10][20] = {'#','#','#','#','#','#','#','#','#','#','$','#','#','#','#','#','#','#','#','#','#','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','#','#','.','#','#','.','#','#','#','#','#','.','#','.','#','#','#','#','#','.','#','#','.','#','#','.','#','.','.','.','.','.','#','.','#','.','.','.','#','.','#','#','.','#','#','.','#','.','#','#','#','#','#','.','.','.','#','.','#','.','#','#','.','#','#','.','#','.','#','#','#','#','#','.','#','.','#','.','#','.','#','#','.','.','.','.','.','.','.','.','.','.','#','.','#','.','.','.','#','.','#','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','.','#','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','#','#','#','#','@','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};

    char u_control;
    int pos_v=1;
    int pos_h=10;
    int old_v;
    int old_h;
    int k=1;

    while(maze[9][3]=='@') {

        for(int i=0; i<=9; i++) {
            for(int j=0; j<=19; j++) {
            cout << maze[i][j] << " ";
            }
            cout << endl;
        }

        cout<< "\nESCAPE THIS MAZE!\n";
        SleepForNumberOfSeconds(5);
        cout << "\033[2J\033[1;1H";

        cout << "Move " << k << endl;

        maze[pos_v][pos_h]='&';

        for(int i=0; i<=9; i++) {
            for(int j=0; j<=19; j++) {
            cout << maze[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\nMeaning of blocks: [#] - Wall | [@] - Goal | [$] - Start | [.] - Path | [&] - You\n";
        cout << "\n\nMovement: [L] - move left | [P] - move right | [D] - move down | [G] - move up || [W] - exit \n\n\n";

            cout << ">";
            cin >> u_control;
            switch(u_control) {
                case 'l':
                    if(k<=1) {
                        break;
                    }
                    old_h = pos_h;
                    pos_h = pos_h - 1;

                    if(maze[pos_v][pos_h] == '#' || maze[pos_v][pos_h] == '$') {
                        pos_h = pos_h + 1;
                        k--;
                        break;
                    }
                    else {
                        maze[pos_v][pos_h] = '&';
                        maze[pos_v][old_h] = '.';
                    }
                    break;
                    //-------------------//
            case 'p':
                old_h = pos_h;
                pos_h = pos_h + 1;

                if(maze[pos_v][pos_h] == '#' || maze[pos_v][pos_h] == '$') {
                    pos_h = pos_h - 1;
                    k--;
                    break;
                }
                else {
                    maze[pos_v][pos_h] = '&';
                    maze[pos_v][old_h] = '.';
                }
                break;
                //-------------------//
            case 'd':
                old_v = pos_v;
                pos_v = pos_v + 1;
                if(maze[pos_v][pos_h] == '#' || maze[pos_v][pos_h] == '$') {
                    pos_v = pos_v - 1;
                    k--;
                    break;
                }
                else {
                    maze[pos_v][pos_h] = '&';
                    maze[old_v][pos_h] = '.';
                }
                break;
                //-------------------//
            case 'g':
                old_v = pos_v;
                pos_v = pos_v - 1;
                if(maze[pos_v][pos_h] == '#' || maze[pos_v][pos_h] == '$') {
                    pos_v = pos_v + 1;
                    k--;
                    break;
                }
                else {
                    maze[pos_v][pos_h] = '&';
                    maze[old_v][pos_h] = '.';
                }
                break;
                //-------------------//
            case 'w':
                return 0;
        }

         cout << "\033[2J\033[1;1H";
         maze[0][10]='$';
         k++;
    }

    cout << "\033[2J\033[1;1H";
    cout << " /$$     /$$                                                          /$$\n|  $$   /$$/                                                         | $$\n \  $$ /$$//$$$$$$  /$$   /$$       /$$  /$$  /$$  /$$$$$$  /$$$$$$$ | $$\n  \  $$$$//$$__  $$| $$  | $$      | $$ | $$ | $$ /$$__  $$| $$__  $$| $$\n   \  $$/| $$  \ $$| $$  | $$      | $$ | $$ | $$| $$  \ $$| $$  \ $$|__/\n    | $$ | $$  | $$| $$  | $$      | $$ | $$ | $$| $$  | $$| $$  | $$    \n    | $$ |  $$$$$$/|  $$$$$$/      |  $$$$$/$$$$/|  $$$$$$/| $$  | $$ /$$\n    |__/  \______/  \______/        \_____/\___/  \______/ |__/  |__/|__/\n                                                                         \n";
    return 0;
}

void SleepForNumberOfSeconds(const int & numberofSeconds){

    timespec delay = {numberofSeconds,0}; //500,000 = 1/2 milliseconds
    timespec delayrem;

    nanosleep(&delay, &delayrem);

    return;
}
