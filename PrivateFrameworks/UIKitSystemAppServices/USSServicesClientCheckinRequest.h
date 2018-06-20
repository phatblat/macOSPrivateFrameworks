//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USSXPCEncodable.h"

@class NSObject<OS_xpc_object>, NSURL;

@interface USSServicesClientCheckinRequest : NSObject <USSXPCEncodable>
{
    int _parentProcessIdentifier;
    NSURL *_parentBundleURL;
    NSObject<OS_xpc_object> *_notificationEndpoint;
    struct CGSize _initialSceneSize;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *notificationEndpoint; // @synthesize notificationEndpoint=_notificationEndpoint;
@property(nonatomic) struct CGSize initialSceneSize; // @synthesize initialSceneSize=_initialSceneSize;
@property(retain, nonatomic) NSURL *parentBundleURL; // @synthesize parentBundleURL=_parentBundleURL;
@property(nonatomic) int parentProcessIdentifier; // @synthesize parentProcessIdentifier=_parentProcessIdentifier;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithNotificationEndpoint:(id)arg1 parentProcessIdentifier:(int)arg2 parentBundleURL:(id)arg3 initialSceneSize:(struct CGSize)arg4;

@end

