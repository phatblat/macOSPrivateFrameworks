//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RWIProtocolJSONObject.h"

@class NSArray, NSString, WDProtocolAutomationPoint;

@interface WDProtocolAutomationInputSourceState : RWIProtocolJSONObject
{
}

@property(nonatomic) int duration;
@property(retain, nonatomic) WDProtocolAutomationPoint *location;
@property(copy, nonatomic) NSString *nodeHandle;
@property(nonatomic) long long origin;
@property(nonatomic) long long pressedButton;
@property(copy, nonatomic) NSArray *pressedVirtualKeys;
@property(copy, nonatomic) NSString *pressedCharKey;
@property(copy, nonatomic) NSString *sourceId;
- (id)initWithSourceId:(id)arg1;
- (id)initWithProtocolObject:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

