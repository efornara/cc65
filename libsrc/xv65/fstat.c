// fstat.c
// Written by Emanuele Fornara

#include <xv65.h>

int __fastcall__ fstat(int fd, struct stat *buf) {
	req_put(REQ_FSTAT);
	req_put(fd);
	req_end();
	if (req_res())
		return -1;
	buf->type = *(unsigned char *)REQDAT;
	buf->size = ((unsigned long *)REQDAT2)[0];
	buf->size_hi = ((unsigned long *)REQDAT2)[1];
	return 0;
}
