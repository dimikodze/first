#include "C:\Users\Dimikodze\source\repos\Wordle\guess.cpp"
#include <cstdlib>

using namespace std;


void make_riddle(string* w) {
    cin >> *w;
    cout << "\033[3J\033[2J\033[H" << flush;
}



int main(int argc, char* argv[])
{
    string riddled_word;
    make_riddle(&riddled_word);
    system("cls");
    cout << riddled_word.size() << " letters" << endl;
    guess(riddled_word);
}
