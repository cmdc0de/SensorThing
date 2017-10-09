/*
 * SensorApp.h
 *
 *  Created on: Sep 24, 2017
 *      Author: dcomes
 */

#ifndef SENSORAPP_H_
#define SENSORAPP_H_

#include "libstm32/app/app.h"
#include "libstm32/error_type.h"
#include "libstm32/observer/event_bus.h"
#include "libstm32/sensors/bmp280/bmp280.h"

class SensorApp: public cmdc0de::App {
public:
	SensorApp();
	virtual ~SensorApp();
protected:
	virtual cmdc0de::ErrorType onInit();
	virtual cmdc0de::ErrorType onRun();
private:
	cmdc0de::EventBus<20,4,20,4> SensorEventBus;
	cmdc0de::BMP280 TempPressureSensor;
};

#endif /* SENSORAPP_H_ */
