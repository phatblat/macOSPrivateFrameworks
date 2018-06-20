//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface MFAATokenManager : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)confirmActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestMetadataForToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_init;
- (id)init;

@end

