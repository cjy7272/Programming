//202511828 ���ֿ�
//2025.6.7
//���� ����Ʈ �÷��̸���Ʈ ���α׷�

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
        {"�� ���� ����", "�ں���", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I\'m Fine", "��ź�ҳ��", "hip-hop", 209},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"�Ƴ���", "MINO", "hip-hop", 241}
    };

    for (int i = 0; i < 8; i++)
    {
        printf("%d. %s\t%s\t%s\t%d��\n", i + 1, arr[i].title, arr[i].artist, arr[i].genre, arr[i].time);
    }

    for (int i = 0; i < 5; i++)
    {
        
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &num);

        switch (num)
        {
        case 1: case 2: case 3: case 4:
        case 5: case 6: case 7: case 8:
            if (count >= 5) {
                printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
                break;
            }

            playlist[count] = arr[num - 1];
            count++;

            printf("<<  �÷��̸���Ʈ  >>\n");

            for (int i = 0; i < count; i++)
            {
                printf("%d. %s\t%s\t%s\t%d��\n",
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

            printf("�� ����ð�: %d��\n", total);
            break;

        default:
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
        }
    }
}