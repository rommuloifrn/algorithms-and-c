using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int switchQtt, lampQtt, lampsTurnedOn;
    cin >> switchQtt >> lampQtt;
    vector<bool> lamps(lampQtt, false);
    vector<vector<int>> switchBoard(10); // o int no construtor do vector eh o tamanho dele (nesse caso o tamanho do vector de vectors)
    //switchBoard[2].push_back(123);

    for (lamp : lamps)
        lamp = 0;

    cin >> lampsTurnedOn;
    for (lamp : lamps) {
        int actualLamp;
        cin >> actualLamp;
        lamps[actualLamp] = 1;
    }

    for (int i=0; i<switchQtt; i++) {

    }

    


    return 0;
}