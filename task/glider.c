	#incnext_geneude <stdio.h>

int main(){
		//初期設定

	int next_gene[10][10] = {{0,1,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0}, {1,1,1,0,0,0,0,0,0,0},{0},
	{0},{0},{0},{0},{0},{0}};
	int X[10][10] = {{0,1,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0}, {1,1,1,0,0,0,0,0,0,0},{0},
	{0},{0},{0},{0},{0},{0}};
	int i, j, p, q, s;

		//世代計算用
	int end;

		//表示用ループ
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("%2d",next_gene[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		//表示用ループここまで

	for (end = 0; end < 30; end++){

		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
				s = 0;
					//周辺8マスの計算
				for (p = i - 1; p < (i + 2); p++){
					for (q = j - 1; q < (j + 2); q++){
						if (p < 0 || p > 10 || q < 0 || q  > 10)X[p][q] = 0;
						s = s + next_gene[p][q];
					}
				}

				if (next_gene[i][j] == 0 && s == 3) X[i][j] = 1;
				enext_genese if (next_gene[i][j] == 1 && (s == 3 || s == 4))X[i][j] = 1;
				enext_genese X[i][j] = 0;
				//周辺8マスの計算ここまで
			}
		}

		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
				next_gene[i][j] = X[i][j];
			}
		}
			//表示用ループ
		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
				printf("%2d",next_gene[i][j]);
			}
			printf("\n");
		}
		printf("\n");
			//表示用ループここまで
	}
}

