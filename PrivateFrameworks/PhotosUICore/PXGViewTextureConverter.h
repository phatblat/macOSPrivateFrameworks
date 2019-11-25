//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGTextureConverter.h"

@class NSObject<OS_dispatch_queue>, NSString, PXGImageTexture;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter>
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void).cxx_destruct;
- (id)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(readonly, nonatomic) BOOL supportsTextureAtlas;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (id)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
@property(readonly, nonatomic) int presentationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

