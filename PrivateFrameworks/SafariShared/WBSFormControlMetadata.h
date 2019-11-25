//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString;

@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_addressBookLabel;
    NSString *_associatedUsername;
    NSString *_fieldClass;
    NSString *_fieldID;
    NSString *_fieldName;
    NSString *_tagName;
    NSString *_uniqueID;
    NSString *_nextControlUniqueID;
    NSString *_placeholder;
    NSString *_value;
    NSString *_passwordRules;
    NSDictionary *_radioButtonInfo;
    NSDictionary *_annotations;
    NSArray *_selectElementInfo;
    NSArray *_autocompleteTokens;
    double _rectLeft;
    double _rectTop;
    double _rectWidth;
    double _rectHeight;
    CDUnion_a3b3b741 _flags;
    int _size;
    int _maxLength;
    int _minLength;
    int _selectionStart;
    int _selectionLength;
    int _autoFillButtonType;
    int _lastAutoFillButtonType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double rectHeight; // @synthesize rectHeight=_rectHeight;
@property(readonly, nonatomic) double rectWidth; // @synthesize rectWidth=_rectWidth;
@property(readonly, nonatomic) double rectTop; // @synthesize rectTop=_rectTop;
@property(readonly, nonatomic) double rectLeft; // @synthesize rectLeft=_rectLeft;
@property(readonly, copy, nonatomic) NSArray *selectElementInfo; // @synthesize selectElementInfo=_selectElementInfo;
@property(readonly, copy, nonatomic) NSDictionary *radioButtonInfo; // @synthesize radioButtonInfo=_radioButtonInfo;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *nextControlUniqueID; // @synthesize nextControlUniqueID=_nextControlUniqueID;
@property(readonly, copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(readonly, copy, nonatomic) NSString *fieldID; // @synthesize fieldID=_fieldID;
@property(readonly, copy, nonatomic) NSString *fieldClass; // @synthesize fieldClass=_fieldClass;
@property(readonly, copy, nonatomic) NSString *passwordRules; // @synthesize passwordRules=_passwordRules;
@property(readonly, copy, nonatomic) NSString *associatedUsername; // @synthesize associatedUsername=_associatedUsername;
@property(readonly, copy, nonatomic) NSArray *autocompleteTokens; // @synthesize autocompleteTokens=_autocompleteTokens;
@property(readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(readonly, copy, nonatomic) NSString *addressBookLabel; // @synthesize addressBookLabel=_addressBookLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long lastAutoFillButtonType;
@property(readonly, nonatomic) long long autoFillButtonType;
@property(readonly, nonatomic) unsigned long long selectionLength;
@property(readonly, nonatomic) unsigned long long selectionStart;
@property(readonly, nonatomic) unsigned long long minLength;
@property(readonly, nonatomic) unsigned long long maxLength;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField;
@property(readonly, nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField;
@property(readonly, nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField;
@property(readonly, nonatomic, getter=isSecureTextField) BOOL secureTextField;
@property(readonly, nonatomic, getter=isTextField) BOOL textField;
@property(readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property(readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, nonatomic) BOOL looksLikeOneTimeCodeField;
@property(readonly, nonatomic) BOOL looksLikePasswordCredentialField;
@property(readonly, nonatomic) BOOL looksLikeIgnoredDataTypeField;
@property(readonly, nonatomic) BOOL looksLikeYearField;
@property(readonly, nonatomic) BOOL looksLikeMonthField;
@property(readonly, nonatomic) BOOL looksLikeDayField;
@property(readonly, nonatomic) BOOL looksLikeCreditCardTypeField;
@property(readonly, nonatomic) BOOL looksLikeCreditCardSecurityCodeField;
@property(readonly, nonatomic) BOOL looksLikeCreditCardNumberField;
@property(readonly, nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField;
@property(readonly, nonatomic) BOOL looksLikeCreditCardCardholderField;
@property(readonly, nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute;
@property(readonly, nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute;
@property(readonly, nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property(readonly, nonatomic) BOOL disallowsAutocomplete;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

