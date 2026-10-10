# Nombre del compilador y banderas
CC = gcc
CFLAGS = -Wall -O2

# Nombre del ejecutable final
TARGET = a.out

# Archivos fuente
LEX_FILE = scanner.l
C_FILE = lex.yy.c
OBJ_FILE = lex.yy.o

# Regla principal
all: $(TARGET)

# Crear el ejecutable
$(TARGET): $(C_FILE)
	$(CC) $(CFLAGS) $(C_FILE) -o $(TARGET) -lfl

# Generar C desde Flex
$(C_FILE): $(LEX_FILE)
	flex $(LEX_FILE)

# Limpiar archivos generados
clean:
	rm -f $(TARGET) $(C_FILE) $(OBJ_FILE)