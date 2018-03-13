//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUVideoExportRequest.h"

@class NSString, NSURL;

@interface PIAutoLoopExportRequest : NUVideoExportRequest
{
    NSString *_destinationUTI;
    NSURL *_destinationLongExposureURL;
    NSURL *_destinationMaskURL;
}

@property(readonly) NSURL *destinationMaskURL; // @synthesize destinationMaskURL=_destinationMaskURL;
@property(readonly) NSURL *destinationLongExposureURL; // @synthesize destinationLongExposureURL=_destinationLongExposureURL;
@property(readonly) NSString *destinationUTI; // @synthesize destinationUTI=_destinationUTI;
- (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithRequest:(id)arg1;

@end

