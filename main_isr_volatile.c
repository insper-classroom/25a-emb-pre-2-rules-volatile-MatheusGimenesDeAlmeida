#include "asf.h"

int g_cnt = 0;
volatile int f_btn = 0; 

// ISR
void btn_callback(void) {
  f_btn = 1; 
}

void main(void) {

  int cnt = 0; 

  while (1) {
    if (f_btn) {
      cnt++;
      f_btn = 0;
    }
  }
}
