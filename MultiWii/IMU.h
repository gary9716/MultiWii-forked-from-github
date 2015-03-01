#ifndef IMU_H_
#define IMU_H_

#define BARO_TAB_SIZE   21

#if BARO
uint8_t getEstimatedAltitude();
#endif

/* Exponential moving average filter (optimized for integers) with factor = 2^n */
typedef struct avg_var16 {
  int32_t buf; // internal bufer to store non-rounded average value
  int16_t res; // result (rounded to int)
} t_avg_var16;

typedef struct avg_var8 {
  int16_t buf; // internal bufer to store non-rounded average value
  int8_t res; // result (rounded to int)
} t_avg_var8;

void average16(struct avg_var16 *avg, int16_t cur, int8_t n);
void average8(struct avg_var8 *avg, int8_t cur, int8_t n);

void computeIMU();
int32_t mul(int16_t a, int16_t b);
void rotate16(int16_t *V, int16_t delta);


#endif /* IMU_H_ */
