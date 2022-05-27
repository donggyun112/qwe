#include <iostream>
using namespace std;
int map1[4];
int map2[4];
int map3[8];
void abc(int idx, int dx, int t)
{
	
	if (t == 9) {
		return;
	}
	if (dx >= 4) {
		map3[t] = map1[idx];
		abc(idx + 1, dx, t + 1);

	}
	else if(idx>=4) {
		map3[t] = map2[dx];
		abc(idx + 1, dx, t + 1);
	}
	if (map1[idx] < map2[dx] && dx < 4 && idx < 4) {
		map3[t] = map1[idx];
		abc(idx + 1,dx, t+1);
	}
	else if(dx < 4 && idx < 4 ) {
		map3[t] = map2[dx];
		abc(idx, dx + 1, t+1);
	}

	
}

int main()
{
	for (int x = 0; x < 4; x++) {
		cin >> map1[x];
	}
	for (int x = 0; x < 4; x++) {
		cin >> map2[x];
	}
	int idx = 0;
	abc(0, 0, 0);

	for (int x = 0; x < 8; x++) {
		cout << map3[x] << " ";
	}


	
	return 0;
}
