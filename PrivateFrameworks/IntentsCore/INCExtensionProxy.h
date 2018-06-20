//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCExtensionProxy.h"

@class INCExtensionConnection, NSExtension;

@interface INCExtensionProxy : NSObject <INCExtensionProxy>
{
    BOOL _shouldCache;
    INCExtensionConnection *_connection;
    NSExtension *_extension;
    id <INExtensionContextVending> _vendorRemote;
    CDUnknownBlockType _imageCachingHandler;
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _backgroundAppHandler;
}

+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType backgroundAppHandler; // @synthesize backgroundAppHandler=_backgroundAppHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) CDUnknownBlockType imageCachingHandler; // @synthesize imageCachingHandler=_imageCachingHandler;
@property(nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;
@property(readonly, nonatomic) id <INExtensionContextVending> _vendorRemote; // @synthesize _vendorRemote;
@property(readonly, nonatomic) NSExtension *_extension; // @synthesize _extension;
@property(readonly, nonatomic) INCExtensionConnection *_connection; // @synthesize _connection;
- (void).cxx_destruct;
- (BOOL)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_processIntent:(id)arg1 intentResponse:(id)arg2 withCacheItems:(id)arg3;
@property(readonly, nonatomic, getter=_isExtensionBeingDebugged) BOOL _extensionBeingDebugged;
- (id)_initWithConnection:(id)arg1 extension:(id)arg2 vendorRemote:(id)arg3;
- (void)handleIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)confirmIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

