#include "stdafx.h"
#include "Russia.h"
#include "Tetris.h"

CRussia::CRussia()
{
	//CDC dcMemory;
	//dcMemory.CreateCompatibleDC(pDC);
	bkMap.LoadBitmapW(IDB_BACKGROUND);
	fkMap.LoadBitmapW(IDB_DIAMOND);
}


CRussia::~CRussia()
{
}

void CRussia::DrawWill()
{
	int i, j;
	int k = 4, l = 4;

	for (i = 0; i < i; i++)
	{
		for (j = 0; j < 4; j++)
		{
			Now[i][j] = Will[i][j];
			Will[i][j] = 0;
		}
	}
	srand(GetTickCount());//��ʼ���������

	int nTemp = rand() % Count;
	switch (nTemp)
	{
	case 0:
		Will[0][0] = 1;
		Will[0][1] = 1;
		Will[1][0] = 1;
		Will[1][1] = 1;
		break;
	case 1:
		Will[0][0] = 1;
		Will[0][1] = 1;
		Will[1][0] = 1;
		Will[2][0] = 1;
		break;
	case 2:
		Will[0][0] = 1;
		Will[0][1] = 1;
		Will[1][1] = 1;
		Will[2][1] = 1;
		break;
	case 3:
		Will[0][1] = 1;
		Will[1][0] = 1;
		Will[1][1] = 1;
		Will[2][0] = 1;
		break;
	case 4:
		Will[0][0] = 1;
		Will[1][0] = 1;
		Will[1][1] = 1;
		Will[2][0] = 1;
		break;
	case 5:
		Will[0][0] = 1;
		Will[1][0] = 1;
		Will[1][1] = 1;
		Will[2][1] = 1;
		break;
	case 6:
		Will[0][0] = 1;
		Will[1][0] = 1;
		Will[2][0] = 1;
		Will[3][0] = 1;
		break;
	default:
		break;
	}

	//ʵ���豸��Ӧ�߼�����
	int tmp[4][4];//��ʱ������ʽ����
	for (i = 0; i < 4; i++)//
	{
		for (j = 0; j < 4; j++)
		{
			tmp[i][j] = Will[j][3 - i];//�ѷ��黻������
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (tmp[i][j] == 1)//ѡ����С�������
			{
				if (k > i)
					k = i;
				if (l > j)
					l = j;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			Will[i][j] = 0;//����
		}
	}

	for (i = k; i < 4; i++)
	{
		for (j = l; j < 4;j++)
		{
			Will[i - k][j - l] = tmp[i][j];//
		}
	}

	//��ʼλ��
	NowPosition.x = 0;
	NowPosition.x = m_ColCount / 2;
}
