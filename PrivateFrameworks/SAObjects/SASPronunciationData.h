//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SASPronunciationData : AceObject <SAAceSerializable>
{
}

+ (id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationData;
@property(copy, nonatomic) NSString *ttsVersion;
@property(copy, nonatomic) NSArray *ttsPronunciations;
@property(nonatomic) long long tokenOffset;
@property(copy, nonatomic) NSString *orthography;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *apgId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

