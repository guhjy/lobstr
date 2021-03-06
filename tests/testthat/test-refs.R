context("test-refs.R")

test_that("expression has no refs", {
  expect_equal(obj_refs(1:10), 0L)
})

test_that("local variable has one ref", {
  x <- 1:10
  expect_equal(obj_refs(x), 1L)
})

test_that("local variable with ref has two refs", {
  x <- 1:10
  y <- x
  expect_equal(obj_refs(x), 2L)
})
