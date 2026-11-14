# Green Efficiency Analysis

## Measurement Methodology

This experiment investigated the execution time of a C program containing three separate computational phases: dataset construction, dataset processing, and checksum reduction. The purpose was to measure how much CPU time each phase required and to understand how execution time can inform discussions about software efficiency.

The program was compiled using GCC with the required strict compiler flags: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. No optimization flag was explicitly added. All three phases operated on a fixed dataset containing 50,000 integer elements.

The experiment used the C standard library function `clock()` to record CPU time at four boundaries: before dataset construction, after construction, after processing, and after checksum reduction. The differences between consecutive measurements were divided by `CLOCKS_PER_SEC` to convert clock ticks into seconds.

The measurements were collected during one execution in the same Sandbox environment. Each phase was executed sequentially, and the algorithmic operations were preserved.

## Observed Performance Differences

The recorded execution times were:

- Total execution time: **0.000740 seconds**
- Dataset construction: **0.000287 seconds**
- Dataset processing: **0.000317 seconds**
- Checksum reduction: **0.000136 seconds**

These measurements show that the three phases did not necessarily require equal amounts of CPU time.

The dataset construction phase generated 50,000 integer values using a deterministic pseudo-random sequence. The processing phase performed arithmetic operations and a conditional check on each element. The reduction phase calculated a checksum using repeated multiplication and addition.

The longest measured phase was **PROCESS**, requiring **0.000317 seconds**.

The shortest measured phase was **REDUCE**, requiring **0.000136 seconds**.

The total measured time was 0.000740 seconds. The phase measurements were obtained from consecutive clock boundaries, allowing their durations to be compared directly.

However, the measurements represent only this particular execution. They should not be interpreted as universal performance rankings.

## Relation Between Runtime and Energy Consumption

Execution time provides a useful starting point for evaluating computational efficiency. A program that keeps a processor active for a longer period may consume more energy than an equivalent program that completes sooner under comparable conditions.

In this experiment, the total recorded CPU time was 0.000740 seconds. The measured phases therefore provide evidence about where CPU execution time was spent.

The phase with the greatest recorded duration is a reasonable candidate for further investigation because it accounted for the largest measured portion of this execution.

Nevertheless, the experiment did not measure electrical power or energy consumption directly. Consequently, the results cannot establish how many joules were consumed or prove that one phase used more electrical energy than another.

## Limitations of the Experiment

The main limitation is that `clock()` measures processor time rather than electrical energy consumption. No power meter or energy profiling tool was used.

Another limitation is the extremely short execution duration. Small timing differences can be affected by clock resolution, system activity, and measurement overhead.

Only one execution was recorded for this report. Repeating the experiment and calculating averages would provide stronger evidence about consistent performance differences.

The experiment also used a fixed dataset size and one execution environment. Results might differ with other dataset sizes, compiler optimization settings, processors, or operating conditions.

Finally, the experiment compared phases with different responsibilities rather than alternative implementations of exactly the same operation.

## Practical Engineering Takeaway

The experiment demonstrates why developers should measure performance before making optimization decisions.

The recorded results identify which phase took the longest during this run, but they do not prove that changing that phase would improve overall energy efficiency.

A responsible engineering approach is to establish a baseline, repeat measurements under controlled conditions, identify consistently expensive operations, and evaluate changes using comparable workloads.

Runtime measurements are valuable evidence for performance analysis, but claims about sustainability should remain proportional to the measurements actually collected.

For this experiment, the strongest supported conclusion is that the program completed its three phases in 0.000740 seconds of measured CPU time, with observable differences between individual phases.
