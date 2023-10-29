#ifndef __MQTT_SERVICE_H__
#define __NQTT_SERVICE_H__

#include <ConfigService.hpp>

class MqttService
{
public:
    static MqttService *Create(ConfigService *cfgService);
    int Start();
};

#endif