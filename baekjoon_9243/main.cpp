#include<cstdio>
#include<cmath>

int n, t;
char i1[1001], i2[1001];
int main() {
	scanf_s("%d%*c", &n);
	gets_s(i1,1001); gets_s(i2,1001);
	if (n % 2 == 0) t = 0;
	else t = 1;
	for (int i = 0; i1[i]; i++) {
		if (abs(i1[i] - i2[i]) == t) {
			printf("Deletion failed");
			return 0;
		}
	}
	printf("Deletion succeeded");
	return 0;
}