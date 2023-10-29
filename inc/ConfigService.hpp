#ifndef __CONFIG_SERVICE_H__
#define __CONFIG_SERVICE_H__

class ConfigService
{
public:
    static ConfigService *Create();
    int Start();
};

#endif