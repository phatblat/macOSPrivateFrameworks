//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ROCKImpersonateable.h"
#import "ROCKMemoizable.h"

@class NSArray;

@protocol UHADropSessionInterface <ROCKMemoizable, ROCKImpersonateable>
@property(readonly, nonatomic) unsigned long long operationMask;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)takePotentialDropOperation:(unsigned long long)arg1;
- (void)setHandler:(id <UHADropSessionHandlerInterface>)arg1;
- (void)takeHandler:(id <UHADropSessionHandlerInterface>)arg1;
@end

