def reverse_and_check_palindrome(arr):
    """
    Reverses an array and checks if it is a palindrome array.
    
    Args:
    - arr (list): The input array
    
    Returns:
    - bool: True if the reversed array is a palindrome array, False otherwise
    """
    reversed_arr = arr[::-1]  # Reverse the array
    return arr == reversed_arr  # Check if original and reversed arrays are equal


# Example usage
input_arr1 = [1, 2, 3, 4]
input_arr2 = [3, 2, 1]

# Check if input_arr1 is a palindrome array
if reverse_and_check_palindrome(input_arr1):
    print("Input array 1 is a palindrome array.")
else:
    print("Input array 1 is not a palindrome array.")

# Check if input_arr2 is a palindrome array
if reverse_and_check_palindrome(input_arr2):
    print("Input array 2 is a palindrome array.")
else:
    print("Input array 2 is not a palindrome array.")

//output
Input array 1 is not a palindrome array.
Input array 2 is a palindrome array.
