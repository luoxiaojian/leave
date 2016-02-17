#include "taskset.h"

#ifndef _ALGO_H_

class algo{
	public:
		explicit algo(taskset&);

		int schedule();
		int checkSchedule();

		void allocate();

		float countPreemption();
		float countMigration();

		int **alloc;
		int **result;

	private:
		int searchEmptyDirectly(int tid, int overflow);
		int searchEmptyInDirectly(int tid, int rid);

		int searchTaskDirectly(int tid, int overflow);
		int searchTaskInDirectly(int tid, int rid);

		int isSrcTask(int tid);
		int isDstTask(int tid);

		void clearFlags();

		int *execute, *period;
		int ttnum, tnum, pnum, rnum, hp;
		int *rwidth, *b;

		int *remains;

		int *most_to_exe;
		int *least_to_exe;
		int *alloced_to_exe;
		int *laxity;
		int *jstart;

		int *rflag;
		int currentRowId;

		int totalEmpty;
};

#define _ALGO_H_
#endif
