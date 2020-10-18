################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/application/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
desafio_linha_Tamandutech.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
desafio_linha_Tamandutech.list \

OBJCOPY_BIN += \
desafio_linha_Tamandutech.bin \


# All Target
all: desafio_linha_Tamandutech.elf secondary-outputs

# Tool invocations
desafio_linha_Tamandutech.elf: $(OBJS) $(USER_OBJS) C:\Users\Acer\ Nitro\ 2\STM32CubeIDE\workspace_1.4.0\desafio_linha_Tamandutech\STM32L462RETX_FLASH.ld
	arm-none-eabi-gcc -o "desafio_linha_Tamandutech.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\Acer Nitro 2\STM32CubeIDE\workspace_1.4.0\desafio_linha_Tamandutech\STM32L462RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="desafio_linha_Tamandutech.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

desafio_linha_Tamandutech.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "desafio_linha_Tamandutech.list"
	@echo 'Finished building: $@'
	@echo ' '

desafio_linha_Tamandutech.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "desafio_linha_Tamandutech.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
