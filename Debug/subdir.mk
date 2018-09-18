################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Pass0Visitor.cpp \
../Pass1Visitor.cpp \
../Pass2Visitor.cpp \
../Pcl2.cpp \
../Pcl2BaseVisitor.cpp \
../Pcl2Lexer.cpp \
../Pcl2Parser.cpp \
../Pcl2Visitor.cpp 

OBJS += \
./Pass0Visitor.o \
./Pass1Visitor.o \
./Pass2Visitor.o \
./Pcl2.o \
./Pcl2BaseVisitor.o \
./Pcl2Lexer.o \
./Pcl2Parser.o \
./Pcl2Visitor.o 

CPP_DEPS += \
./Pass0Visitor.d \
./Pass1Visitor.d \
./Pass2Visitor.d \
./Pcl2.d \
./Pcl2BaseVisitor.d \
./Pcl2Lexer.d \
./Pcl2Parser.d \
./Pcl2Visitor.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++0x -I"C:\antlr\antlr4-4.7.1\runtime\Cpp\runtime\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


