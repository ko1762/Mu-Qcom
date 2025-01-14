#include <Library/BaseLib.h>
#include <Library/DeviceConfigurationMapLib.h>

STATIC
CONFIGURATION_DESCRIPTOR_EX
gDeviceConfigurationDescriptorEx[] = {
  {"AbnormalResetOccurredOffset", 0x24},
  {"BootConfigRegAddr", 0x00786070},
  {"BootConfigRegMask", 0x0000003E},
  {"BootConfigRegOfset", 0x01},
  {"DBIDumpDDRBase", 0x98200000},
  {"DDRThroughput", 6000000000},
  {"DDRInfoNotifyFlag", 0x1},
  {"DetectRetailUserAttentionHotkey", 0x00},
  {"DetectRetailUserAttentionHotkeyCode", 0x17},
  {"DloadCookieAddr", 0x1FD3000},
  {"DloadCookieValue", 0x10},
  {"EarlyInitCoreCnt", 1},
  {"EnableACPIFallback", 0x1},
  {"EnableDisplayImageFv", 0x0},
  {"EnableDisplayThread", 0},
  {"EnableMultiThreading", 1},
  {"EnableOEMSetupAppInRetail", 0x0},
  {"EnablePXE", 0x0},
  {"EnableSDHCSwitch", 0x1},
  {"EnableSecondaryUFSforHLOS", 0},
  {"EnableShell", 0x1},
  {"EnableUfsIOC", 0},
  {"EnableVariablePolicyEngine", 1},
  {"GccCe1ClkCntlReg", 0x00152000},
  {"GccCe1ClkCntlVal", 0x00000038},
  {"MaxCoreCnt", 8},
  {"MaxLogFileSize", 0x800000},
  {"MemoryCaptureModeOffset", 0x1C},
  {"NumActiveCores", 8},
  {"NumCpus", 4},
  {"NumCpusFuseAddr", 0x5C04C},
  {"PSHoldOffset", 0xC000},
  {"PSHoldSHFT", 0x0},
  {"PwrBtnShutdownFlag", 0x0},
  {"Sdc1GpioConfigOff", 0xA00},
  {"Sdc1GpioConfigOn", 0x1E92},
  {"Sdc2GpioConfigOff", 0xA00},
  {"Sdc2GpioConfigOn", 0x1E92},
  {"SecurityFlag", 0xC4},
  {"SerialPortBufferSize", 0x8000},
  {"SharedIMEMBaseAddr", 0x146AA000},
  {"ShmBridgememSize", 0xA00000},
  {"TzAppsRegnAddr", 0x82200000},
  {"TzAppsRegnSize", 0x02200000},
  {"TzDiagOffset", 0x720},
  {"TzDiagSize", 0x2000},
  {"UsbFnIoRevNum", 0x00010001},
  {"USBHS1_Config", 0x0},

  /* Terminator */
  {"Terminator", 0xFFFFFFFF}
};

CONFIGURATION_DESCRIPTOR_EX
*GetDeviceConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}
