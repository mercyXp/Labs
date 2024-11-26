# Assignment: Compilation Methods

## Task
Develop a **translator-interpreter** for a programming language.

### Minimum Requirements for the Language:
1. **Data Types**:
   - Integers or real numbers (constants).
   - Variables (explicit type declarations are optional).
   - One-dimensional arrays (static).

2. **Operators**:
   - Assignment operators.
   - Formulas with parentheses and operations with two levels of precedence:
     - **Low precedence**: `+`, `–`.
     - **High precedence**: `*`, `/`.

3. **Control Structures**:
   - Conditional operators.
   - Loops with conditions, including comparison operations.

4. **Input and Output**:
   - Operators for input and output.

**Note**:  
For a minimal passing grade, the language only needs:
- Simple variables without explicit type declarations.
- Assignment operators.
- Formulas with parentheses using `+`, `–`, `*`, `/`.
- Input and output operators.

---

## Translator-Interpreter Specifications
1. **Lexical Analysis**:
   - List of lexemes with corresponding lexeme numbers.
   - Transition table for the finite automaton.

2. **Grammar**:
   - Context-Free Grammar (CFG) of the language, where lexemes are terminals.
   - CFG converted to a loose Greibach Normal Form (GNF).

3. **Semantic Actions**:
   - Actions for generating Reverse Polish Notation (RPN).

4. **Operations and Format**:
   - A list of RPN operations.
   - The RPN format.

---

## Tests for the Translator-Interpreter
1. **Complex Formulas**:
   - Include input of variable values and output of results.

2. **Array Operations**:
   - Input `n`, input `n` array elements, sort the array, and output the sorted array.

3. **Error Handling**:
   - Diagnostic output for errors:
     - Line number.
     - Position of the erroneous symbol in the line.

---

## Components of the Translator-Interpreter
1. **Lexical Analyzer**:
   - Implemented as a function (finite automaton).

2. **Syntax Analyzer**:
   - RPN generator (stack automaton + table-driven RPN generator).

3. **RPN Interpreter**.

---

## Teamwork Guidelines
- The task must be completed by a team of **2 or 3 members**.

### Additional Requirements for Teams of 3 Members:
To achieve the highest grade, the language must include **at least one** of the following:
1. Two or three data types (e.g., integers and real numbers) with respective operations.
2. Two-dimensional arrays with dynamic memory allocation.
3. Support for at least 2 standard functions in formulas (e.g., `sqrt`, `exp`, `log`).
4. Strings and arrays of strings with input and output capabilities.
5. Other advanced features as necessary.

### Collaboration:
- All team members must collaboratively establish the **principles and descriptions**.
- The implementation of the three main components may be divided among team members, but **everyone must understand all parts of the implementation**.

---
