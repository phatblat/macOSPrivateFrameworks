//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessagePolicy.h"

#import "NSMutableCopying.h"

@class HMDHome;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>
{
    unsigned long long _userPrivilege;
    BOOL _requiresRemoteAccess;
    BOOL _requiresCameraStreamingAccess;
    HMDHome *_home;
}

@property(readonly) BOOL requiresCameraStreamingAccess; // @synthesize requiresCameraStreamingAccess=_requiresCameraStreamingAccess;
@property(readonly) BOOL requiresRemoteAccess; // @synthesize requiresRemoteAccess=_requiresRemoteAccess;
@property(readonly) unsigned long long userPrivilege; // @synthesize userPrivilege=_userPrivilege;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4;
- (id)initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3;
- (id)init;

@end

