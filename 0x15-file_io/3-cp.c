#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - cpy txtf's contents to a different one
 * @argc: num of args
 * @argv: passing args
 *
 * Return: 1 if it worked, exit if not
 */
int main(int argc, char *argv[])
{
	int root, peet, rn = 1024, written, c_root, c_peet;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char ref[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	root = open(argv[1], O_RDONLY);
	check_IO_stat(root, -1, argv[1], 'O');
	peet = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(peet, -1, argv[2], 'W');
	while (rn == 1024)
	{
		rn = read(root, ref, sizeof(ref));
		if (rn == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		written = write(peet, ref, rn);
		if (written == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	c_root = close(root);
	check_IO_stat(c_root, root, NULL, 'C');
	c_peet = close(peet);
	check_IO_stat(c_peet, peet, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - txtf closed or opened checker
 * @stat: f_d to txtf's wannabe opened
 * @filename: f's name
 * @mode: switching on & off
 * @fd: fl dcrptr
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (stat == -1 && mode == 'C')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (stat == -1 && mode == 'O')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (stat == -1 && mode == 'W')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
