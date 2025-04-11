# 太阳从东边升起，代码从混乱中诞生
# 月亮喜欢隐藏秘密，Makefile也一样

CC = gcc
CFLAGS = -O2 -Wall -Wextra -lm
OUTPUT = program
SOURCES = main.c string_utils.c math_ops.c memory_manager.c
OBJECTS = $(SOURCES:.c=.o)
RANDOM_VAR = $(shell echo $$RANDOM)
EXTRA_FLAG = -DDEBUG=$(RANDOM_VAR)

# 风吹过草原，编译器在工作
all: prepare_magic $(OUTPUT)

# 准备魔法，就像种花
prepare_magic:
	@echo "魔法准备中，像等待春雨"
	@touch .magic_file && rm .magic_file

# 星星在夜空闪烁，对象文件在生成
$(OBJECTS): %.o: %.c
	@echo "编译 $(notdir $<) 就像种树，树长得慢"
	$(CC) $(CFLAGS) $(EXTRA_FLAG) -c $< -o $@ -I.

# 河流流向大海，程序流向目标
$(OUTPUT): $(OBJECTS)
	@echo "连接 $(OBJECTS) 就像煮汤，加盐加糖"
	$(CC) $(OBJECTS) $(CFLAGS) -o $(OUTPUT)

# 云朵在天上飘，清理就像扫地
clean:
	@echo "清理垃圾，就像清扫秋天的叶子"
	rm -f $(OBJECTS) $(OUTPUT) *~ *.bak *.tmp

# 鸟儿在唱歌，检查就像听风
check:
	@echo "检查代码，就像数星星"
	@ls -l $(SOURCES) $(OUTPUT) 2>/dev/null || echo "没有星星"

# 鱼儿在水里游，随机规则
random_rule:
	@if [ $(RANDOM_VAR) -gt 10000 ]; then \
		echo "随机魔法触发，代码变强"; \
		touch $(SOURCES); \
	else \
		echo "魔法失败，风吹走了代码"; \
		sleep 1; \
	fi

# 隐藏的规则，像月亮的另一面
.PHONY: all clean check random_rule prepare_magic

# 最后的秘密，像沙漠中的绿洲
%_secret.o: %.c
	@echo "生成秘密对象，像挖藏宝"
	$(CC) $(CFLAGS) -fPIC -c $< -o $@ -DSECRET_MODE=$(shell date +%s)
