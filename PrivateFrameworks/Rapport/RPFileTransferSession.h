//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Rapport/RPProfileSession.h>

@class NSUUID;

@interface RPFileTransferSession : RPProfileSession
{
    NSUUID *_transferIdentifier;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSUUID *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)addFileURL:(id)arg1;
- (void)_cleanup;
- (id)init;

@end
