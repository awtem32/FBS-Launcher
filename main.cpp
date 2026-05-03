#include <iostream>
#include <string>

using namespace std;

void Menu(string menu) {
    cout << menu << endl;
}

void Command(string commands) {
    system(commands.c_str());
}

void Combocommands(string command1, string command2) {
    string combined = command1 + " & " + command2;
    system(combined.c_str());
}

int main() {
    while (true) {
        /*system("cls")*/;

        short Choose;
        short SubChoose;

        Menu("======= F.B.S 2.0 =======");
        Menu("1) Work");
        Menu("2) Study");
        Menu("3) Fun");
        cout << "You'r choise: ";
        cin >> Choose;

        switch (Choose) {
        case 1:
            Menu("1) Video Montage (Premiere Pro + After Effects) ");
            Menu("2) Coding (Visual studio c++ + youtube musik) ");
            Menu("3) Arts (Krita + Youtube musik) ");
            Menu("4) Back to main menu");
            cout << "You'r choise: ";
            cin >> SubChoose;

            switch (SubChoose) {
            case 1:
                Combocommands("start \"\" \"D:\\монтаж\\Adobe Premiere Pro 2024\\Adobe Premiere Pro.exe\"",
                    "start \"\" \"D:\\монтаж\\Adobe After Effects 2024\\Support Files\\AfterFX.exe\"");
                break;
            case 2:
                Combocommands("start \"\" \"C:\\Program Files\\Microsoft Visual Studio\\18\\Community\\Common7\\IDE\\devenv.exe\"",
                    "start Chrome https://music.youtube.com/watch?v=3TyHjZo0muk&list=PLbq3DydIWnKJ3MKvRHvBmBrJ2AXB-5Coq");
                break;
            case 3:
                Combocommands("start \"\" \"D:\\Krita (x64)\\bin\\Krita.exe\"",
                    "start Chrome https://music.youtube.com/watch?v=3TyHjZo0muk&list=PLbq3DydIWnKJ3MKvRHvBmBrJ2AXB-5Coq");
                break;
            case 4:
                break;
            default:
                cout << "Invaild Number!\n";
                break;
            }
            break;

        case 2:
            Menu("1) College (Chrome + Deepseek)");
            Menu("2) SelfEducation (Youtube + Deepseek)");
            Menu("3) Back to main menu");
            cout << "You'r choise: ";
            cin >> SubChoose;

            switch (SubChoose) {
            case 1:
                Combocommands("start chrome",
                    "start Chrome https://chat.deepseek.com/a/chat/s/5af2850e-8eaf-464a-8dea-34c9ad92c9ec");
                break;
            case 2:
                Combocommands("start chrome https://www.youtube.com/",
                    "start chrome https://chat.deepseek.com/a/chat/s/5af2850e-8eaf-464a-8dea-34c9ad92c9ec");
                break;
            case 3:
                break;
            default:
                cout << "Invaild Number!\n";
                break;
            }
            break;

        case 3:
            Menu("1) Watch Video (Youtube)");
            Menu("2) Watch Anime (Rutube)");
            Menu("3) Back to main menu");
            cout << "You'r choise: ";
            cin >> SubChoose;

            switch (SubChoose) {
            case 1:
                Command("start chrome https://www.youtube.com/");
                break;
            case 2:
                Command("start Browser.exe https://rutube.ru/channel/32420212/");
                break;
            case 3:
                break;
            default:
                cout << "Invaild Number!\n";
                break;
            }
            break;
        }
    } 

    return 0;
}
