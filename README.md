# Intro

This is a repo I'll update with solutions to some coding problems. 

# Examples

## erase from a string

```
#include <algorithm>
str.erase(std::remove(str.begin(), str.end(), 'a'), str.end());
```

## reverse a string

```
std::reverse(str.begin(), str.end());
```

## to upper case

```
#include <cctype>
std::toupper(char c);
```

## max elt of a container

```
#include <algorithm>
std::max_element
```

## index of max element

```
std::distance(con.begin(), std::max_element(con.begin(), con.end()));
```

## substring

`substr`

## initialize container to some list

container = {first, second, third, ...}

## set comparator

```
auto cmp = [](type lhs, type rhs){ return thing; }
std::set<type, decltype(cmp)> obj(cmp);
```
