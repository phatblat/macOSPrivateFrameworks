//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CATStateMachineEvent : NSObject
{
    id _trigger;
    id _context;
}

+ (id)eventWithTrigger:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) id trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (id)initWithEventTrigger:(id)arg1 context:(id)arg2;
- (id)description;

@end

