################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Particle-Fire-Explosion.cpp \
../src/Particle.cpp \
../src/Screen.cpp \
../src/Swarm.cpp 

OBJS += \
./src/Particle-Fire-Explosion.o \
./src/Particle.o \
./src/Screen.o \
./src/Swarm.o 

CPP_DEPS += \
./src/Particle-Fire-Explosion.d \
./src/Particle.d \
./src/Screen.d \
./src/Swarm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


