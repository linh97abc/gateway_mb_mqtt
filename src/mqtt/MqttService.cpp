#include <MqttService.hpp>

MqttService *MqttService::Create(ConfigService *cfgService)
{
    return new MqttService;
}

int MqttService::Start()
{
    return 0;
}
