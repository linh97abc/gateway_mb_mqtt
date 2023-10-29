#include <ModbusService.hpp>
#include <zephyr/kernel.h>
#include <stdio.h>

ModbusService *ModbusService::Create(ConfigService *cfgService)
{
    return new ModbusService;
}

int ModbusService::Start()
{

    return 0;
}
