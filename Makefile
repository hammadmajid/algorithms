dirs := ./greedy-algorithm ./ford-fulkerson-algorithm dijkstra\'s-algorithm

define commands

# cd $(1)
# cat Makefile
make compile -C$(1)
# cd ..

endef

all:
	$(foreach dir, $(dirs), $(call commands, $(dir))) 
