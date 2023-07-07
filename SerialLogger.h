// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT
// Modified by: Daniel Fernández
// Taken from: https://github.com/Azure/azure-sdk-for-c-arduino
/* -------------------------------------------------------------------------- */
#include <Arduino.h>
#ifndef SERIALLOGGER_H
#define SERIALLOGGER_H
/* --------------------------------- Macros --------------------------------- */
#ifndef SERIAL_LOGGER_BAUD_RATE
#define SERIAL_LOGGER_BAUD_RATE 115200
#endif
/* ------------------------------ SERIALLOGGER ------------------------------ */
class SerialLogger
{
  /* ----------------------------- Public Methods ----------------------------- */
public:
  SerialLogger();
  void Info(String message);
  void Error(String message);
  void Success(String message);
};

extern SerialLogger Logger;

#endif // SERIALLOGGER_H