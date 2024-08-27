# Algorithms and Data structure

## Why this repository?
This repository stores programs related to algorithms and data structures.

This repository has separate directories for each programming language. The reason for this is that it is important to be able to implement algorithms and data structures in any programming language.

Also, when implementing algorithms and data structures, we were conscious of learning the grammatical matters of that programming language and how to write in accordance with best practices.

LeetCode is a standard preparation for technical interviews at foreign tech companies, and I also keep my notes and answers to solving LeetCode in this repository.

## How you test your code?

To determine whether the program you have created meets the requirements, you can use testing.

Algorithms and data structures are implemented in various languages. Each language has its own directory, such as [`clang`](clang), [`python`](python), etc.

Each language has a slightly different testing methodology.

The test execution environment was built using Docker, so any environment will be able to run the tests with a few commands.

Below is a description of how to run the test for each language.

### [`C`](clang)

**1. Move to `clang` directory.**

**2. Execute command below in console.**
```Makefile
make test
```

**3. If you have no errors, that means you passed all tests!**



### [`python`](python)

**1. Move to `python` directory.**

**2. Execute command below in console.**
```sh
docker compose up
```

**3. In Docker container, execute following commands.**
```sh
cd /src
pytest
```


## LeetCode


## Ref
