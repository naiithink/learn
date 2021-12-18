#include <stdio.h>

int main(void)
{
	int ch;
	
	printf(กรุณาใส่ข้อมูล: ");
	fflush(stdout);
	ch = getchar();
	printf("อักขระที่รับเข้ามาเป็น %c\n", ch), ch;
}
