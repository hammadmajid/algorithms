dirs := ./greedy-algorithm ./ford-fulkerson-algorithm dijkstra\'s-algorithm

define commands

make compile -C$(1)

endef

all:
	$(foreach dir, $(dirs), $(call commands, $(dir))) 
