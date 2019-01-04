#ifndef CHASSIS_TASK
#define CHASSIS_TASK

#include "configure.h"
#include "DR16.hpp"

#include "ch.h"
#include "hal.h"

#include "CAN_Receiver.hpp"

typedef struct
{
  float vx; //底盘前后速度
  float vy; //底盘左右速度
  float vw; //底盘旋转速度

} chassis_speed_t;

typedef struct
{
  uint16_t angle_rotor_raw;
  int16_t speed_rpm;
  int16_t current_raw;

  int32_t round_count;
  int32_t total_ecd;
  float radian_angle; // Continuous

} Encoder_canStruct;

typedef struct
{
  float kp;
  float ki;
  float kd;

  float p_out;
  float i_out;
  float d_out;

  float last_err;

  float pid_out;

  float max_integral;
  float max_pid_out;

} pid_s_t;

extern chassis_speed_t chassis_speed; //speed of chassis
extern int16_t motor_speed_sp;        //speed set-point for motor
extern int16_t motor_output;
extern volatile Encoder_canStruct _encoder;

void abs_limit(float *data, float max);

void pid_init(pid_s_t *pid, float kp, float ki, float kd, uint32_t max_integral, uint32_t max_pid_out);
float pid_calcu(pid_s_t *pid, float set, float get);

void chassis_task(pid_s_t wheel_pid[]);
void get_chassis_speed(void);
void drive_meccanum(const int16_t vx, const int16_t vy, const int16_t vw);

#endif /* end of include guard: CHASSIS_TASK */
