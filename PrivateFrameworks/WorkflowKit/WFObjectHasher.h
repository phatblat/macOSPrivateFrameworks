//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFObjectHasher : NSObject
{
    struct SipHasher _hasher;
    unsigned long long _hash;
    BOOL _finalized;
}

- (id).cxx_construct;
- (unsigned long long)finalize;
- (id)combineContentsOf:(id)arg1;
- (id)combineBytes:(void *)arg1 size:(unsigned long long)arg2;
- (id)combineInteger:(long long)arg1;
- (id)combineBool:(BOOL)arg1;
- (id)combine:(id)arg1;
- (id)init;

@end
