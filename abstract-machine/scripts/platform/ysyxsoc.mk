AM_SRCS := riscv/npc/start.S \
           riscv/npc/bootloader.c \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c


CFLAGS    += -fdata-sections -ffunction-sections
CFLAGS += -Os  # 优化代码大小
LDFLAGS   += -T $(AM_HOME)/scripts/linkersoc.ld 
LDFLAGS   += --gc-sections -e _start 
NPCFLAGS  += -h 

CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

sim: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) sim ARGS="$('NPCFLAGS')" IMG=$(IMAGE).bin

run: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) sim ARGS="$('NPCFLAGS')" IMG=$(IMAGE).bin