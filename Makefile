CC      := clang
CFLAGS  := -std=c23 -Wall -Wextra -I. -g -O0
BUILDDIR := build

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=$(BUILDDIR)/%.o)
DEPS := $(OBJS:.o=.d)
TARGET := $(BUILDDIR)/vcpu

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILDDIR)/%.o: %.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -MMD -MP -c -o $@ $<

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

-include $(DEPS)

clean:
	rm -rf $(BUILDDIR)
