#include <conio.h>
#include <windows.h>
#include<iostream>
int main() {
	int k;

	while (true) {
		if (kbhit()) {//kbhit C++���� ���ڷ�������Ӧ�����¼�
			k = getch();
			if (0 == k || 0xE0 == k) k = k << 8 | getch();
			if (27 == k) break;//��Esc���˳�
			/*if (57416 == k)
				std::cout << "�Ϸ����" << std::endl;*/
			switch (k) {
			case 57416:
				std::cout << "�Ϸ����" << std::endl;
				break;
			case 57424:
				std::cout << "�·����" << std::endl;
				break;
			case 57419:
				std::cout << "�����" << std::endl;
				break;
			case 57421:
				std::cout << "�ҷ����" << std::endl;
				break;
			}
			cprintf("%d", k);
			cprintf("\r\n%04X\r\n", k);
		}
		Sleep(2);
		cprintf(".");
	}
	return 0;
}