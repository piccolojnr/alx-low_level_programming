#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
/**
 * print_elf_header - prints ELF header
 * @header: pointer to ELF header
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);

	printf("\n");

	printf("  Class:                             %s\n",
	       (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
	       (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
	       "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	       header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
	       header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
	       header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
	       (header->e_type == ET_REL) ? "REL (Relocatable file)" :
	       (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
	       (header->e_type == ET_DYN) ? "DYN (Shared object file)" : "UNKNOWN");
	printf("  Entry point address:               0x%lx\n",
	       (unsigned long)header->e_entry);
}

/**
 * main - prints ELF header
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file '%s'\n", elf_filename);
		return (98);
	}

	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr)
	    || memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: '%s' is not an ELF file\n", elf_filename);
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	print_elf_header(&elf_header);

	close(fd);
	return (0);
}
