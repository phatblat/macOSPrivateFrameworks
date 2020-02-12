//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface AXSSPunctuationEntry : NSObject <NSCopying>
{
    NSUUID *_uuid;
    NSUUID *_groupUUID;
    BOOL _inCloud;
    unsigned short _version;
    NSString *_punctuation;
    NSString *_replacement;
    long long _rule;
    NSString *_ckChangeTag;
    NSDate *_lastModifiedDate;
    NSDate *_ckRecordProcessDate;
}

+ (id)punctuationEntryFromJSONRepresentation:(id)arg1;
+ (id)punctuationEntryFromJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSDate *ckRecordProcessDate; // @synthesize ckRecordProcessDate=_ckRecordProcessDate;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *ckChangeTag; // @synthesize ckChangeTag=_ckChangeTag;
@property(nonatomic) BOOL inCloud; // @synthesize inCloud=_inCloud;
@property(nonatomic) unsigned short version; // @synthesize version=_version;
@property(nonatomic) long long rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *replacement; // @synthesize replacement=_replacement;
@property(retain, nonatomic) NSString *punctuation; // @synthesize punctuation=_punctuation;
@property(retain, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSData *jsonRepresentation;
@property(readonly, nonatomic) NSDictionary *jsonDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

