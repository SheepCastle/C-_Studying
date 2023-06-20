#include <iostream>
using namespace std;

int inventory[8] = { 0 };
int score = 0;

// 아이템을 한 개 주웠을 때
void getItem(int itemId) {
    inventory[itemId]++;
}
// 아이템을 여러 개 주웠을 때(cnt: 아이템 개수)
void getItem(int itemId, int cnt) {
    inventory[itemId] += cnt;
}
// 아이템을 여러 개 줍고, 점수도 얻었을 때(sc: 얻은 점수)
void getItem(int itemId, int cnt, int sc) {
    inventory[itemId] += cnt;
    score += sc;
}

int main() {
    getItem(6, 5);
    getItem(3);
    getItem(5, 4, 7000);

    // 보유하고 있는 아이템 개수 출력
    for (int i : inventory) {
        cout << i << " ";
    }
    cout << endl;
    cout << "점수: " << score << endl;
}