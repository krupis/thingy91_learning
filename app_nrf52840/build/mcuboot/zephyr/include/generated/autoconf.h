#define CONFIG_PM_PARTITION_SIZE_MCUBOOT_SCRATCH 0x1e000
#define CONFIG_PM_PARTITION_SIZE_MCUBOOT_PAD 0x200
#define CONFIG_PM_PARTITION_SIZE_MCUBOOT 0x12000
#define CONFIG_MCUBOOT_NRF_CLEANUP_PERIPHERAL 1
#define CONFIG_BOOT_SIGNATURE_KEY_FILE "root-rsa-2048.pem"
#define CONFIG_BOOT_ERASE_PROGRESSIVELY 1
#define CONFIG_MCUBOOT 1
#define CONFIG_BOOT_USE_MBEDTLS 1
#define CONFIG_NRFXLIB_CRYPTO 1
#define CONFIG_BOOT_SIGNATURE_TYPE_RSA 1
#define CONFIG_BOOT_SIGNATURE_TYPE_RSA_LEN 2048
#define CONFIG_MCUBOOT_CLEANUP_ARM_CORE 1
#define CONFIG_MBEDTLS_CFG_FILE "mcuboot-mbedtls-cfg.h"
#define CONFIG_BOOT_VALIDATE_SLOT0 1
#define CONFIG_BOOT_PREFER_SWAP_MOVE 1
#define CONFIG_BOOT_SWAP_USING_MOVE 1
#define CONFIG_BOOT_ENCRYPTION_SUPPORT 1
#define CONFIG_BOOT_MAX_IMG_SECTORS 128
#define CONFIG_BOOT_FIH_PROFILE_OFF 1
#define CONFIG_BOOT_USB_DFU_NO 1
#define CONFIG_MCUBOOT_SERIAL 1
#define CONFIG_BOOT_SERIAL_CDC_ACM 1
#define CONFIG_BOOT_SERIAL_UNALIGNED_BUFFER_SIZE 64
#define CONFIG_BOOT_MAX_LINE_INPUT_LEN 128
#define CONFIG_BOOT_LINE_BUFS 8
#define CONFIG_BOOT_SERIAL_MAX_RECEIVE_SIZE 1024
#define CONFIG_BOOT_SERIAL_ENTRANCE_GPIO 1
#define CONFIG_BOOT_SERIAL_DETECT_DELAY 0
#define CONFIG_BOOT_SERIAL_IMG_GRP_HASH 1
#define CONFIG_UPDATEABLE_IMAGE_NUMBER 1
#define CONFIG_BOOT_WATCHDOG_FEED 1
#define CONFIG_MCUBOOT_DEVICE_SETTINGS 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_USB_DEVICE_PRODUCT "MCUBOOT"
#define CONFIG_LV_DPI_DEF 130
#define CONFIG_UART_INTERRUPT_DRIVEN 1
#define CONFIG_BOARD "thingy91_nrf52840"
#define CONFIG_USB_NRFX 1
#define CONFIG_USB_DEVICE_STACK 1
#define CONFIG_HW_STACK_PROTECTION 1
#define CONFIG_NUM_IRQS 48
#define CONFIG_SOC_SERIES "nrf52"
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_SOC "nRF52840_QIAA"
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 30
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x0
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_PINCTRL 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_GPIO 1
#define CONFIG_SOC_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 32768
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_SERIAL_INIT_PRIORITY 55
#define CONFIG_MBEDTLS 1
#define CONFIG_SERIAL 1
#define CONFIG_MAIN_STACK_SIZE 10240
#define CONFIG_USE_DT_CODE_PARTITION 1
#define CONFIG_FLASH_LOAD_OFFSET 0x0
#define CONFIG_PLATFORM_SPECIFIC_INIT 1
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_HAS_DTS 1
#define CONFIG_DT_HAS_ARM_ARMV7M_ITM_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M4F_ENABLED 1
#define CONFIG_DT_HAS_ARM_CRYPTOCELL_310_ENABLED 1
#define CONFIG_DT_HAS_ARM_V7M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_ACL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CC310_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CCM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_ECB_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_EGU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_FICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIOTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPREGRET_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_MWU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_NFCT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_POWER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PPI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_RADIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_RNG_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SAADC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SWI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TEMP_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UARTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_USBD_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_WDT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF52_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_BT_HCI_ENTROPY_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_CDC_ACM_UART_ENABLED 1
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_BOOT_BANNER_STRING "Booting nRF Connect SDK"
#define CONFIG_WARN_EXPERIMENTAL 1
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_INIT_ARCH_HW_AT_BOOT 1
#define CONFIG_NORDIC_QSPI_NOR_FLASH_LAYOUT_PAGE_SIZE 4096
#define CONFIG_NCS_MCUBOOT_IN_BUILD 1
#define CONFIG_PM_PARTITION_SIZE_PROVISION 0x1000
#define CONFIG_PM_PARTITION_SIZE_B0_IMAGE 0x8000
#define CONFIG_SB_VALIDATION_INFO_MAGIC 0x86518483
#define CONFIG_SB_VALIDATION_POINTER_MAGIC 0x6919b47e
#define CONFIG_SB_VALIDATION_INFO_CRYPTO_ID 1
#define CONFIG_SB_VALIDATION_INFO_VERSION 2
#define CONFIG_SB_VALIDATION_METADATA_OFFSET 0
#define CONFIG_SB_VALIDATE_FW_SIGNATURE 1
#define CONFIG_PCD_VERSION_PAGE_BUF_SIZE 2046
#define CONFIG_NRF_CLOUD_CLIENT_ID_SRC_COMPILE_TIME 1
#define CONFIG_NRF_CLOUD_CLIENT_ID "my-client-id"
#define CONFIG_NRF_CLOUD_LOG_OUTPUT_LEVEL 1
#define CONFIG_NRF_CLOUD_LOG_BUF_SIZE 256
#define CONFIG_MPSL_THREAD_COOP_PRIO 8
#define CONFIG_MPSL_WORK_STACK_SIZE 1024
#define CONFIG_MPSL_TIMESLOT_SESSION_COUNT 0
#define CONFIG_PARTITION_MANAGER_ENABLED 1
#define CONFIG_FLASH_MAP_CUSTOM 1
#define CONFIG_SRAM_SIZE 256
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_PM_EXTERNAL_FLASH_BASE 0x0
#define CONFIG_PM_EXTERNAL_FLASH_PATH ""
#define CONFIG_PM_EXTERNAL_FLASH_SIZE_BITS 0
#define CONFIG_PM_SRAM_BASE 0x20000000
#define CONFIG_PM_SRAM_SIZE 0x40000
#define CONFIG_TFM_CONN_HANDLE_MAX_NUM 8
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_FLASH_PATCH_WARN 1
#define CONFIG_NRF_ACL_FLASH_REGION_SIZE 0x1000
#define CONFIG_FPROTECT_BLOCK_SIZE 0x1000
#define CONFIG_FPROTECT 1
#define CONFIG_RESET_ON_FATAL_ERROR 1
#define CONFIG_HW_UNIQUE_KEY_PARTITION_SIZE 0x1000
#define CONFIG_HW_CC3XX 1
#define CONFIG_NRFX_GPIOTE_NUM_OF_EVT_HANDLERS 1
#define CONFIG_ZTEST_MULTICORE_DEFAULT_SETTINGS 1
#define CONFIG_ZEPHYR_NRF_MODULE 1
#define CONFIG_WFA_QT_THREAD_STACK_SIZE 4096
#define CONFIG_ZEPHYR_WFA_QT_CONTROL_APP_MODULE 1
#define CONFIG_SIGN_IMAGES 1
#define CONFIG_DT_FLASH_WRITE_BLOCK_SIZE 4
#define CONFIG_MCUBOOT_USB_SUPPORT 1
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_MBEDTLS_BUILTIN 1
#define CONFIG_MBEDTLS_SSL_MAX_CONTENT_LEN 1500
#define CONFIG_MBEDTLS_INIT 1
#define CONFIG_APP_LINK_WITH_MBEDTLS 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ZEPHYR_CJSON_MODULE 1
#define CONFIG_ZEPHYR_AZURE_SDK_FOR_C_MODULE 1
#define CONFIG_ZEPHYR_CIRRUS_LOGIC_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_ZEPHYR_MEMFAULT_FIRMWARE_SDK_MODULE 1
#define CONFIG_ZEPHYR_CANOPENNODE_MODULE 1
#define CONFIG_ZEPHYR_CHRE_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_HAS_NORDIC_DRIVERS 1
#define CONFIG_HAS_NRFX 1
#define CONFIG_NRFX_CLOCK 1
#define CONFIG_NRFX_CLOCK_LFXO_TWO_STAGE_ENABLED 1
#define CONFIG_NRFX_GPIOTE 1
#define CONFIG_NRFX_NVMC 1
#define CONFIG_NRFX_POWER 1
#define CONFIG_NRFX_PPI 1
#define CONFIG_NRFX_USBD 1
#define CONFIG_NRFX_USBD_ISO_IN_ZLP 1
#define CONFIG_NRFX_WDT 1
#define CONFIG_NRFX_WDT0 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_LV_COLOR_DEPTH_16 1
#define CONFIG_LV_COLOR_DEPTH 16
#define CONFIG_LV_COLOR_MIX_ROUND_OFS 128
#define CONFIG_LV_COLOR_CHROMA_KEY_HEX 0x00FF00
#define CONFIG_LV_MEM_SIZE_KILOBYTES 32
#define CONFIG_LV_MEM_ADDR 0x0
#define CONFIG_LV_MEM_BUF_MAX_NUM 16
#define CONFIG_LV_DISP_DEF_REFR_PERIOD 30
#define CONFIG_LV_INDEV_DEF_READ_PERIOD 30
#define CONFIG_LV_DRAW_COMPLEX 1
#define CONFIG_LV_SHADOW_CACHE_SIZE 0
#define CONFIG_LV_CIRCLE_CACHE_SIZE 4
#define CONFIG_LV_LAYER_SIMPLE_BUF_SIZE 24576
#define CONFIG_LV_IMG_CACHE_DEF_SIZE 0
#define CONFIG_LV_GRADIENT_MAX_STOPS 2
#define CONFIG_LV_GRAD_CACHE_DEF_SIZE 0
#define CONFIG_LV_DISP_ROT_MAX_BUF 10240
#define CONFIG_LV_USE_ASSERT_NULL 1
#define CONFIG_LV_USE_ASSERT_MALLOC 1
#define CONFIG_LV_ASSERT_HANDLER_INCLUDE "assert.h"
#define CONFIG_LV_USE_USER_DATA 1
#define CONFIG_LV_ATTRIBUTE_MEM_ALIGN_SIZE 1
#define CONFIG_LV_FONT_MONTSERRAT_14 1
#define CONFIG_LV_FONT_DEFAULT_MONTSERRAT_14 1
#define CONFIG_LV_USE_FONT_PLACEHOLDER 1
#define CONFIG_LV_TXT_ENC_UTF8 1
#define CONFIG_LV_TXT_BREAK_CHARS " ,.;:-_"
#define CONFIG_LV_TXT_LINE_BREAK_LONG_LEN 0
#define CONFIG_LV_TXT_COLOR_CMD "#"
#define CONFIG_LV_USE_ARC 1
#define CONFIG_LV_USE_BAR 1
#define CONFIG_LV_USE_BTN 1
#define CONFIG_LV_USE_BTNMATRIX 1
#define CONFIG_LV_USE_CANVAS 1
#define CONFIG_LV_USE_CHECKBOX 1
#define CONFIG_LV_USE_DROPDOWN 1
#define CONFIG_LV_USE_IMG 1
#define CONFIG_LV_USE_LABEL 1
#define CONFIG_LV_LABEL_TEXT_SELECTION 1
#define CONFIG_LV_LABEL_LONG_TXT_HINT 1
#define CONFIG_LV_USE_LINE 1
#define CONFIG_LV_USE_ROLLER 1
#define CONFIG_LV_ROLLER_INF_PAGES 7
#define CONFIG_LV_USE_SLIDER 1
#define CONFIG_LV_USE_SWITCH 1
#define CONFIG_LV_USE_TEXTAREA 1
#define CONFIG_LV_TEXTAREA_DEF_PWD_SHOW_TIME 1500
#define CONFIG_LV_USE_TABLE 1
#define CONFIG_LV_USE_ANIMIMG 1
#define CONFIG_LV_USE_CALENDAR 1
#define CONFIG_LV_USE_CALENDAR_HEADER_ARROW 1
#define CONFIG_LV_USE_CALENDAR_HEADER_DROPDOWN 1
#define CONFIG_LV_USE_CHART 1
#define CONFIG_LV_USE_COLORWHEEL 1
#define CONFIG_LV_USE_IMGBTN 1
#define CONFIG_LV_USE_KEYBOARD 1
#define CONFIG_LV_USE_LED 1
#define CONFIG_LV_USE_LIST 1
#define CONFIG_LV_USE_MENU 1
#define CONFIG_LV_USE_METER 1
#define CONFIG_LV_USE_MSGBOX 1
#define CONFIG_LV_USE_SPAN 1
#define CONFIG_LV_SPAN_SNIPPET_STACK_SIZE 64
#define CONFIG_LV_USE_SPINBOX 1
#define CONFIG_LV_USE_SPINNER 1
#define CONFIG_LV_USE_TABVIEW 1
#define CONFIG_LV_USE_TILEVIEW 1
#define CONFIG_LV_USE_WIN 1
#define CONFIG_LV_USE_THEME_DEFAULT 1
#define CONFIG_LV_THEME_DEFAULT_GROW 1
#define CONFIG_LV_THEME_DEFAULT_TRANSITION_TIME 80
#define CONFIG_LV_USE_THEME_BASIC 1
#define CONFIG_LV_USE_FLEX 1
#define CONFIG_LV_USE_GRID 1
#define CONFIG_LV_USE_SNAPSHOT 1
#define CONFIG_LV_BUILD_EXAMPLES 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_LZ4_MODULE 1
#define CONFIG_ZEPHYR_NANOPB_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TRACERECORDER_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZCBOR 1
#define CONFIG_ZEPHYR_ZSCILIB_MODULE 1
#define CONFIG_NRF_MODEM_SHMEM_CTRL_SIZE 0x4e8
#define CONFIG_CRYPTOCELL_CC310_USABLE 1
#define CONFIG_CRYPTOCELL_USABLE 1
#define CONFIG_NRF_CC3XX_PLATFORM 1
#define CONFIG_CC3XX_MUTEX_LOCK 1
#define CONFIG_NRF_802154_SOURCE_NRFXLIB 1
#define CONFIG_LC3_ENC_CHAN_MAX 1
#define CONFIG_LC3_DEC_CHAN_MAX 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_8KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_16KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_24KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_32KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_441KHZ_SUPPORT 1
#define CONFIG_LC3_ENC_SAMPLE_RATE_48KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_8KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_16KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_24KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_32KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_441KHZ_SUPPORT 1
#define CONFIG_LC3_DEC_SAMPLE_RATE_48KHZ_SUPPORT 1
#define CONFIG_ZEPHYR_NRFXLIB_MODULE 1
#define CONFIG_ZEPHYR_CONNECTEDHOMEIP_MODULE 1
#define CONFIG_MCUBOOT_BOOTUTIL_LIB 1
#define CONFIG_BOARD_REVISION "$BOARD_REVISION"
#define CONFIG_BOARD_THINGY91_NRF52840 1
#define CONFIG_BOARD_ENABLE_DCDC 1
#define CONFIG_SOC_SERIES_NRF52X 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_HAS_SWO 1
#define CONFIG_SOC_FAMILY "nordic_nrf"
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_SOC_FAMILY_NRF 1
#define CONFIG_HAS_HW_NRF_ACL 1
#define CONFIG_HAS_HW_NRF_CC310 1
#define CONFIG_HAS_HW_NRF_CCM 1
#define CONFIG_HAS_HW_NRF_CCM_LFLEN_8BIT 1
#define CONFIG_HAS_HW_NRF_CLOCK 1
#define CONFIG_HAS_HW_NRF_ECB 1
#define CONFIG_HAS_HW_NRF_EGU0 1
#define CONFIG_HAS_HW_NRF_EGU1 1
#define CONFIG_HAS_HW_NRF_EGU2 1
#define CONFIG_HAS_HW_NRF_EGU3 1
#define CONFIG_HAS_HW_NRF_EGU4 1
#define CONFIG_HAS_HW_NRF_EGU5 1
#define CONFIG_HAS_HW_NRF_GPIO0 1
#define CONFIG_HAS_HW_NRF_GPIO1 1
#define CONFIG_HAS_HW_NRF_GPIOTE 1
#define CONFIG_HAS_HW_NRF_MWU 1
#define CONFIG_HAS_HW_NRF_NFCT 1
#define CONFIG_HAS_HW_NRF_NVMC_PE 1
#define CONFIG_HAS_HW_NRF_POWER 1
#define CONFIG_HAS_HW_NRF_PPI 1
#define CONFIG_HAS_HW_NRF_RADIO_BLE_2M 1
#define CONFIG_HAS_HW_NRF_RADIO_BLE_CODED 1
#define CONFIG_HAS_HW_NRF_RADIO_IEEE802154 1
#define CONFIG_HAS_HW_NRF_RADIO_TX_PWR_HIGH 1
#define CONFIG_HAS_HW_NRF_RNG 1
#define CONFIG_HAS_HW_NRF_SAADC 1
#define CONFIG_HAS_HW_NRF_SWI0 1
#define CONFIG_HAS_HW_NRF_SWI1 1
#define CONFIG_HAS_HW_NRF_SWI2 1
#define CONFIG_HAS_HW_NRF_SWI3 1
#define CONFIG_HAS_HW_NRF_SWI4 1
#define CONFIG_HAS_HW_NRF_SWI5 1
#define CONFIG_HAS_HW_NRF_TEMP 1
#define CONFIG_HAS_HW_NRF_UARTE0 1
#define CONFIG_HAS_HW_NRF_UARTE1 1
#define CONFIG_HAS_HW_NRF_USBD 1
#define CONFIG_HAS_HW_NRF_WDT0 1
#define CONFIG_SOC_NRF52840 1
#define CONFIG_SOC_NRF52840_QIAA 1
#define CONFIG_SOC_DCDC_NRF52X 1
#define CONFIG_NRF_ENABLE_ICACHE 1
#define CONFIG_NRF_RTC_TIMER_USER_CHAN_COUNT 0
#define CONFIG_NRF_SOC_SECURE_SUPPORTED 1
#define CONFIG_NRF_APPROTECT_USE_UICR 1
#define CONFIG_SOC_COMPATIBLE_NRF 1
#define CONFIG_SOC_COMPATIBLE_NRF52X 1
#define CONFIG_ARCH "arm"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_ARM_STACK_PROTECTION 1
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_MPU_STACK_GUARD 1
#define CONFIG_MPU_ALLOW_FLASH_WRITE 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT 100
#define CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES 16
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_ERRNO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_XIP 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_CLOCK_CONTROL_NRF 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_50PPM 1
#define CONFIG_CLOCK_CONTROL_NRF_ACCURACY 50
#define CONFIG_FLASH_HAS_DRIVER_ENABLED 1
#define CONFIG_FLASH_HAS_PAGE_LAYOUT 1
#define CONFIG_FLASH 1
#define CONFIG_FLASH_PAGE_LAYOUT 1
#define CONFIG_FLASH_INIT_PRIORITY 50
#define CONFIG_SOC_FLASH_NRF 1
#define CONFIG_SOC_FLASH_NRF_RADIO_SYNC_NONE 1
#define CONFIG_GPIO_NRFX 1
#define CONFIG_GPIO_NRFX_INTERRUPT 1
#define CONFIG_HWINFO 1
#define CONFIG_HWINFO_NRF 1
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_1ST_LEVEL_INTERRUPT_BITS 8
#define CONFIG_2ND_LEVEL_INTERRUPT_BITS 8
#define CONFIG_3RD_LEVEL_INTERRUPT_BITS 8
#define CONFIG_PINCTRL_STORE_REG 1
#define CONFIG_PINCTRL_NRF 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_ASYNC 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_USE_RUNTIME_CONFIGURE 1
#define CONFIG_UART_LINE_CTRL 1
#define CONFIG_UART_NRFX 1
#define CONFIG_UART_NRFX_UARTE 1
#define CONFIG_UART_0_ENHANCED_POLL_OUT 1
#define CONFIG_UART_0_INTERRUPT_DRIVEN 1
#define CONFIG_UART_0_NRF_TX_BUFFER_SIZE 32
#define CONFIG_UART_1_INTERRUPT_DRIVEN 1
#define CONFIG_UART_1_ENHANCED_POLL_OUT 1
#define CONFIG_UART_1_NRF_TX_BUFFER_SIZE 32
#define CONFIG_UART_ENHANCED_POLL_OUT 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_SYSTEM_CLOCK_WAIT_FOR_STABILITY 1
#define CONFIG_USB_DEVICE_DRIVER 1
#define CONFIG_USB_DEVICE_REMOTE_WAKEUP 1
#define CONFIG_USB_NRFX_EVT_QUEUE_SIZE 32
#define CONFIG_USB_NRFX_WORK_QUEUE_STACK_SIZE 1024
#define CONFIG_USB_NRFX_ATTACHED_EVENT_DELAY 0
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE 0
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_COMMON_LIBC_STRNLEN 1
#define CONFIG_MINIMAL_LIBC_NON_REENTRANT_FUNCTIONS 1
#define CONFIG_MINIMAL_LIBC_MALLOC 1
#define CONFIG_MINIMAL_LIBC_MALLOC_ARENA_SIZE -2
#define CONFIG_MINIMAL_LIBC_CALLOC 1
#define CONFIG_MINIMAL_LIBC_REALLOCARRAY 1
#define CONFIG_MINIMAL_LIBC_OPTIMIZE_STRING_FOR_SIZE 1
#define CONFIG_MINIMAL_LIBC_TIME 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_CRC 1
#define CONFIG_RING_BUFFER 1
#define CONFIG_NOTIFY 1
#define CONFIG_BASE64 1
#define CONFIG_ONOFF 1
#define CONFIG_REBOOT 1
#define CONFIG_HAS_POWEROFF 1
#define CONFIG_CBPRINTF_NANO 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_LIBC_SUBSTS 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_AUTO 1
#define CONFIG_SEM_VALUE_MAX 32767
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_TIMER_CREATE_WAIT 100
#define CONFIG_TIMER_DELAYTIMER_MAX 20
#define CONFIG_ACPI_HID_LEN_MAX 12
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_FLASH_MAP 1
#define CONFIG_COVERAGE_GCOV_HEAP_SIZE 16384
#define CONFIG_USB_DEVICE_VID 0x1915
#define CONFIG_USB_DEVICE_PID 0x520F
#define CONFIG_USB_DEVICE_MANUFACTURER "Nordic Semiconductor"
#define CONFIG_USB_DEVICE_SN "0123456789ABCDEF"
#define CONFIG_USB_COMPOSITE_DEVICE 1
#define CONFIG_USB_MAX_NUM_TRANSFERS 4
#define CONFIG_USB_REQUEST_BUFFER_SIZE 128
#define CONFIG_USB_MAX_ALT_SETTING 8
#define CONFIG_USB_NUMOF_EP_WRITE_RETRIES 3
#define CONFIG_USB_SELF_POWERED 1
#define CONFIG_USB_MAX_POWER 50
#define CONFIG_USB_WORKQUEUE 1
#define CONFIG_USB_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_USB_WORKQUEUE_PRIORITY -1
#define CONFIG_USB_CDC_ACM 1
#define CONFIG_USB_CDC_ACM_RINGBUF_SIZE 1024
#define CONFIG_CDC_ACM_INTERRUPT_EP_MPS 16
#define CONFIG_CDC_ACM_BULK_EP_MPS 64
#define CONFIG_CDC_ACM_IAD 1
#define CONFIG_TOOLCHAIN_ZEPHYR_0_16 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_FLASH_LOAD_SIZE 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_COMPILER_FREESTANDING 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_NONE 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_META 1
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_COMPAT_INCLUDES 1
