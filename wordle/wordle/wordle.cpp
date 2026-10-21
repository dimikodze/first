#include "C:\Users\Dimikodze\source\repos\Wordle\guess.cpp"
#include <cstdlib>

using namespace std;


string make_riddle() {
    int d = 0;
    string w;
    cout << "latin letters" << endl;
    do {
        cin >> w;
    } while (checkSyms(w));
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
