//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOProtobufSessionTaskDelegate.h"

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_initializationTask;
    GEOProtobufSessionTask *_updateTask;
    CDUnknownBlockType _initErrorHandler;
    CDUnknownBlockType _initFinishedHandler;
    CDUnknownBlockType _updateFinishedHandler;
    CDUnknownBlockType _updateErrorHandler;
}

+ (BOOL)acUpdateNeedsProxy;
+ (id)acUpdateURL;
+ (BOOL)acInitNeedsProxy;
+ (id)acInitURL;
@property(copy, nonatomic) CDUnknownBlockType updateErrorHandler; // @synthesize updateErrorHandler=_updateErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType updateFinishedHandler; // @synthesize updateFinishedHandler=_updateFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType initErrorHandler; // @synthesize initErrorHandler=_initErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType initFinishedHandler; // @synthesize initFinishedHandler=_initFinishedHandler;
@property(retain, nonatomic) GEOProtobufSessionTask *updateTask; // @synthesize updateTask=_updateTask;
@property(retain, nonatomic) GEOProtobufSessionTask *initializationTask; // @synthesize initializationTask=_initializationTask;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)startUpdateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startInitRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)init;
- (id)cancelError;
- (void)didCompleteUpdateTask;
- (void)didCompleteInitTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

