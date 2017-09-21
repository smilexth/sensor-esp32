/*
 * ota.h
 *
 *  Created on: Sep 10, 2017
 *      Author: kris
 *
 *  This file is part of OpenAirProject-ESP32.
 *
 *  OpenAirProject-ESP32 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenAirProject-ESP32 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenAirProject-ESP32.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMPONENTS_OTA_INCLUDE_OTA_H_
#define COMPONENTS_OTA_INCLUDE_OTA_H_

#define OAP_OTA_ENABLED 		CONFIG_OAP_OTA_ENABLED
#define OAP_OTA_HOST 			CONFIG_OAP_OTA_HOST
#define OAP_OTA_PATH 			CONFIG_OAP_OTA_PATH
#define OAP_OTA_CHECK_INTERVAL 	CONFIG_OAP_OTA_CHECK_INTERVAL

void start_ota_task();

#endif /* COMPONENTS_OTA_INCLUDE_OTA_H_ */