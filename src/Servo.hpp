#ifndef SERVO_HPP
#define SERVO_HPP

#include "mbed.h"

constexpr uint32_t servo_can_id = 140;
extern uint8_t servo1_data[8];

class ServoController {
public:
  ServoController(CAN& can, BufferedSerial& serial);

  void run();

private:
  CAN& can;
  BufferedSerial& serial;
  uint8_t servo1_data[8] = {0}; // サーボ制御用データの初期化
};

#endif
