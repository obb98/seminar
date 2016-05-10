	#include <stdio.h>

int main(){
		//初期設定

	int L[][6] = {{0},{0}, {0, 1, 1, 1, 1, 0},{0},{0}};
	int X[][6] = {{0},{0}, {0, 1, 1, 1, 1, 0},{0},{0}};
	int i, j, p, q, s;

		//世代計算用
	int end;

		//表示用ループ
	for (i = 0; i < 5; i++){
		for (j = 0; j < 6; j++){
			printf("%2d",L[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		//表示用ループここまで

	for (end = 0; end < 5; end++){

		for (i = 0; i < 5; i++){
			for (j = 0; j < 6; j++){
				s = 0;
					//周辺8マスの計算
				for (p = i - 1; p < (i + 2); p++){
					for (q = j - 1; q < (j + 2); q++){
						if (p < 0 || p > 5 || q < 0 || q  > 6)X[p][q] = 0;
						s = s + L[p][q];
					}
				}

				if (L[i][j] == 0 && s == 3) X[i][j] = 1;
				else if (L[i][j] == 1 && (s == 3 || s == 4))X[i][j] = 1;
				else X[i][j] = 0;
				//周辺8マスの計算ここまで
			}
		}

		for (i = 0; i < 5; i++){
			for (j = 0; j < 6; j++){
				L[i][j] = X[i][j];
			}
		}
			//表示用ループ
		for (i = 0; i < 5; i++){
			for (j = 0; j < 6; j++){
				printf("%2d",L[i][j]);
			}
			printf("\n");
		}
		printf("\n");
			//表示用ループここまで
	}
}

