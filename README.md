- [Patterns & Idioms](#patterns--idioms)
  - [Creational Design Patterns](#creational-design-patterns)
    - [Named Constructor Idiom](#named-constructor-idiom)
    - [Static factory pattern](#static-factory-pattern)
  - [Structural Design Patterns](#structural-design-patterns)
  - [Behavioral Design Patterns](#behavioral-design-patterns)

# Patterns & Idioms

## Creational Design Patterns

### Named Constructor Idiom

A technique that provides more intuitive and/or safer construction operations for users of your class.

The problem is that constructors always have the same name as the class. Therefore the only way to differentiate between the various constructors of a class is by the parameter list. But if there are lots of constructors, the differences between them become somewhat subtle and error prone.

With the Named Constructor Idiom, you declare all the class’s constructors in the private or protected sections, and you provide public static methods that return an object. These static methods are the so-called “Named Constructors.” In general there is one such static method for each different way to construct an object.

This idiom can also be thought of as [Static factory pattern](#static-factory-pattern).

:slot_machine: [C++ Example](NamedConstructorIdiom/nci.hpp)

### Static factory pattern

As usual with the [Named Constructor Idiom](#named-constructor-idiom), the constructors are all private or protected, and there are one or more public static create() methods (the so-called "named constructors"), one per constructor.

:slot_machine: [C++ Example](StaticFactoryPattern/sfp.hpp)

## Structural Design Patterns

## Behavioral Design Patterns
