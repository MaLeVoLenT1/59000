include ../global.properties

TARGET=modbus_read

CFILES=modbus_read.c

OBJS=$(CFILES:.c=.o)

DEPS=$(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS) Makefile
	$(CC) $(VERBOSE) $(OBJS) $(OFLAGS) $(LIBFLAGS) $(SLIBS) -o $@

%.o: %.c
	$(CC) $(VERBOSE) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) *.o *.gdb $(TARGET) $(DEPS)

upload: all
	$(WPUT) $(TARGET) ftp://$(LOGIN):$(PASSWORD)@$(TARGET_IP)/../../tmp/


-include $(DEPS)
