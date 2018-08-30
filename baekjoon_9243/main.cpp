#include<cstdio>

int n, m;
char i1[1001], i2[1001];
int main() {
	scanf_s("%d\n%s\n%s", &n, i1,1001, i2,1001);
	n %= 2;
	for (int i = 0; i1[i]; i++) m += (i1[i] + i2[i] + n) % 2;
	puts(!m? "Deletion successed" : "Deletion failed");
	return 0;
}