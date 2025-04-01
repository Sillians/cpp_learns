## Summary

- Header guards are designed to ensure that the contents of a given header file are not copied more than once into any single file, in order to prevent duplicate definitions.

- Duplicate declarations are fine -- but even if your header file is composed of all declarations (no definitions) it’s still a best practice to include header guards.

- A header guard prevent the same header to be used multiple time in the same file avoiding naming collisions and breaking the ODR.

- Header guard where usually manually defined using conditional compilations directives but modern compiler support a simpler alternative (#pragma once) which let the compiler handle that.