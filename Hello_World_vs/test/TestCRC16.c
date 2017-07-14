#include "crc16.h"
#include "stdio.h"

int main()
{
	u8 testBufString1[] = "Hello World!";
	u16 CRCOut = 0;

	CRCOut = CRC16(testBufString1, sizeof(testBufString1));
	//CRCOut = CRC16(testBufString1, sizeof(u8));

	///OCT:28887  HEX:70D7
	printf("两字节校验码：%x\r\n", CRCOut);

}