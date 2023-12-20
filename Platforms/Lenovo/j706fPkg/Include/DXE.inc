    INF MdeModulePkg/Core/Dxe/DxeMain.inf

    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf

    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
    INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

    INF Binaries/j706f/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
    INF Binaries/j706f/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF Binaries/j706f/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF Binaries/j706f/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
    INF Binaries/j706f/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf

    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
    INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    INF Binaries/j706f/QcomPkg/Drivers/FontDxe/FontDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
    INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

    INF Binaries/j706f/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf

!if $(USE_DISPLAYDXE) == 1
    INF Binaries/j706f/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

    INF Binaries/j706f/QcomPkg/Drivers/PdcDxe/PdcDxe.inf

    INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
    INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

    INF FatPkg/EnhancedFatDxe/Fat.inf

    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

    INF Binaries/j706f/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_DISPLAYDXE) == 1
    INF Binaries/j706f/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
    INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

    INF Binaries/j706f/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    INF Binaries/j706f/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
    INF Binaries/j706f/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
    INF Binaries/j706f/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf

    FILE DRIVER = 3ADF8DDA-1850-44C5-8C63-BB991849BC6F {
            SECTION PE32 = Binaries/j706f/QcomPkg/Drivers/HashDxe/HashDxe.efi
            SECTION UI = "HashDxe"
    }

    FILE DRIVER = 5F0937CD-73F9-445E-B320-BB6FD5D3CBDE {
            SECTION PE32 = Binaries/j706f/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
            SECTION UI = "CipherDxe"
    }

    FILE DRIVER = B0D3689E-11F8-43C6-8ECE-023A29CEC35B {
            SECTION PE32 = Binaries/j706f/QcomPkg/Drivers/RNGDxe/RngDxe.efi
            SECTION UI = "RngDxe"
    }

    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
    INF MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf
    INF MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTableDxe/FirmwarePerformanceDxe.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF Binaries/j706f/QcomPkg/Drivers/PILDxe/PILDxe.inf
    INF Binaries/j706f/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
    INF Binaries/j706f/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf