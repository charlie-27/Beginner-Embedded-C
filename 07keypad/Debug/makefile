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
07keypad.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
07keypad.list \

OBJCOPY_BIN += \
07keypad.bin \


# All Target
all: 07keypad.elf secondary-outputs

# Tool invocations
07keypad.elf: $(OBJS) $(USER_OBJS) /Users/carlo/Documents/embC/my_work/target/07keypad/STM32F446RETX_FLASH.ld
	arm-none-eabi-gcc -o "07keypad.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/Users/carlo/Documents/embC/my_work/target/07keypad/STM32F446RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="07keypad.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

07keypad.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "07keypad.list"
	@echo 'Finished building: $@'
	@echo ' '

07keypad.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "07keypad.bin"
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
