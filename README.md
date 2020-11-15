# Libft_tests
## Authors:
ndemont: [Github](https://github.com/ndemont)

nboisde: [Github](https://github.com/nboisde)

### Description:
:wrench: (building in process)

Libft_tests is tester for the 42 libft project. For the first part, it compares your functions with the libc's functions. Then, you will face our homemade tests.
Enjoy the defense.

### Requirements:
:warning: Developed on macOS: (10.15.7 Catalina and first version of BigSur)

Your libft must have all the function to make the test run proprerly. You will face compilation issues if it's not the case.

### installation:
```
git clone git@github.com:nboisde/Libft_tests.git Libft_tests
```
Then copy your libft folder in the root Libft_tests folder.

It should have the name `libft` to works.

The path should be as followed:
```
~/*/Libft_tests/libft
```

### Running tests:
```
make
./libft_tests
```
You will have [OK] if your function pass the test, [KO] if it doesn't.

If you want to compile again: `make re`

***If you want to see where you crash:***

Each function is tested in the main, using subfunctions in files `~/*/Libft_tests/tests/test_*.c`. Each file handle a particular function and [OK] are often displayed in the same order of tests.