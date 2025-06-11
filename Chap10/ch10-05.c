//202511828 최주영
//2025.6.7
//음원 사이트 플레이리스트 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt1018();

typedef struct SONG
{
	char title[20];
	char artist[20];
	char genre[20];
	int time;
}SONG;

int main()
{
	asgmt1018();

	return 0;
}

void asgmt1018()
{
    int num = 0;
    int count = 0;
    int total = 0;

    SONG playlist[5];

    SONG arr[8] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"별 보러 가자", "박보검", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I\'m Fine", "방탄소년단", "hip-hop", 209},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "방탄소년단", "ballad", 226},
        {"아낙네", "MINO", "hip-hop", 241}
    };

    for (int i = 0; i < 8; i++)
    {
        printf("%d. %s\t%s\t%s\t%d초\n", i + 1, arr[i].title, arr[i].artist, arr[i].genre, arr[i].time);
    }

    for (int i = 0; i < 5; i++)
    {
        
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &num);

        switch (num)
        {
        case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8:
            if (count >= 5) {
                printf("플레이리스트가 가득 찼습니다.\n");
                break;
            }

            playlist[count] = arr[num - 1];
            count++;

            printf("<<  플레이리스트  >>\n");

            for (int i = 0; i < count; i++)
            {
                printf("%d. %s\t%s\t%s\t%d초\n",
                    i + 1,
                    playlist[i].title,
                    playlist[i].artist,
                    playlist[i].genre,
                    playlist[i].time);
            }

            for (int i = 0; i < count; i++)
            {
                total += playlist[i].time;
            }

            printf("총 재생시간: %d초\n", total);
            break;

        default:
            printf("잘못된 곡 번호입니다.\n");
        }
    }
}