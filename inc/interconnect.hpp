#ifndef __INTERCONNECT_H__
#define __INTERCONNECT_H__

#include <zephyr/kernel.h>
#define CONFIG_MODBUS_MQTT_DATA 511
#define CONFIG_MAX_MODBUS_MQTT_MSGQ 2

// modbus <-> mqtt
struct Mobus2MqttData
{
    uint8_t unitID;
    uint8_t data[CONFIG_MODBUS_MQTT_DATA];
    unsigned data_len;
};


extern k_msgq modbus2mqtt_msgq;
extern k_msgq mqtt2modbus_msgq;



#endif