//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDXPCServiceClient.h"

@class NSXPCConnection;

@interface WDSafariDriverXPCClient : NSObject <WDXPCServiceClient>
{
    NSXPCConnection *_webDriverServiceConnection;
}

@property(retain, nonatomic) NSXPCConnection *webDriverServiceConnection; // @synthesize webDriverServiceConnection=_webDriverServiceConnection;
- (void).cxx_destruct;
- (void)fetchContentsOfFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAttributesOfFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchApplication:(id)arg1 usingArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)serverStopped;
- (void)serverStarted;
- (void)runServerOnPort:(long long)arg1 captureDiagnostics:(BOOL)arg2;
- (CDUnknownBlockType)_defaultErrorHandler;

@end

