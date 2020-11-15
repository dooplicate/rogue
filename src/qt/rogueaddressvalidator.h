// Copyright (c) 2011-2014 The Rogue Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class RogueAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RogueAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Rogue address widget validator, checks for a valid rogue address.
 */
class RogueAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RogueAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
