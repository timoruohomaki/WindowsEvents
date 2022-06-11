// dllmain.cpp : Defines the entry point for the DLL application.

#include "pch.h"
#include "Header.h"

// Event Log Messages for Airshift Airtime 2021
// *************************************************************
// References:
// https://social.msdn.microsoft.com/Forums/en-US/deaa0055-7770-4e55-a5b8-6d08b80b74af/creating-event-log-message-files?forum=windowsgeneraldevelopmentissues
// https://www.codeproject.com/Articles/4166/Using-MC-exe-message-resources-and-the-NT-event-lo
// Use the following commands to build this file

// mc -s eventLog.mc
// rc eventLog.rc
// link /DLL /SUBSYSTEM:WINDOWS /NOENTRY /MACHINE:x86 eventLog.Res
// *************************************************************

// Registry settings:
// HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\services\eventlog\Application\Airshift Airtime
// EventMessageFile REG_EXPAND_SZ C:\Program Files\Airshift\Airshift Airtime\asftatlog.dll
// TypesSupported REG_DWORD 7

// Categories
MessageId = 0x1000;
Language = "English";
General Error;
.

// Messages
MessageId = 0x1030;
Language = "English";
An error occurred in the API.Message: % 1;
.