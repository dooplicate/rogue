![alt text](https://miro.medium.com/max/219/1*lVK-WtZS_w79ps3faIlj6g.png)

Rogue Core integration/staging tree
=====================================

[![Build Status](https://travis-ci.org/rogue-project/rogue.svg?branch=master)](https://travis-ci.org/rogue-project/rogue)

http://apsis.online

A Cryptocurrency for Minimalists
----------------

ROGUE was built on the idea that simplicity is the key to adoption and that people prefer software that just works.

We needed a cryptocurrency to work with existing technologies in a way that was seamless.  
Too many blockchains emphasize functions that only serve to enrich the developers (and to be fair, investors) 
not make the software itself easier to use. We believe that it is for this reason that many projects languish. 
Worse, the industries often loosely targeted simply aren't willing to adapt to such learning curves as the room 
for error is slim when it comes to financial technologies. This project aims to simplify the blockchain.

ROGUE ultimately uses peer-to-peer technology to operate independently of RogueSpace, the official cloud wallet. 
Enabling users to independently mine, verify and initiate global transactions.

For more information, as well as an immediately functional wallet, see [http://apsis.online](https://gamejolt.com/games/apsisonline/396672).

Note: Cloud wallet testing is currently only available to Linux users.

Technical Overview
-------
![alt text](https://miro.medium.com/max/700/1*tfbZmBp0YmQFyNQnC2wZFQ.png)

ROGUE can be described as Litecoin stripped down to its core mechanics.  This means that even the standard QT wallet will be removed in favor of a purely text-user interface (TUI).  At which point additional features may be added using the C programming language. In the meantime, a cloud wallet exists and the coin works as a trading pair within an existing blockchain game. Which has been in first-party development for 5 years and operates entirely within the command-line.

License
-------

ROGUE is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

RogueSpace (the Apsis Online engine) is proprietary software, parts of which will be rolled out into open-source over time.

Development Process
-------------------

The `master` branch is regularly built and tested as it must always remain compatible
with the cloud wallet. [Tags](https://github.com/rogue-project/rogue/tags) are created
regularly to indicate new official, stable release versions of ROGUE.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

The RogueSpace forum should be used to discuss complicated or controversial changes before working
on a patch set.

Testing
-------

This is a security-critical project where any mistake might cost people lots of money.  As such we'd like to 
minimize the amount of minor or aesthetic fixes and only focus on core mechanics. 

### Automated Testing

ROGUE testing occurs in-house using proprietary tools. But developers are encouraged 
to write [unit tests](src/test/README.md) for new code, and to submit new unit tests for old code. 
Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`. 
Further details on running and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`

The Travis CI system makes sure that every pull request is built for Windows, Linux, and OS X, and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

We acknowledge that changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.  

Translations
------------

As a temporary solution, translation requests can be submitted via the [ROGUE Telegram](http://t.me/roguecurrency).
