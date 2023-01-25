#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f4xx_hal.h"

extern __IO uint16_t uhADCxConvertedData;
float voltage;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	voltage = uhADCxConvertedData*3.3/4096;
	modelListener->UpdateGraph(voltage);
}

