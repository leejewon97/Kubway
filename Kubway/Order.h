#include <string>

struct Order {
	Object *pList; // 주문 하는 물품의 목록
	unsigned int count; // 물품 목록의 총 개수

	void addObject(Object *pObj); // 물품 목록에 물품 추가
	void deleteObject(int n); // 물품 목록에서 물품 제거
	void Free(void);
};

