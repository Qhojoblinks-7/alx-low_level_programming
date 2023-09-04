#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header - Prints the information from the ELF header.
 * @ehdr: Pointer to the ELF header structure.
 */

void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", ehdr->e_ident[i]);
    printf("\n");

    printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]);
        break;
    }
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : ehdr->e_type == ET_DYN ? "DYN (Shared object file)" : "UNKNOWN");
    printf("  Entry point address:               %#lx\n", (unsigned long)ehdr->e_entry);
}

/**
 * main - Displays the information contained in the ELF header.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error");
        return (98);
    }

    bytes_read = read(fd, &ehdr, sizeof(ehdr));
    if (bytes_read == -1)
    {
        perror("Error");
        close(fd);
        return (98);
    }

    if (bytes_read != sizeof(ehdr) || ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 || ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return (98);
    }

    print_elf_header(&ehdr);
    close(fd);
    return (0);
}
