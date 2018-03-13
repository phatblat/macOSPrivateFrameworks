//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation
{
    PCSCKKSItemModifyContext *_context;
}

@property(retain) PCSCKKSItemModifyContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)itemStored:(id)arg1;
- (void)setIdentityToCurrent;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData *)arg1 attributes:(struct __CFDictionary *)arg2 returnAttributes:(const struct __CFDictionary **)arg3 complete:(CDUnknownBlockType)arg4;
- (void)storePCSIdentity:(struct _PCSIdentityData *)arg1;
- (void)createManateePCSIdentity;
- (void)start;
- (id)initWithItemModifyContext:(id)arg1;

@end

