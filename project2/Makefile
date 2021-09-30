files1 = file1.o file2.o file3.o

obj_files = $(wildcard *.o)
OBJDIR = OBJ

sub_files = $(foreach file, $(files1), $(OBJDIR)/$(file))

# all targets
all: a b e

a:
	@echo executing rule for $@ target
b:
	@echo executing rule for $@ target
e:
	@echo executing rule for $@ target

#multiple targets
all1: y z x 

x y z:
	@echo executing $@

create:
	@echo creating files : $(files1) 
	mkdir -p $(OBJDIR)
	touch $(files1) $(OBJDIR)/a.o $(OBJDIR)/b.o $(OBJDIR)/c.o

clean:
	@echo removing files : $(files1) and directory $(OBJDIR)
	-rm $(files1)
	-rm -rf $(OBJDIR)

listobj:
	@echo obj files = $(obj_files)
	@echo subfiles = $(sub_files)
