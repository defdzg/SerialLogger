// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT
// Modified by: Daniel Fernández
// Taken from: https://github.com/Azure/azure-sdk-for-c-arduino
/* -------------------------------------------------------------------------- */
#include "SerialLogger.h"
#include <time.h>

/**
 * The SerialLogger constructor initializes the Serial communication with the specified baud rate.
 */
SerialLogger::SerialLogger()
{
  Serial.begin(SERIAL_LOGGER_BAUD_RATE);
}

/**
 * The Info function logs an informational message to the serial output.
 *
 * @param message The "message" parameter is a string that represents the information or message that
 * you want to log.
 */
void SerialLogger::Info(String message)
{
  Serial.print(" [INFO] ");
  Serial.println(message);
}

/**
 * The function SerialLogger::Error prints an error message to the Serial monitor.
 *
 * @param message The "message" parameter is a string that represents the error message that you want
 * to log.
 */
void SerialLogger::Error(String message)
{
  Serial.print(" [ERROR] ");
  Serial.println(message);
}

/**
 * The function "Success" logs a success message to the serial monitor.
 *
 * @param message The "message" parameter is a string that represents the success message that will be
 * logged.
 */
void SerialLogger::Success(String message)
{
  Serial.print(" [SUCCESS] ");
  Serial.println(message);
}

/**
 * The function "Command" logs a command message with a prefix indicating it is a command.
 * 
 * @param message The "message" parameter is a string that represents the command being logged.
 */
void SerialLogger::Command(String message)
{
  Serial.print(" [COMMAND] ");
  Serial.println(message);
}

/**
 * The function "Response" in the "SerialLogger" class prints a message with the prefix "[RESPONSE]" to
 * the USB serial port.
 * 
 * @param message The parameter "message" is a string that represents the response message that you
 * want to log.
 */
void SerialLogger::Response(String message)
{
  Serial.print(" [RESPONSE] ");
  Serial.println(message);
}

SerialLogger Logger;