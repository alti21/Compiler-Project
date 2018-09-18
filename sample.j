.class public sample
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; intx

.field private static x I

; inty

.field private static y I

; intz

.field private static z I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static func(I)I
	iload 0
	istore 1

	ldc	3
	istore 1

	ldc	2
	istore 2
	iload 1
	ireturn
.limit stack 16
.limit locals 16
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        sample/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        sample/_standardIn LPascalTextIn;

	getstatic	sample/x I
	istore 1
	iload 1
	invokestatic sample/func(I)I
	istore 2
	iload 2
	putstatic	sample/x I

	getstatic java/lang/System/out Ljava/io/PrintStream;
	ldc "right now x equals to "
	invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V

	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic	sample/x I
	invokevirtual java/io/PrintStream/println(I)V

	ldc	5
	putstatic	sample/y I

	getstatic	sample/y I
	putstatic	sample/z I

	getstatic java/lang/System/out Ljava/io/PrintStream;
	ldc "and y is "
	invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V

	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic	sample/y I
	invokevirtual java/io/PrintStream/println(I)V

	ldc	2
	ldc	5
	iadd
	ldc	2
	ldc	2
	imul
	ldc	2
	idiv
	isub
	putstatic	sample/x I

	getstatic     sample/x I
	istore 1
	iload 1
	ldc 5
	istore 2
	iload 2
	if_icmpeq     	L001
	goto	L002
L001:
	ldc	1
	putstatic	sample/x I
L002:

	getstatic java/lang/System/out Ljava/io/PrintStream;
	ldc "after while loop x equals to "
	invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V


	getstatic     sample/x I
	istore 3
	ldc 1
	istore 4
	WHILE: 
	iload 3
	iload 4
	if_icmpne	END_WHILE
	goto	EQUAL
	EQUAL:

	getstatic     sample/x I
	istore 1
	iload 1
	ldc 1
	istore 2
	iload 2
	if_icmpeq     	L003
	goto	L004
L003:
	ldc	7
	putstatic	sample/x I
L004:
	END_WHILE:

	getstatic java/lang/System/out Ljava/io/PrintStream;
	getstatic	sample/x I
	invokevirtual java/io/PrintStream/println(I)V

	getstatic     sample/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
