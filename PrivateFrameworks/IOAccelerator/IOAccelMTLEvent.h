//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IOAccelMTLEvent : NSObject
{
    // Error parsing type: ^{__IOAccelShared={__CFRuntimeBase=QAQ}^{__IOAccelDevice}I@?Q{os_unfair_lock_s=I}^{IOAcceldirtyRingRO}^{IOAcceldirtyRingRW}^{IOAccelDirtyResourceCommand}I}, name: _sharedRef
    unsigned int _eventName;
    unsigned long long _globalTraceObjectID;
}

- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg1 value:(unsigned long long)arg2;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__IOAccelShared={__CFRuntimeBase=QAQ}^{__IOAccelDevice}I@?Q{os_unfair_lock_s=I}^{IOAcceldirtyRingRO}^{IOAcceldirtyRingRW}^{IOAccelDirtyResourceCommand}I}16, name: initWithShared:

@end

