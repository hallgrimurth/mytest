#include <stdint.h>
#include "bits.h"


struct bits8 {
  struct bit b0; // Least significant bit
  struct bit b1;
  struct bit b2;
  struct bit b3;
  struct bit b4;
  struct bit b5;
  struct bit b6;
  struct bit b7; // Most significant bit 
};

unsigned int get_bit ( unsigned int x , int i ){
  int a = x & (1 << i);
  
  return a/a;
}

unsigned int set_bit ( unsigned int x , int i ){
  int a = x | (1 << i);
  
  return a;
}

struct bits8 bits8_from_int(unsigned int x){

  struct bits8 b;
  b.b0 = bit_from_int((x >> 0) % 2);
  b.b1 = bit_from_int((x >> 1) % 2);
  b.b2 = bit_from_int((x >> 2) % 2);
  b.b3 = bit_from_int((x >> 3) % 2);
  b.b4 = bit_from_int((x >> 4) % 2);
  b.b5 = bit_from_int((x >> 5) % 2);
  b.b6 = bit_from_int((x >> 6) % 2);
  b.b7 = bit_from_int((x >> 7) % 2);
  return b;
  
}




unsigned int bits8_to_int(struct bits8 x){
  bit_to_int(x.b0) * pow(2,0) +
  bit_to_int(x.b1) * pow(2,1) +
  bit_to_int(x.b2) * pow(2,2) +
  bit_to_int(x.b3) * pow(2,3) +
  bit_to_int(x.b4) * pow(2,4) +
  bit_to_int(x.b5) * pow(2,5) +
  bit_to_int(x.b6) * pow(2,6) +
  bit_to_int(x.b7) * pow(2,7);

}
void bits8_print(struct bits8 v){
  
  bit_print(v.b7);
  bit_print(v.b6);
  bit_print(v.b5);
  bit_print(v.b4);
  bit_print(v.b3);
  bit_print(v.b2);
  bit_print(v.b1);
  bit_print(v.b0);
  printf("\n");
  
}

struct bits8 bits8_and(struct bits8 x, struct bits8 y){
  struct bits8 z;
  z.b0 = bit_and(x.b0, y.b0);
  z.b1 = bit_and(x.b1, y.b1);
  z.b2 = bit_and(x.b2, y.b2);
  z.b3 = bit_and(x.b3, y.b3);
  z.b4 = bit_and(x.b4, y.b4);
  z.b5 = bit_and(x.b5, y.b5);
  z.b6 = bit_and(x.b6, y.b6);
  z.b7 = bit_and(x.b7, y.b7);
  return z;
}
struct bits8 bits8_add(struct bits8 x, struct bits8 y);

struct bits8 bits8_negate(struct bits8 x);
struct bits8 bits8_mul(struct bits8 x, struct bits8 y);
