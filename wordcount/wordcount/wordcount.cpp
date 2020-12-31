#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) {
	int cnt;
	char ch;
	FILE* fp;
	fopen_s(&fp, argv[2], "r");
	cnt = 0;
	if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "-C") == 0) {
		while (!feof(fp)) {
			ch = fgetc(fp);
			cnt++;
		}
		printf("字符数: %d\n", --cnt);
	}
	else if (strcmp(argv[1], "-w") == 0 || strcmp(argv[1], "-W") == 0) {
		while (!feof(fp)) {
			ch = fgetc(fp);
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			}
			else {
				cnt++;
			}
		}
		printf("单词数: %d\n", cnt);
	}
	return 0;
}
