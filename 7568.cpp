#include <iostream>
using namespace std;

struct info {
	int w;
	int h;
};

info a[51];
int n;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &a[i].w, &a[i].h);
	}

	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (a[i].w < a[j].w && a[i].h < a[j].h) {
				cnt++;
			}
		}
		printf("%d ", cnt);
	}
	printf("\n");
}
