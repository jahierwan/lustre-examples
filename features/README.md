
# int

The `int` type with the operators `+`, `-`, `*`, `div`, `mod`, `<`, `<=`, 
`>`, and `>=`.

See: [LUSTRE: a declarative language for real-time 
programming](http://dl.acm.org/citation.cfm?id=41641)

# bitwise

Bitwise operators for the `int` type: `land`, `lor`, `lxor`, `lnot`, `lsl`, 
and `lsr`.

# stdint

The `int8`, `uint8`, `int16`, `uint16`, `int32`, `uint32`, `int64`, and 
`uint64` types with the `int` and `bitwise` operators.

# real

The `real` type with the operators `+`, `-`, `*`, `/`, `<`, `<=`, `>`, and 
`>=`.

See: [LUSTRE: a declarative language for real-time 
programming](http://dl.acm.org/citation.cfm?id=41641)

# stdfloat

The `float32` and `float64` types with the `real` operators.

# function

Includes support for function (stateless nodes) declarations.

# pre

Includes the `pre` and `->` operators. Requires initialization analysis.

See: [LUSTRE: a declarative language for real-time 
programming](http://dl.acm.org/citation.cfm?id=41641)

# current

Includes the `when` and (uninitialized) `current` operators.
Requires clocks, but inputs and outputs may be restricted to the base clock.

See: [LUSTRE: a declarative language for real-time 
programming](http://dl.acm.org/citation.cfm?id=41641)

# merge

Includes the `when` and boolean `merge` operators.
Requires clocks, but inputs and outputs may be restricted to the base clock.

TODO: add a reference to the paper that introduces it.

See: [Lucid Synchrone Tutorial and Reference Manual](https://www.di.ens.fr/~pouzet/lucid-synchrone/lucid-synchrone-3.0-manual.pdf)

# clockedio

Inputs and outputs may be sub-clocked.

See: [LUSTRE: a declarative language for real-time 
programming](http://dl.acm.org/citation.cfm?id=41641)

# enum

Includes enumerated types and the generalized `merge`.

# statemachines

Includes state machines.

TODO: Which syntax? Scade 6? Heptagon?

See:
- [Compiling Argos into Boolean equations](http://www-verimag.imag.fr/~halbwach/FTRTFT96.html)
- [Mode-Automata: a new domain-specific construct for the development of safe critical systems](http://www.sciencedirect.com/science/article/pii/S016764230200093X)
- [Lucid Synchrone Tutorial and Reference Manual](https://www.di.ens.fr/~pouzet/lucid-synchrone/lucid-synchrone-3.0-manual.pdf)
- [A Conservative Extension of Synchronous Data-flow with State Machines](https://www.di.ens.fr/~pouzet/bib/emsoft05b.pdf)

# signals

Includes signals.

TODO: Which syntax? Scade 6? Heptagon?

See:
- [Lucid Synchrone Tutorial and Reference Manual](https://www.di.ens.fr/~pouzet/lucid-synchrone/lucid-synchrone-3.0-manual.pdf)
- [Mixing Signals and Modes in Synchronous Data-flow Systems](https://www.di.ens.fr/~pouzet/bib/emsoft06.pdf)

# records 

Includes record types.

TODO: Which syntax? Scade 6? Heptagon?
R1: delete and put record example in langages directories ?

# arrays

Includes arrays and iterators.

TODO: Which form? Lustre v4, Lustre v6, Heptagon, Scade? Or split into 
multiple features?
R1: as records ?

See:
- [Implementing Reactive Programs on Circuits: A Hardware Implementation of LUSTRE](http://link.springer.com/content/pdf/10.1007/bfb0031993.pdf)
- [Efficient compilation of array iterators for Lustre](http://www.irisa.fr/espresso/Equipe/Morel/Publications/slap02/morel02.pdf)
- [A modular memory optimization for synchronous data-flow languages: application to arrays in a Lustre compiler](https://hal.inria.fr/hal-0072852://hal.inria.fr/hal-00728527)


