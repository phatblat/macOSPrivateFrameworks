//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMFastEnumerator : NSObject
{
    id _strongBuffer[16];
    RLMRealm *_realm;
    struct RLMClassInfo *_info;
    struct Results *_results;
    struct Results _snapshot;
    id _collection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 count:(unsigned long long)arg2;
- (void)detach;
- (void)dealloc;
- (id)initWithResults:(struct Results *)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(struct RLMClassInfo *)arg4;
- (id)initWithList:(struct List *)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(struct RLMClassInfo *)arg4;

@end

