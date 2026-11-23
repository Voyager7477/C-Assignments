# This is algorithm for login into gmail account.
1. Start the process.
2. Open a web browser and go to the Gmail login page (mail.google.com).
3. Enter your Gmail address (or phone number) and click Next.
4. Verify if the email address exists:
	• If No, display an error message ("Couldn't find your Google Account") and go back to Step 3 (or Stop).
	• If Yes, proceed to Step 5.
5. Enter your password and click Next.
6. Verify if the password is correct:
	• If No, display an error message ("Wrong password") and allow a retry (e.g., loop back to Step 5 or offer password recovery).
	• If Yes, proceed to Step 7.
7. Open the Gmail inbox .
8. Stop the process .

# Flowchart
          +---------+

          |  Start  |
          +---------+
               |
               v
    +---------------------+

    | Open Browser & Go   |
    | to Gmail Login Page |
    +---------------------+
               |
               v
    +---------------------+

    | Enter Email/Phone   |
    | & Click Next        |
    +---------------------+
               |
               v
       /---------------\
      /  Is Email/Phone \
     <     Valid?        >
      \               /
       \-------------/
         /         \
    No  /           \  Yes
       v             v
+-------------+  +---------------------+

| Show Email  |  | Enter Password      |
| Error       |  | & Click Next        |
+-------------+  +---------------------+

       |                     |
       |                     v
       |             /---------------\
       |            /  Is Password  \
       |           <    Correct?     >
       |            \               /
       |             \-------------/
       |               /         \
       |          No  /           \  Yes
       |             v             v
       |      +-------------+  +-------------+

       |      | Show Wrong  |  | Open Gmail  |
       |      | Password Msg|  | Inbox       |
       |      +-------------+  +-------------+

       |             |             |
       |   (Retry? / |             v
       +---> Stop)   +-----> +---------+

                               |  Stop   |
                               +---------+

# C Program using string
#include <stdio.h>
#include <string.h>

int main() {
    // Predefined valid credentials
    char valid_email[] = "user@gmail.com";
    char valid_password[] = "password123";

    // Variables to store user input
    char input_email[50];
    char input_password[50];

    printf("--- Gmail Login ---\n");

    // Step 1: Enter and verify email
    printf("Enter your Gmail address: ");
    scanf("%49s", input_email);

    if (strcmp(input_email, valid_email) != 0) {
        printf("Error: Couldn't find your Google Account.\n");
        return 0; // Stop process
    }

    // Step 2: Enter and verify password
    printf("Enter your password: ");
    scanf("%49s", input_password);

    if (strcmp(input_password, valid_password) == 0) {
        printf("\nLogin successful! Opening your Gmail inbox...\n");
    } else {
        printf("\nError: Wrong password. Try again or click Forgot password.\n");
    }

    return 0;
}
