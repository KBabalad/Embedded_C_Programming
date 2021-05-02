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
Led_Toogle_struct_Bit_fields.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Led_Toogle_struct_Bit_fields.list \

OBJCOPY_BIN += \
Led_Toogle_struct_Bit_fields.bin \


# All Target
all: Led_Toogle_struct_Bit_fields.elf secondary-outputs

# Tool invocations
Led_Toogle_struct_Bit_fields.elf: $(OBJS) $(USER_OBJS) B:\Online\ Courses\Embedded_course\Target\Led_Toogle_struct_Bit_fields\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "Led_Toogle_struct_Bit_fields.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"B:\Online Courses\Embedded_course\Target\Led_Toogle_struct_Bit_fields\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Led_Toogle_struct_Bit_fields.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Led_Toogle_struct_Bit_fields.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Led_Toogle_struct_Bit_fields.list"
	@echo 'Finished building: $@'
	@echo ' '

Led_Toogle_struct_Bit_fields.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Led_Toogle_struct_Bit_fields.bin"
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
