# ASCII utility

Demonstrate possibility with ASCII.

See [this file](ASCII) for misc texts

## Usage

Draw box with specified width, height and type.

```
$ ascii box 10 5 rounded
╭────────╮
│        │
│        │
│        │
╰────────╯
```
Test colors in your terminal. (its actually rainbow in terminal)

```
$ ascii color rainbow
w o w - r a i n b o w - ! ! ! ! 
```

## Building

```
git clone https://github.com/hayattgd/ascii-util.git
cd ascii-util
gcc main.c
```

To execute `a.out`, run:

```
chmod +x a.out
./a.out
```

## License

This repository is distributed under GNU GENERAL PUBLIC LICENSE.
