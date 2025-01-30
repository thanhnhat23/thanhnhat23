def romanToInt(s):
    Symbol = ['I', 'V', 'X', 'L', 'C', 'D', 'M']
    Values = [1, 5, 10, 50, 100, 500, 1000]
    roman_dict = dict(zip(Symbol, Values))
    result = 0
    for i in range(len(s)):
        if i > 0 and roman_dict[s[i]] > roman_dict[s[i - 1]]:
            result += roman_dict[s[i]] - 2 * roman_dict[s[i - 1]]
        else:
            result += roman_dict[s[i]] 
    return result
s = input()
print(romanToInt(s))