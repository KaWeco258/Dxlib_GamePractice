#pragma once
/*
*�}�N����`
*/

#define RANKING_INPUT_MODE  (1)
#define RANKING_DISP_MODE    (2)


/*
*�^��`
*/

/*
*�v���g�^�C�v�錾
*/

int RankingScene_Initialize(void);
void RankingScene_Update(void);
void RankingScene_Draw(void);

void SetRankingMode(int mode);
void SetRankingScore(int score);
