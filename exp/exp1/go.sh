#!/bin/bash
expHome=~/workspace/home/workConserving
tasksetDir=$expHome/tasksets/tasksets4
targetDir=$expHome/exp/exp1/result

for dirname in $(ls $tasksetDir)
do
	for tsname in $(ls $tasksetDir/${dirname}/)
	do
		echo $tsname
		./demo $tasksetDir/${dirname}/$tsname >> $targetDir/$dirname
	done
done

#	./demo ./tasksets/$tsname 
