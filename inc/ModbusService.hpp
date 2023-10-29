#ifndef __MODBUS_SERVICE_H__
#define __MODBUS_SERVICE_H__

#include <ConfigService.hpp>

class ModbusService
{
public:
    static ModbusService *Create(ConfigService *cfgService);
    int Start();
};

#endif