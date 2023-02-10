#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * ElfHeader - struct for elf header
 *  
 */
struct ElfHeader {
  unsigned char magic[4];
  unsigned char class;
  unsigned char data;
  unsigned char version;
  unsigned char osabi;
  unsigned char abiversion;
  unsigned char type;
  unsigned char entrypointaddress[4];
};


int main(int argc, char** argv) {
  // Declare variables
  int fd;
  struct ElfHeader elfheader;
  int readbytes;


// Check argument count
  if (argc != 2) {
    fprintf(stderr, "Error: wrong number of arguments!\n");
    exit(98);
  }


// Open file
  fd = open(argv[1], O_RDONLY);


// Check if file exists
  if (fd == -1) {
    fprintf(stderr, "Error: file does not exist!\n");
    exit(98);
  }


// Read ELF header
  readbytes = read(fd, &elfheader, sizeof(struct ElfHeader));


// Check if read was successful
  if (read_bytes != sizeof(struct ElfHeader)) {
    fprintf(stderr, "Error: cannot read ELF header!\n");
    exit(98);
  }


// Print ELF header
  printf("Magic: %.2x %.2x %.2x %.2x\n", elfheader.magic[0], elfheader.magic[1], elfheader.magic[2], elfheader.magic[3]);
  printf("Class: %.2x\n", elfheader.class);
  printf("Data: %.2x\n", elfheader.data);
  printf("Version: %.2x\n", elf_header.version);
