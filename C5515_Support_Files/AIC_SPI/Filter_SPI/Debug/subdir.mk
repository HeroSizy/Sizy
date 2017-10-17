################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main.c 

CMD_SRCS += \
../C5515CMDFILE.cmd 

OBJS += \
./main.obj 

C_DEPS += \
./main.pp 

C_DEPS__QUOTED += \
"main.pp" 

OBJS__QUOTED += \
"main.obj" 

C_SRCS__QUOTED += \
"../main.c" 


# Each subdirectory must supply rules for building sources it contributes
main.obj: ../main.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C5500 Compiler'
	"C:/Program Files/Texas Instruments/ccsv5/tools/compiler/c5500/bin/cl55" -v5515 -g --include_path="C:/Program Files/Texas Instruments/ccsv5/tools/compiler/c5500/include" --include_path="C:\Documents and Settings\373a\workspace\452_Support" --diag_warning=225 --ptrdiff_size=32 --memory_model=large --preproc_with_compile --preproc_dependency="main.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


