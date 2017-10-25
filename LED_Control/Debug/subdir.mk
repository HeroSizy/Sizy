################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../firc.c \
../main.c 

CMD_SRCS += \
../lnkx.cmd 

OBJS += \
./firc.obj \
./main.obj 

C_DEPS += \
./firc.pp \
./main.pp 

OBJS__QTD += \
".\firc.obj" \
".\main.obj" 

C_DEPS__QTD += \
".\firc.pp" \
".\main.pp" 

C_SRCS_QUOTED += \
"../firc.c" \
"../main.c" 


# Each subdirectory must supply rules for building sources it contributes
firc.obj: ../firc.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"C:/Program Files (x86)/Texas Instruments/ccsv4/tools/compiler/c5500/bin/cl55" -v5515 -g --include_path="C:/Program Files (x86)/Texas Instruments/ccsv4/tools/compiler/c5500/include" --include_path="C:/EE4413 Course Materials/Part 2 of 2_By Prof Joni Lie/EE4413_C515/C5515_Support_Files/452_Support" --include_path="C:/EE4413 Course Materials/Part 2 of 2_By Prof Joni Lie/EE4413_C515/C5515_Support_Files/C5515_Includes" --include_path="C:/Users/eeeceldsp1/Desktop/Sizy/C5515_Support_Files/C5515_Includes" --diag_warning=225 --ptrdiff_size=32 --memory_model=large --preproc_with_compile --preproc_dependency="firc.pp" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"C:/Program Files (x86)/Texas Instruments/ccsv4/tools/compiler/c5500/bin/cl55" -v5515 -g --include_path="C:/Program Files (x86)/Texas Instruments/ccsv4/tools/compiler/c5500/include" --include_path="C:/EE4413 Course Materials/Part 2 of 2_By Prof Joni Lie/EE4413_C515/C5515_Support_Files/452_Support" --include_path="C:/EE4413 Course Materials/Part 2 of 2_By Prof Joni Lie/EE4413_C515/C5515_Support_Files/C5515_Includes" --include_path="C:/Users/eeeceldsp1/Desktop/Sizy/C5515_Support_Files/C5515_Includes" --diag_warning=225 --ptrdiff_size=32 --memory_model=large --preproc_with_compile --preproc_dependency="main.pp" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '


