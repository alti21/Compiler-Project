################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/util/CrossReferencer.cpp \
../wci/util/ParseTreePrinter.cpp 

O_SRCS += \
../wci/util/CrossReferencer.o \
../wci/util/ParseTreePrinter.o 

OBJS += \
./wci/util/CrossReferencer.o \
./wci/util/ParseTreePrinter.o 

CPP_DEPS += \
./wci/util/CrossReferencer.d \
./wci/util/ParseTreePrinter.d 


# Each subdirectory must supply rules for building sources it contributes
wci/util/%.o: ../wci/util/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++0x -I"C:\antlr\antlr4-4.7.1\runtime\Cpp\runtime\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


