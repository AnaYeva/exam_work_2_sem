#ifndef EXAM_WORK_2_SEM_CYCLE_H
#define EXAM_WORK_2_SEM_CYCLE_H
#include "words.h"
#include <cstdlib>
#include <ctime>
using namespace std;
void Cycle(const string words[2][am]){
    srand(time(nullptr));
    int temp = rand() % am;
    int temp4 = rand() % 4;//position where right answer wil be
    std::cout << words[0][temp] << std::endl;
    for (int i = 0; i < 4; i++) {
        if (i == temp4) {
            cout << words[1][temp] << endl;
        } else {
            int r;
            do { r = rand() % am; }
            while (r == temp);
            cout << words[1][r] << endl;
        }
    }
    int answer;
    cin >> answer;
    if (--answer == temp4)cout << "OK" << endl<<endl;
    else cout << "You are wrong" << endl<<endl;
}
#endif //EXAM_WORK_2_SEM_CYCLE_H
