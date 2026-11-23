# 🔢 Algorithm

1. **Start** the process.
2. **Declare** three variables: `num1`, `num2`, and `num3`.
3. **Read** the values of `num1`, `num2`, and `num3` from the user.
4. **Compare** the numbers:
   * If `num1 >= num2` **and** `num1 >= num3`, display `num1` as the largest number.
   * Else if `num2 >= num1` **and** `num2 >= num3`, display `num2` as the largest number.
   * Else, display `num3` as the largest number.
5. **Stop** the process.

# 📊 Flowchart

```text
             +---------+

             |  Start  |
             +---------+
                  |
                  v
       +---------------------+

       | Read num1, num2,    |
       | and num3            |
       +---------------------+
                  |
                  v
          /---------------\
         / Is num1 >= num2 \
        <        AND        >
         \  num1 >= num3?  /
          \---------------/
            /           \
       Yes /             \ No
          v               v
+------------------+   /---------------\

| Print num1 is    |  / Is num2 >= num1 \
| the largest      | <        AND        >
+------------------+  \  num2 >= num3?  /
          |            \---------------/
          |              /           \
          |         Yes /             \ No
          |            v               v
          |   +------------------+   +------------------+

          |   | Print num2 is    |   | Print num3 is    |
          |   | the largest      |   | the largest      |
          |   +------------------+   +------------------+

          |            |               |
          +------------+---------------+
                       |
                       v
                  +---------+

                  |  Stop   |
                  +---------+

  # Program
#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("--- Find the Largest Among Three Numbers ---\n");
    printf("Enter three numbers separated by spaces: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Compare numbers using conditional branching
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf is the largest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2lf is the largest number.\n", num2);
    } else {
        printf("%.2lf is the largest number.\n", num3);
    }

    return 0;
}
