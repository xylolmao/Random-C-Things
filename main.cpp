#include <iostream>

using namespace std;

void lower(string& str) {
    const char caps[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string newstr;
    for(int i = 0; i < str.length(); ++i) {
        for(int j = 0; j < sizeof(caps)/sizeof(caps[0]); ++j) {
            if(str[i] == caps[j]) {
                newstr += lower[j];
            } else if(str[i] == lower[j]) {
                newstr += str[i];
            }
        }
    }
    str = newstr;
}

void upper(string& str) {
    const char caps[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string newstr;
    for(int i = 0; i < str.length(); ++i) {
        for(int j = 0; j < sizeof(lower)/sizeof(lower[0]); ++j) {
            if(str[i] == lower[j]) {
                newstr += caps[j];
            } else if(str[i] == caps[j]) {
                newstr += str[i];
            }
        }
    }
    str = newstr;
}

string substring(string fullstr, int index) {
    string newstr;
    if(index > fullstr.length() - 1) {
        throw range_error("Index Out Of Range");
    } else if(fullstr.length() <= 0) {
        throw range_error("String Has 0 Characters..");
    }
    int newind = index + 1;
    for(newind; newind < fullstr.length(); ++newind) {
        newstr += fullstr[newind];
    }
    return newstr;
}

void changestr(string& str, string newstr) {
    str = newstr;
}

bool isCharPresent(string str, char Pr) {
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == Pr) {
            return true;
        }
    }
    return false;
}

bool isPhrasePresent(string str, string phrase) {
    string placeHolder;
    for(int i = 0; i < str .length(); ++i) {
        for(int j = 0; j < phrase.length();++j) {
                if(str[i] == phrase[j]) {
                    placeHolder += str[i];
                } else {
                    if(placeHolder.length() <= 0) {
                        placeHolder = "";
                    }
                }
            }
        }
    if(placeHolder == phrase) {
        return true;
    }
    return false;
} // sometimes has weird returns

void concat(string& y, string x) {
    y += x;
}

int intLS(int arr[], int item, int s) {
    for(int i = 0; i < s; ++i) {
        if(arr[i] == item) {
            return i;
        }
    }
    return -1;
}

int stringLS(string arr[], string item, int s) {
    for(int i = 0; i < s; ++i) {
        if(arr[i] == item) {
            return i;
        }
    }
    return -1;
}

string split(string str, auto item, int index) {
    int i = 0;
    string newstr;
    for(int j = 0; j < str.length(); ++j) {
        if(str[j] == item) {
            if(i == index) {
                for(int y = j; y < str.length(); ++y) {
                    newstr += str[y+1];
                }
                return newstr;
            } else {
                i++;
            }
        }
    }
}

int main() {
    // hi
}
