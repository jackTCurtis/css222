Installation:
The installation process can be done in two parts, the brew installation and the ncurses installation.
Brew Installation:
Paste the following prompt into your command line:
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
it will install the software on mac book in a only a few minutes.
If you have GlobalProtect or something else instead of installing brew in your bash 
you will install it in your root.

Next place brew in your zshrc file.
In your zshrc place the following string:
export PATH="$PATH:/Users/994833/.brew/bin"

Make sure to save the file on exit

ncurses Installation:
The difficult part is done, now that brew is installed simply just put
brew install ncurses

this will take many minutes (10-15) and i would leave your terminal be while its installing.

Post Installation:
ncurses on c++ hasnt been updated since 2012 so much the documentaiton still applies, with changes
in c++ being the bigger changes. I recommend using the tlpd.org tutorials for actually learning the api, or the JBwyatt tutorials.
for straight documentaiton I'd use wither IBM's documentaiton or mkssoftware.com for detailed documentaiton.