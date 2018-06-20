//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCNContactUpdate.h"

@class ABCNPropertyDescription, NSString;

@interface ABCNContactKeyValueUpdate : NSObject <ABCNContactUpdate>
{
    ABCNPropertyDescription *_property;
    id _value;
}

@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)property;
- (void)applyToABCDContact:(id)arg1;
- (void)applyToABPerson:(id)arg1;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

