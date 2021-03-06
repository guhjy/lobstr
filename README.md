
<!-- README.md is generated from README.Rmd. Please edit that file -->

# lobstr

[![Travis-CI Build
Status](https://travis-ci.org/r-lib/lobstr.svg?branch=master)](https://travis-ci.org/r-lib/lobstr)
[![Coverage
status](https://codecov.io/gh/r-lib/lobstr/branch/master/graph/badge.svg)](https://codecov.io/github/r-lib/lobstr?branch=master)

lobstr provides tool in the same vein as `str()`, tools that allow you
to dig into the detail of an object.

## Installation

You can install the development version with:

``` r
# install.packages("devtools")
devtools::install_github("r-lib/lobstr")
```

## Example

`ast()` draws the abstract syntax tree of R expressions:

``` r
ast(a + b + c)
#> █─`+` 
#> ├─█─`+` 
#> │ ├─a 
#> │ └─b 
#> └─c

ast(function(x = 1) {
  if (x > 0) print("Hi!")
})
#> █─`function` 
#> ├─█─x = 1 
#> ├─█─`{` 
#> │ └─█─`if` 
#> │   ├─█─`>` 
#> │   │ ├─x 
#> │   │ └─0 
#> │   └─█─print 
#> │     └─"Hi!" 
#> └─<inline srcref>
```

`ref()` shows hows objects can be shared across data structures by
digging into the underlying \_\_ref\_\_erences:

``` r
x <- 1:1e6
y <- list(x, x, x)
ref(y)
#> █ <1:0x7ff9bff9ea38> list 
#> ├─<2:0x107ddf000> int 
#> ├─<2:0x107ddf000> 
#> └─<2:0x107ddf000>

e <- rlang::env()
e$self <- e
ref(e)
#> █ <1:0x7ff9ba34f310> env 
#> └─self = <1:0x7ff9ba34f310>
```

A related tool is `obj_size()`, which computes the size of an object
taking these shared references into account:

``` r
obj_size(x)
#> 4,000,040 B
obj_size(y)
#> 4,000,112 B
```
