//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "INImageProxyInjecting.h"
#import "INKeyImageProducing.h"
#import "INPersonExport.h"
#import "INSpeakable.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@interface INPerson : NSObject <INCacheableContainer, INKeyImageProducing, INImageProxyInjecting, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    NSPersonNameComponents *_nameComponents;
    NSString *_userInput;
    NSArray *_aliases;
    long long _suggestionType;
    NSArray *_alternatives;
    BOOL _isMe;
    NSString *_sourceAppBundleIdentifier;
    INPersonHandle *_personHandle;
    INImage *_image;
    NSString *_contactIdentifier;
    NSString *_customIdentifier;
    NSString *_relationship;
}

+ (id)expectedCNContactKeys;
+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property BOOL isMe; // @synthesize isMe=_isMe;
@property long long suggestionType; // @synthesize suggestionType=_suggestionType;
@property(copy) NSArray *aliases; // @synthesize aliases=_aliases;
@property(copy) NSString *relationship; // @synthesize relationship=_relationship;
@property(copy) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(copy) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy) INImage *image; // @synthesize image=_image;
@property(copy) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy) INPersonHandle *personHandle; // @synthesize personHandle=_personHandle;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *alternativeSiriMatches;
- (id)_dictionaryRepresentation;
- (id)initWithContact:(id)arg1;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13;
- (id)_sourceAppBundleIdentifier;
- (id)_aliases;
- (id)_userInput;
- (id)_displayName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy) NSString *displayName;
@property(copy) NSString *handle;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(BOOL)arg7;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *userURIString;
@property(readonly, copy, nonatomic) NSString *userIdentifier;
@property(readonly, copy, nonatomic) NSString *userName;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_intents_indexingRepresentation;
- (id)spokenPhrases;
@property(readonly, copy) NSArray *siriMatches;
@property(readonly) NSArray *alternativeSpeakableMatches;
@property(readonly) NSString *vocabularyIdentifier;
@property(readonly) NSString *identifier;
@property(readonly) NSString *pronunciationHint;
@property(readonly) NSString *spokenPhrase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

