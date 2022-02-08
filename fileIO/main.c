// just taking input from one file and writing to another
//might include terminal entry???

#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *fp;
  char buff[6];

  fp = fopen("inputfile.txt", "r");

  while(fgets(buff, 6, fp)){
    printf("%s\n", buff);
  }

  fclose(fp);

  fp = fopen("outputfile.txt", "a");//appends to the file, creates if not exist

  fputs(buff, fp);

  fclose(fp);

  return 0;
}
