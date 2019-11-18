#include "Order.h"
#include "Object.h"

void Order::addObject(Object * pObj)
{
	Object *pList = 0;

	pList = (Object *)malloc(sizeof(Object) * (count + 1));

	for (int n = 0; n < count; n++) {
		//���� ���� ������ ���� ��ǰ�� ����
		pList[n].objName = this->pList[n].objName;
		pList[n].objPrice = this->pList[n].objPrice;
	}

	//���ο� ��ǰ�� �������� �ֱ�
	pList[count].objName = pObj->objName;
	pList[count].objPrice = pObj->objPrice;

	//���� ��ǰ �迭 ����
	free(this->pList);

	this->pList = pList;

	count += 1;
	
	return;
}

void Order::deleteObject(int n)
{
	Object *pList = 0;

	// �迭 �˻�
	if (n >= count) {
		return;
	}

	// �� �� �з��� ����
	pList = (Object *)malloc(sizeof(Object) * (count - 1));

	// ������ ���� ����
	for (int i = 0; i < n; i++) {
		pList[i] = this->pList[i];
	}

	// ������ ���� ���� ����
	for (int i = n; i < count - 1; i++) {
		pList[i] = this->pList[i + 1];
	}

	//���� ��ǰ �迭 ����
	free(this->pList);

	// ���ο� ��ǰ �迭 �����
	this->pList = pList;

	// ���� �ϳ� ���̱�
	count -= 1;

	return;
}

void Order::Free(void)
{
	free(pList);

	return;
}