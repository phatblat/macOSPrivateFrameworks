//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProactiveSupport/_PASZonedObject.h>

@class _PASLock;

@interface _PASInternPool : _PASZonedObject
{
    _PASLock *_lock;
    CDUnknownBlockType _copyWithZone;
}

- (void).cxx_destruct;
- (void)clear;
- (BOOL)isInterned:(id)arg1;
- (id)_intern:(id)arg1 copyInput:(BOOL)arg2;
- (id)internNoCopy:(id)arg1;
- (id)intern:(id)arg1;
- (id)init;
- (id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(CDUnknownBlockType)arg2;

@end

