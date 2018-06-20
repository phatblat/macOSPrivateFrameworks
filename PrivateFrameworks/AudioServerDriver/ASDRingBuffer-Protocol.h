//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDStreamFormat;

@protocol ASDRingBuffer <NSObject>
@property(readonly, nonatomic, getter=isAllocated) BOOL allocated;
@property(readonly, nonatomic) CDUnknownBlockType readWithZerosBlock;
@property(readonly, nonatomic) CDUnknownBlockType readBlock;
@property(readonly, nonatomic) CDUnknownBlockType writeBlock;
@property(retain, nonatomic) ASDStreamFormat *readFormat;
@property(retain, nonatomic) ASDStreamFormat *writeFormat;
@property(nonatomic) long long frameCapacity;
- (void)clear;
- (void)deallocate;
- (void)allocate;
@end

