# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++11
LDFLAGS :=

# Directories
SRCDIR := ../src
INCDIR := ../include
BUILDDIR := ../build

# Files
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

# Output
OUTPUT := output

# Targets
all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -MMD -MP -c $< -o $@

clean:
	$(RM) -r $(BUILDDIR)/*.o $(BUILDDIR)/*.d $(OUTPUT)

-include $(DEPS)
