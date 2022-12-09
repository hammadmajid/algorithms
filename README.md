[![CircleCI](https://dl.circleci.com/status-badge/img/gh/hammadmajid/algorithms/tree/master.svg?style=svg)](https://dl.circleci.com/status-badge/redirect/gh/hammadmajid/algorithms/tree/master) [![CodeQL](https://github.com/hammadmajid/algorithms/actions/workflows/codeql.yml/badge.svg?branch=master)](https://github.com/hammadmajid/algorithms/actions/workflows/codeql.yml) [![CodeFactor](https://www.codefactor.io/repository/github/hammadmajid/algorithms/badge)](https://www.codefactor.io/repository/github/hammadmajid/algorithms)

# Algorithms

In mathematics and computer science, an algorithm is a finite sequence of rigorous instructions, typically used to solve a class of specific problems or to perform a computation. Algorithms are used as specifications for performing calculations and data processing.

<sub>Read more at [wikipedia](https://en.wikipedia.org/wiki/Algorithm)</sub>

## Documentation

Each algorithm directory consists of it's own `README.md`. Which thoroughly explains how the algorithm works, it's common use cases and on how to build, test and run the algorithm. This documentation is also available on [GitHub Pages][pages].

### Code Documentation

You can find the most of code documentation in header files `.hh`. If you don't understand something you can ask a question in [discussions](https://github.com/hammadmajid/algorithms/discussions).

## Setup Guide

<!-- Use Docker, see issue #39 -->

Install **pre-requisites**

- [GNU Make](https://www.gnu.org/software/make/)
- [LLVM](https://releases.llvm.org/download.html)

1. You can [download](pages) or clone the repository using Git
```bash
$ git https://github.com/hammadmajid/algorithms algorithms
```
2. Change working directory
```bash
$ cd algorithms
# Change working directory to the algorithm you want to compile, test or run.
$ cd [algorithm-name]
```
3. Compile algroithm
```bash
$ make compile # in the algorithm directory you want to compile
```
4. Test your changes
```bash
$ compile test # in the algorithm directory you want to test
```
5. Run the algrotihm
```bash
$ make run
```

## Join us in discussions

We use GitHub Discussions to talk about all sorts of topics related to Algorithms. For example: if you'd like help troubleshooting a PR, have a great new idea, or want to say *hi*, join us in the [discussions](https://github.com/hammadmajid/algorithms/discussions).

## Contributors guidelines

See the [contributing guide](https://github.com/hammadmajid/algorithms/blob/greedy-input-test/CONTRIBUTING.md) for detailed instructions on how to get started with this project. For more complex contributions, you can open an issue using the most appropriate [issue template](https://github.com/hammadmajid/algorithms/issues/new/choose) to describe the changes you'd like to see.

If you're looking for a way to contribute, you can scan through our [existing issues](https://github.com/hammadmajid/algorithms/issues) for something to work on, also checkout thi Open-Source [Guide](https://opensource.guide/how-to-contribute/).

### Contributors

- [Hammad Majid][author] `Maintainer`
- [Happy Bird](https://github.com/HappyBirdisAXE)
- [Maxim Smolskiy](https://github.com/MaximSmolskiy)

## Code of Conduct

This project has adopted the [Contributor Covenant Code of Conduct](https://github.com/hammadmajid/algorithms/blob/master/CODE_OF_CONDUCT.md). For any questions or comment you can contact [hm.hammadmajid@gmail.com](hm.hammadmajid@gmail.com).

## License

This repository is licensed under *AGPL-3.0 License*. You may copy, distribute, and modify it under the terms of the License contained in the file `LICENSE`.

[pages]: https://hammadmajid.github.io/algorithms/
[author]: https://github.com/hammadmajid

## Thanks 💜

Thanks for all your contributions and efforts towards improving the Algorithms. We thank you for being part of the ✨ global open source community ✨!
