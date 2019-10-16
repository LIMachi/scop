include Makefiles/default_var.mk

NAME := scop
INC_DIR += glfw/include/GLFW
GLFW_DIR := glfw
GLFW_BUILD := $(GLFW_DIR)/build
GLFW_LIB := $(GLFW_BUILD)/src/libglfw3.a
LDFLAGS += -framework OpenGL -framework Cocoa -framework IOkit -framework CoreVideo
LDLIBS += $(GLFW_LIB)
CMAKE_MODULES += glfw
include Makefiles/bin.mk

$(GLFW_LIB):
	cmake -B$(GLFW_BUILD) -H$(GLFW_DIR)
	make -C$(GLFW_BUILD)
