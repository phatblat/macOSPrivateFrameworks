//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>
{
}

+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)directAnswer;
@property(retain, nonatomic) SAGKSpeakableAnswer *speakableAnswer;
@property(copy, nonatomic) NSString *confidenceLevel;
@property(copy, nonatomic) NSString *answer;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

