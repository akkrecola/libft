# libft - Selective reimplementation of the C standard library

## Description
Reimplementation of a selection of the C standard library. The core of `libft` is a foundational project in the *42 curriculum*, and is implemented as the second project of the school. It is used in later projects as the "Hive standard library".

## Disclaimer
**For Hive students**: First of all, congratulations on swimming through! Secondly, do yourself a favor and write your libft before looking at ready implementations. It's beneficial for your learning to first figure out *a* way to do it, *then* reference other ways and understand where they're coming from.

**Generally**: As should be painfully evident, you **should NOT use this repo** for anything else than as a reference. Use the C library or write your own if you're into that. 

## Prerequisites
You need `gcc` and `make`. This version of the library is not ANSI compitable.

## Usage
### Make
Build: `make`

Clean object files: `make clean`

Clean object files and binary: `make fclean`

Rebuild (make fclean; make): `make re`

### Include
To include the binary, use `gcc -I <path/to/binary/> ...` or set `C_INCLUDE_PATH=<path/to/binary/>` ([documentation](https://gcc.gnu.org/onlinedocs/cpp/Environment-Variables.html))
