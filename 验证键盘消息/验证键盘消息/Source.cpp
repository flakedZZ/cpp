#include <conio.h>
#include <windows.h>
#include<iostream>
int main() {
	int k;

	while (true) {
		if (kbhit()) {//kbhit C++函数 用于非阻塞响应键盘事件
			k = getch();
			if (0 == k || 0xE0 == k) k = k << 8 | getch();
			if (27 == k) break;//按Esc键退出
			/*if (57416 == k)
				std::cout << "上方向键" << std::endl;*/
			switch (k) {
			case 57416:
				std::cout << "上方向键" << std::endl;
				break;
			case 57424:
				std::cout << "下方向键" << std::endl;
				break;
			case 57419:
				std::cout << "左方向键" << std::endl;
				break;
			case 57421:
				std::cout << "右方向键" << std::endl;
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