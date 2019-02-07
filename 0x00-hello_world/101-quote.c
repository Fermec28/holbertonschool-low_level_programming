#include <sys/types.h>
#include <string.h>

/**
 * main
 *
 * Result: 1 (Error)
 *
 */
int main(void)
{
	char buf[59];
	size_t nbytes;
	ssize_t bytes_written;
	int fd;

	strcpy(buf, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	nbytes = strlen(buf);
	bytes_written = write(fd, buf, nbytes);
	return (1);
}
