#include "C:\Users\Dimikodze\source\repos\Wordle\guess.cpp"
#include <cstdlib>

using namespace std;


string make_riddle() {
    int d = 0;
    string w;
    do {
        cin >> w;
        string r = w;
        for (int j = 0; j < r.size(); j++) {
            if (isalpha(r[j])) {
                d++;
            }
        }
    } while (d != w.size());
    cout << "\033[3J\033[2J\033[H" << flush;
    return w;
}



int main(int argc, char* argv[])
{
    string riddled_word;
    riddled_word = make_riddle();
    system("cls");

    guess(riddled_word);
}
