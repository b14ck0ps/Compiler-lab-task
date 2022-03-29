#include <iostream>
using namespace std;
int main(){
    bool isValid = false;
    string s = "This Is A valid string.";
    if(isupper(s[0])){ //first char is Cap Alpha
            if(s[s.size()-1] == '.'){ //last char is .
                for (int i = 1; i< s.size(); i++){ // check if has two Cap Alpha together
                    if(isupper(s[i]) && isupper(s[i+1])) {
                        isValid = false;
                        break;
                    }else{
                        if(s[i] == ' ' && s[i+1] == ' '){ // check if has two  space together
                            isValid = false;
                            break;
                        }else{
                            if(islower(s[i])&& isupper(s[i+1])){//check if aA
                            isValid = false;
                            break;
                            }else{
                                if((s[i]) == ' ' && s[i+1] == '.'){// check if has space before a  .
                                    isValid = false;
                                    break;
                                }else{
                                    isValid = true;
                                }
                            }
                        }
                    }
                }
            }
    }else {
        isValid = false;
    }

    //______//
    if(isValid)
        cout << "Valid ";
    else
        cout << "Invalid";
}
