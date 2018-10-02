//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBContactHandle, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBContactValue <NSObject>
+ (Class)aliasesType;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) BOOL hasSuggestionType;
@property(nonatomic) int suggestionType;
@property(readonly, nonatomic) BOOL hasRelationship;
@property(copy, nonatomic) NSString *relationship;
@property(readonly, nonatomic) BOOL hasPhoneticNameSuffix;
@property(copy, nonatomic) NSString *phoneticNameSuffix;
@property(readonly, nonatomic) BOOL hasPhoneticNamePrefix;
@property(copy, nonatomic) NSString *phoneticNamePrefix;
@property(readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property(copy, nonatomic) NSString *phoneticMiddleName;
@property(readonly, nonatomic) BOOL hasPhoneticLastName;
@property(copy, nonatomic) NSString *phoneticLastName;
@property(readonly, nonatomic) BOOL hasPhoneticFirstName;
@property(copy, nonatomic) NSString *phoneticFirstName;
@property(readonly, nonatomic) BOOL hasNickName;
@property(copy, nonatomic) NSString *nickName;
@property(readonly, nonatomic) BOOL hasNameSuffix;
@property(copy, nonatomic) NSString *nameSuffix;
@property(readonly, nonatomic) BOOL hasNamePrefix;
@property(copy, nonatomic) NSString *namePrefix;
@property(readonly, nonatomic) BOOL hasMiddleName;
@property(copy, nonatomic) NSString *middleName;
@property(readonly, nonatomic) BOOL hasLastName;
@property(copy, nonatomic) NSString *lastName;
@property(nonatomic) BOOL hasIsMe;
@property(nonatomic) BOOL isMe;
@property(readonly, nonatomic) BOOL hasImage;
@property(retain, nonatomic) _INPBImageValue *image;
@property(readonly, nonatomic) BOOL hasHandle;
@property(copy, nonatomic) NSString *handle;
@property(readonly, nonatomic) BOOL hasFullName;
@property(copy, nonatomic) NSString *fullName;
@property(readonly, nonatomic) BOOL hasFirstName;
@property(copy, nonatomic) NSString *firstName;
@property(readonly, nonatomic) BOOL hasCustomIdentifier;
@property(copy, nonatomic) NSString *customIdentifier;
@property(readonly, nonatomic) BOOL hasContactHandle;
@property(retain, nonatomic) _INPBContactHandle *contactHandle;
@property(readonly, nonatomic) unsigned long long aliasesCount;
@property(copy, nonatomic) NSArray *aliases;
- (int)StringAsSuggestionType:(NSString *)arg1;
- (NSString *)suggestionTypeAsString:(int)arg1;
- (_INPBContactHandle *)aliasesAtIndex:(unsigned long long)arg1;
- (void)addAliases:(_INPBContactHandle *)arg1;
- (void)clearAliases;
@end

