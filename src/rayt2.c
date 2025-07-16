#include <stdio.h>
#include "../include/consts.h"
#include "../include/logger.h"

int main() {
  printf("P3\n%d %d\n255\n",IMAGE_WIDTH,IMAGE_HEIGHT);

  for(int j=0;j < IMAGE_HEIGHT;j++){
    log_info("\rScanlines remaining: %f \n",(IMAGE_HEIGHT-j));
    for(int i=0;i<IMAGE_WIDTH;i++){
      float r = (float)(i)/ (float)(IMAGE_WIDTH-1);
      float g = (float)(j)/ (float)(IMAGE_HEIGHT-1);
      float b = 0.0;

      int ir = (int)(255.999*r);
      int ig = (int)(255.999*g);
      int ib = (int)(255.999*b);

      printf("%d %d %d\n",ir,ig,ib);
    }
  }
}
