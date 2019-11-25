//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, NSMutableCharacterSet, NSNumberFormatter, NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField
{
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
    BOOL _secureText;
    BOOL _secureVisibleText;
    BOOL _numeric;
    BOOL _luhnCheck;
    BOOL _keepPaddingCharactersForSubmission;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSString *_currencyCode;
    NSString *_displayFormatPlaceholder;
    NSMutableCharacterSet *_allowedCharacters;
    NSArray *_paddingCharacters;
}

@property(retain, nonatomic) NSArray *paddingCharacters; // @synthesize paddingCharacters=_paddingCharacters;
@property(retain, nonatomic) NSMutableCharacterSet *allowedCharacters; // @synthesize allowedCharacters=_allowedCharacters;
@property(copy, nonatomic) NSString *displayFormatPlaceholder; // @synthesize displayFormatPlaceholder=_displayFormatPlaceholder;
@property(nonatomic) BOOL keepPaddingCharactersForSubmission; // @synthesize keepPaddingCharactersForSubmission=_keepPaddingCharactersForSubmission;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic, getter=useLuhnCheck) BOOL luhnCheck; // @synthesize luhnCheck=_luhnCheck;
@property(nonatomic, getter=isNumeric) BOOL numeric; // @synthesize numeric=_numeric;
@property(nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText; // @synthesize secureVisibleText=_secureVisibleText;
@property(nonatomic, getter=isSecureText) BOOL secureText; // @synthesize secureText=_secureText;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (void)updateDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (BOOL)hasDisplayFormat;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)_submissionStringForValue:(id)arg1;
- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

