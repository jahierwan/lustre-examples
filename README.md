# suite Lustrelusb

This is a benchmark library for the Lustre synchronous dataflow language and 
its extensions. It is intended for demonstrating and testing features of the 
language in different tools.

The main aim is to collect both conformance tests and larger examples to aid 
both tool developers and users. A secondary aim is to promote unity and 
compatibility.

## core

The most basic subset supported in all languages derived from Lustre:
- nodes (with multiple arguments and return values)
- the `fby` operator
- the `bool` type with the operators `not`, `and`, `or`, `xor`, 
  `if`/`then`/`else`, `=`, and `<>`.

Does not require clocks or an initialization analysis.

See: [LUSTRE: a declarative language for real-time 
programming](http://dl.acm.org/citation.cfm?id=41641)

## Features


The various tools support different dialects and features. We categorize 
them here. Minor syntactic differences between tools must be treated by 
filters mapping from the dialect used in the benchmarks (specified below for 
each feature).

## verimag-v6

Contains examples that are specific to the Verimag Lustre V6 language

## verimag-v4

Contains examples that are specific to the Verimag Lustre V6 language

## Languages XXX mv somewhere

The different Languages and their feature classifications:

|               | Lustre-v4 | Lustre-v6 | Heptagon | Kind 2 | Scade 6 | Vélus |
|---------------|-----------|-----------|----------|--------|---------|-------|
| core          | yes       | yes       | yes      | yes    | yes     | yes   |
| pre           | yes       | yes       | yes      |        | yes     |       |
| current       | yes       | yes       |          |        |         |       |
| merge         |           | yes       | yes      |        | yes     | yes   |
| function      | yes       | yes       | yes      |        | yes     |       |
| int           | yes       | yes       | yes      |        | yes     | yes   |
| bitwise       |           |           | yes      |        | yes     | yes   |
| stdint        |           |           |          |        | yes     | yes   |
| real          | yes       | yes       | yes      |        | yes     | yes   |
| stdfloat      |           |           |          |        | yes     | yes   |
| clockedio     | yes       | yes       | yes      |        | yes     |       |
| enum          |           | yes       | yes      |        | yes     |       |
| statemachines |           |           | yes      |        | yes     |       |
| signals       |           |           | yes      |        | yes     |       |
| records       |           | yes       | yes      |        | yes     |       |
| arrays        | yes       | yes       | yes      |        | yes     |       |

TODO: update the column for Kind 2
TODO: implement a conformance test to generate a column for a given tool.

Syntactic variations:
- function: Lustre-v4/Lustre-v6/Scade: `function`, Heptagon: `fun`.

Related languages that are not (yet) supported:
- [Lucid Synchrone](https://www.di.ens.fr/~pouzet/lucid-synchrone/): A higher-order synchronous dataflow language.
- [Zélus](http://zelus.di.ens.fr): A synchronous language with ODEs.

## Contributing

Contributions are most welcome. Conformance tests must be released under a 
[BSD-2-Clause](https://opensource.org/licenses/BSD-2-Clause) license with 
copyright assigned to Inria. Larger examples must include a copyright notice 
that licences the content under
[CC BY-SA 4.0](https://creativecommons.org/licenses/by-sa/4.0/).

## Using the benchmarks

TODO: add instructions on running the benchmarks

TODO: the idea is to be able to quickly compile and run all examples for a 
given tool.

TODO: give tool-specific information

## Conformance Tests

Conformance tests are small programs designed either to be statically 
accepted by a tool or rejected as incorrect. They may include dynamic test 
functions

TODO: `dyntest_<n>_<name>`, where `<n>` is the number of cycles to execute 
and `<name>` is the name of the dynamic test. Takes a boolean input (always 
set to true) and returns a boolean output (true iff the test is OK).

TODO: Naming conformance tests `ok_<name>.lus` or `ko_<name>.lus`
TODO: Organize by folders (one for each combination of features).

## Larger Examples

TODO: include directly or as a submodule.
TODO: provide configure and Makefile (may use parent Makefile.inc)

