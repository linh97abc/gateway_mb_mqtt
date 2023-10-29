#include <ConfigService.hpp>


ConfigService *ConfigService::Create()
{
    return new ConfigService;
}

int ConfigService::Start()
{
    return 0;
}
