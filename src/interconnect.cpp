#include <interconnect.hpp>

K_MSGQ_DEFINE(modbus2mqtt_msgq,
              sizeof(struct Mobus2MqttData),
              CONFIG_MAX_MODBUS_MQTT_MSGQ,
              8);

K_MSGQ_DEFINE(mqtt2modbus_msgq,
              sizeof(struct Mobus2MqttData),
              CONFIG_MAX_MODBUS_MQTT_MSGQ,
              8);