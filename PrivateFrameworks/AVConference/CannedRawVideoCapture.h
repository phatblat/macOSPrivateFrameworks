//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CannedVideoFrameFeeder.h"

@class NSArray, NSDictionary, NSString, VideoScaler;

__attribute__((visibility("hidden")))
@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder>
{
    int _width;
    int _height;
    NSArray *_allResolutions;
    int _allFrameCount;
    double _allFrameRate;
    NSDictionary *_currentResolution;
    struct __sFILE *_currentInputFile;
    struct __CVPixelBufferPool *_currentPixelBufferPool;
    struct __CVPixelBufferPool *_rotatedPixelBufferPool;
    VideoScaler *_videoScaler;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property(retain, nonatomic) VideoScaler *videoScaler; // @synthesize videoScaler=_videoScaler;
@property(retain, nonatomic) NSDictionary *currentResolution; // @synthesize currentResolution=_currentResolution;
@property(nonatomic) double allFrameRate; // @synthesize allFrameRate=_allFrameRate;
@property(nonatomic) int allFrameCount; // @synthesize allFrameCount=_allFrameCount;
@property(retain, nonatomic) NSArray *allResolutions; // @synthesize allResolutions=_allResolutions;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
- (void)getFrameRate:(double *)arg1 frameCount:(int *)arg2;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (int)initializeFrameResolutionArrayFromFolder:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

