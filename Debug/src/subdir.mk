################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Class2_Courses.cpp \
../src/Class2_Faculty.cpp \
../src/Class2_Section.cpp \
../src/Class2_Student1.cpp \
../src/Main.cpp 

OBJS += \
./src/Class2_Courses.o \
./src/Class2_Faculty.o \
./src/Class2_Section.o \
./src/Class2_Student1.o \
./src/Main.o 

CPP_DEPS += \
./src/Class2_Courses.d \
./src/Class2_Faculty.d \
./src/Class2_Section.d \
./src/Class2_Student1.d \
./src/Main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


