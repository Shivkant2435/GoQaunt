// This file is used for yhe handlling of of an access token
/*
This will stores an access token securely for the session.
Ensures the access token can only be set once per session, preventing accidental or unauthorized overwrites.
Provides methods to set and retrieve the token.
*/
#include <iostream>
#include <string>
#include "access_token.h"

int Password::num_sets = 0; // Static Member Variable is used

Password &Password::password()
{
    static Password pwd; // to have only one instace of pwd existance thro program 
    return pwd;
}

void Password::setAccessToken(const std::string &token)
{
    if (num_sets > 1)
    {
        std::cout << "WARNING: Access token can only be set once per session" << std::endl;
        return;
    }
    access_token = token;
    num_sets++;
}

void Password::setAccessToken(int &token)
{
    if (num_sets > 1)
    {
        std::cout << "WARNING: Access token can only be set once per session" << std::endl;
        return;
    }
    access_token = std::to_string(token);
    num_sets++;
}

std::string Password::getAccessToken() const
{
    return access_token;
}
