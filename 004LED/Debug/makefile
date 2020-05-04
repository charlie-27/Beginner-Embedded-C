################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
004LED.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
004LED.list \

OBJCOPY_BIN += \
004LED.bin \


# All Target
all: 004LED.elf secondary-outputs

# Tool invocations
004LED.elf: $(OBJS) $(USER_OBJS) /Users/carlo/Documents/embC/my_work/target/004LED/STM32F446RETX_FLASH.ld
	arm-none-eabi-gcc -o "004LED.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/Users/carlo/Documents/embC/my_work/target/004LED/STM32F446RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="004LED.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

004LED.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "004LED.list"
	@echo 'Finished building: $@'
	@echo ' '

004LED.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "004LED.bin"
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
