#include <main.h>
#include <elf.h>

/**
 * print_elf_header - Displays the information from the ELF header.
 * @header: A pointer to the ELF header.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
        case ELFCLASS32:
		printf("ELF32\n");
		break;
        case ELFCLASS64:
		printf("ELF64\n");
		break;
        default:
		printf("Invalid\n");
		break;
	}
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
        case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
        case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
        default:
		printf("Invalid\n");
		break;
	}
	printf("  Version:                           %d (current)\n", header->e_version);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
        case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
        default:
		printf("Other\n");
		break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
        case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
        default:
		printf("Other\n");
		break;
	}
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Displays the ELF header information of a given ELF file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open %s\n", argv[1]);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
