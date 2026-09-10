# Lab 3 · A typed about-me

**Week 03 · Types & variables**  
**Theme:** Types, constants, and variables  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** https://drive.google.com/drive/folders/1L3_NLchYujXMqs1Vm8yFSBMPKrgR-ww3?usp=sharing


## Scenario
A variable is a named place in memory with a type and a value. Declare five typed variables plus one `const`, then print a short paragraph a classmate can read.

## Goals
- Declare and initialize: `name` (string), `age` (int), `height_m` (double), `initial` (char), `student` (bool)
- One `const` (for example `CURRENT_YEAR`)
- Print a short readable card — labeled lines, not a raw dump
- Push + short demo video + Canvas

## Starter
Use `main.cpp`. Put your name in the file-top comment. Fill the boxes.

## Environment
VS 2022 · **GitHub Codespaces** · Replit · library machines

## Procedure
1. Open the starter. Keep `CURRENT_YEAR` (or rename it to something that should not change)
2. Declare and initialize every required box. Give each a real first value
3. Print labeled output. `bool` printing `1` or `0` is fine this week
4. Build. If a type error appears, read it — the box’s rule is the lesson
5. Commit, push, short demo, Canvas

## Sample output
```
=== About me ===
Name: Sam Rivera
Age: 19
Height (m): 1.72
Initial: S
Student: 1
Year: 2026
```

## Definition of done
- Compiles with zero errors
- Every required box is declared, initialized, and printed
- One `const` is used
- Repo + short demo + Canvas

## Rubric (100)
| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets prompt requirements | 30 |
| Clear labeled output | 15 |
| GitHub + short demo video | 15 |

## Scope fence
No loops, functions, or pointers. Don’t use `string` for a number just to dodge a type.

## Tips
- Uninitialized boxes print nonsense. Give every box a first value
- `std::string` needs `#include <string>`
- Putting text in an `int` is a type mismatch. Change the box or change the value

## Help (`/ring`)
After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
