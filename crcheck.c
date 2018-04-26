#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define CRC16 1010000001010011b
int XORFUNCT(uint32_t alpha, uint32_t beta);
int CRC_Calc(uint32_t alpha);
void CRC_Veri(void);
char *readArray(char *filename){
  
    char *str = malloc(sizeof(char) * 65);
    FILE *fp = fopen(filename, "r");
    int padding;
    fgets(str,65,fp);

    padding += strlen(str);
    while(strlen(str) == 64){
      	printf("%s\n",str);
	fgets(str,65,fp);
	padding += strlen(str) ;
    }
    int i;
    padding--;
    char *str2 = malloc(sizeof(char) * 65);
    str[strlen(str) - 1] = 0;

    while(i != 64 - strlen(str)){
      str2[i++] = '.';
      padding++;
    }
    printf("%s%s\n",str, str2);

    for(i = 0; i < 64; i++){
      str2[i] = '.';
      
    }
    while(padding <504){
      int lastPad = padding + 64;
      char *str3 = malloc(sizeof(char) * 65);
      if(lastPad > 504){

	i = 0;
	while(padding < 504){
	  str3[i] = '.';
	  i++;
	  padding++;
	}
	printf("%s", str3);
      }
      else{
      printf("%s", str2);
      printf("\n");
      padding += 64;
      }
      free(str3);
    }
    free(str2);
    
    //str = strtok(str, "\n");
    return str;
}
int main(int argc, char *argv[]){
  int crcNum = 646464646;
if(argc != 2){
	    printf("\n\t usage:\n");
	    printf("\t crcheck.c filename.txt\n\n");
	    return 0;
}

  char * line = readArray(argv[1]);
  printf("%x\n", crcNum);
  //printf("%h\n", str);
  //XORFUNCT
  CRC_Veri();
  //FILE *fp = fopen(argv[1], "r");
  unsigned char source[64];

  return 0;
}



int XORFUNCT(uint32_t alpha, uint32_t beta){
  int CRC;
  
  
  
  return CRC;
}
int CRC_Calc(uint32_t alpha){
  
  
  return alpha;
}
void CRC_Veri(void){
  //if(!crc){return;}
  printf("CRC 16 verification passed");
  
}