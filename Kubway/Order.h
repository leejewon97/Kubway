#include <string>

struct Order {
	Object *pList; // �ֹ� �ϴ� ��ǰ�� ���
	unsigned int count; // ��ǰ ����� �� ����

	void addObject(Object *pObj); // ��ǰ ��Ͽ� ��ǰ �߰�
	void deleteObject(int n); // ��ǰ ��Ͽ��� ��ǰ ����
	void Free(void);
};

