//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAIntentGroupSetMapLocation.h"
#import "SAServerBoundCommand.h"

@class NSNumber, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <SAServerBoundCommand, SAIntentGroupSetMapLocation>
{
}

+ (id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateIntentSlot;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *location;
@property(copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property(copy, nonatomic) NSString *intentTypeName;
@property(copy, nonatomic) NSNumber *intentSlotValueIndex;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property(copy, nonatomic) NSString *intentSlotKeyPath;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

