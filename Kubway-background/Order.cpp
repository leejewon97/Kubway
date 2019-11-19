#include "Order.h"
#include "Object.h"

void Order::addObject(Object * pObj)
{
	Object *pList = 0;

	pList = (Object *)malloc(sizeof(Object) * (count + 1));

	for (int n = 0; n < count; n++) {
		//새로 만든 공간에 기존 물품들 복사
		pList[n].objName = this->pList[n].objName;
		pList[n].objPrice = this->pList[n].objPrice;
	}

	//새로운 물품을 마지막에 넣기
	pList[count].objName = pObj->objName;
	pList[count].objPrice = pObj->objPrice;

	//기존 물품 배열 제거
	free(this->pList);

	this->pList = pList;

	count += 1;
	
	return;
}

void Order::deleteObject(int n)
{
	Object *pList = 0;

	// 배열 검사
	if (n >= count) {
		return;
	}

	// 한 개 분량의 공간
	pList = (Object *)malloc(sizeof(Object) * (count - 1));

	// 제거할 공간 복사
	for (int i = 0; i < n; i++) {
		pList[i] = this->pList[i];
	}

	// 제거할 공간 비우고 진행
	for (int i = n; i < count - 1; i++) {
		pList[i] = this->pList[i + 1];
	}

	//기존 물품 배열 제거
	free(this->pList);

	// 새로운 물품 배열 덮어쓰기
	this->pList = pList;

	// 개수 하나 줄이기
	count -= 1;

	return;
}

void Order::Free(void)
{
	free(pList);

	return;
}