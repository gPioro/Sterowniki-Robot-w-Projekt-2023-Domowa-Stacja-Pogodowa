################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/DEV_Config.c \
../Core/Src/TSL2591.c \
../Core/Src/bmp280.c \
../Core/Src/driver_aht20.c \
../Core/Src/driver_aht20_read_test.c \
../Core/Src/i2c.c \
../Core/Src/main.c \
../Core/Src/stm32l476g_discovery.c \
../Core/Src/stm32l476g_discovery_glass_lcd.c \
../Core/Src/stm32l4xx_hal_msp.c \
../Core/Src/stm32l4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32l4xx.c \
../Core/Src/usart.c 

OBJS += \
./Core/Src/DEV_Config.o \
./Core/Src/TSL2591.o \
./Core/Src/bmp280.o \
./Core/Src/driver_aht20.o \
./Core/Src/driver_aht20_read_test.o \
./Core/Src/i2c.o \
./Core/Src/main.o \
./Core/Src/stm32l476g_discovery.o \
./Core/Src/stm32l476g_discovery_glass_lcd.o \
./Core/Src/stm32l4xx_hal_msp.o \
./Core/Src/stm32l4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32l4xx.o \
./Core/Src/usart.o 

C_DEPS += \
./Core/Src/DEV_Config.d \
./Core/Src/TSL2591.d \
./Core/Src/bmp280.d \
./Core/Src/driver_aht20.d \
./Core/Src/driver_aht20_read_test.d \
./Core/Src/i2c.d \
./Core/Src/main.d \
./Core/Src/stm32l476g_discovery.d \
./Core/Src/stm32l476g_discovery_glass_lcd.d \
./Core/Src/stm32l4xx_hal_msp.d \
./Core/Src/stm32l4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32l4xx.d \
./Core/Src/usart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/DEV_Config.cyclo ./Core/Src/DEV_Config.d ./Core/Src/DEV_Config.o ./Core/Src/DEV_Config.su ./Core/Src/TSL2591.cyclo ./Core/Src/TSL2591.d ./Core/Src/TSL2591.o ./Core/Src/TSL2591.su ./Core/Src/bmp280.cyclo ./Core/Src/bmp280.d ./Core/Src/bmp280.o ./Core/Src/bmp280.su ./Core/Src/driver_aht20.cyclo ./Core/Src/driver_aht20.d ./Core/Src/driver_aht20.o ./Core/Src/driver_aht20.su ./Core/Src/driver_aht20_read_test.cyclo ./Core/Src/driver_aht20_read_test.d ./Core/Src/driver_aht20_read_test.o ./Core/Src/driver_aht20_read_test.su ./Core/Src/i2c.cyclo ./Core/Src/i2c.d ./Core/Src/i2c.o ./Core/Src/i2c.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32l476g_discovery.cyclo ./Core/Src/stm32l476g_discovery.d ./Core/Src/stm32l476g_discovery.o ./Core/Src/stm32l476g_discovery.su ./Core/Src/stm32l476g_discovery_glass_lcd.cyclo ./Core/Src/stm32l476g_discovery_glass_lcd.d ./Core/Src/stm32l476g_discovery_glass_lcd.o ./Core/Src/stm32l476g_discovery_glass_lcd.su ./Core/Src/stm32l4xx_hal_msp.cyclo ./Core/Src/stm32l4xx_hal_msp.d ./Core/Src/stm32l4xx_hal_msp.o ./Core/Src/stm32l4xx_hal_msp.su ./Core/Src/stm32l4xx_it.cyclo ./Core/Src/stm32l4xx_it.d ./Core/Src/stm32l4xx_it.o ./Core/Src/stm32l4xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32l4xx.cyclo ./Core/Src/system_stm32l4xx.d ./Core/Src/system_stm32l4xx.o ./Core/Src/system_stm32l4xx.su ./Core/Src/usart.cyclo ./Core/Src/usart.d ./Core/Src/usart.o ./Core/Src/usart.su

.PHONY: clean-Core-2f-Src

