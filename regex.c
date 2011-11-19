// Tell GNU to define the non-standard APIs
#define _GNU_SOURCE 
// This is actually the same header used for the POSIX API.
// Except then you obviously don't need _GNU_SOURCE
#include <regex.h> 
#include <stdio.h>
#include <string.h>

int main()
{
    struct re_pattern_buffer pat_buff; // Put a re_pattern_buffer on the stack
    // The next 4 fields must be set.  

    // If non-zero, applies a translation function to characters before 
    // attempting match (http://www.delorie.com/gnu/docs/regex/regex_51.html)
    pat_buff.translate = 0; 
    // If non-zero, optimization technique.  Don't know details.
    // See http://www.delorie.com/gnu/docs/regex/regex_45.html
    pat_buff.fastmap = 0;
    // Next two must be set to 0 to request library allocate memory
    pat_buff.buffer = 0;
    pat_buff.allocated = 0;
    char pat_str[] = "1[^3]*3";
    // This is a global (!) used to set the regex type (note POSIX APIs don't use global for this)
    re_syntax_options = RE_SYNTAX_EGREP; 
    // Compile the pattern into our buffer
    re_compile_pattern(pat_str, sizeof(pat_str) - 1, &pat_buff); 
    char* nums[] = {"13", "31", "777", "10003"}; // Array of char-strings
    for(int i = 0; i < sizeof(nums) / sizeof(char*); i++)
    {
        int match_ret;
        // Returns number of characters matches (may be 0, but if so there's still a match)
        if((match_ret = re_match(&pat_buff, nums[i], strlen(nums[i]), 0, NULL)) >= 0) 
        {
            printf("unlucky\n");
        }
        else if(match_ret == -1) // No match
        {
            printf("lucky\n");
        }
        // Anything else (though docs say -2) is internal library error
        else 
    {
            perror("re_match");
        }
    }
    regfree(&pat_buff);
}
