#include <ConfigService.hpp>
#include <MqttService.hpp>
#include <ModbusService.hpp>

int main()
{
    ConfigService *cfgService = ConfigService::Create();
    MqttService *mqttService = MqttService::Create(cfgService);
    ModbusService *modbusService = ModbusService::Create(cfgService);

    cfgService->Start();
    mqttService->Start();
    modbusService->Start();

    return 0;
}