//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMContext;

@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer
{
    PXCMMContext *_sendBackContext;
}

@property(retain, nonatomic) PXCMMContext *sendBackContext; // @synthesize sendBackContext=_sendBackContext;
- (void).cxx_destruct;
- (void)_completeSendBackActionWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)performSendBackActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
